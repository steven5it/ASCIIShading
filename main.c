/* handles input and output for an ASCII shading program*/

#include <stdio.h>
#include <stdlib.h>

#include "shade.h"

#define DEBUG 0

int main(int argc, char **argv)
{
	int width, length;
	if (argc != 3)
	{
		printf("Usage: program arg1 arg2\n");
		exit(-1);
	}
	else
	{
		width = atof(*(argv + 1));
		length = atof(*(argv + 2));
	}

	#if DEBUG
	printf("width: %d, length: %d\n", width, length);
	#endif

	char c;
	char output[1];
	int line_count = 0;
	int width_count = 0;
	while ((c = getchar()) != EOF && line_count < length)
	{
		// validate input and convert to output
		if (shade(c, output) == 0)
		{
			printf("error: invalid input.\n");
			exit(-1);
		}

		// output char and increment the width counter
		putchar(*output);
		width_count++;

		//if width has reached maxwidth, print a newline, increment count, and reset width to 0
		if (width_count == width)
		{
			printf("\n");
			line_count++;
			width_count = 0;
		}
	}
}
