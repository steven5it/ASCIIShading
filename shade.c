/* shade.c defines the shade, which converts input char ot output char */
#include "shade.h"

int shade(char input_char, char* output)
{
	switch(input_char)
	{
		case('0'):
			*output = ' ';
			return 1;
			break;
		case('1'):
			*output = '.';
			return 1;
			break;
		case('2'):
			*output = ':';
			return 1;
			break;
		case('3'):
			*output = 'c';
			return 1;
			break;
		case('4'):
			*output = 'o';
			return 1;
			break;
		case('5'):
			*output = 'C';
			return 1;
			break;
		case('6'):
			*output = 'O';
			return 1;
			break;
		case('7'):
			*output = '8';
			return 1;
			break;
		case('8'):
			*output = '@';
			return 1;
			break;
		default:
			return 1;
			break;
	}
}
