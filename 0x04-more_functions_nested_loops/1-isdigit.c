#include "holberton.h"
#include <ctype.h>
/**
 *_isdigit - check if c is a digit
 *@c: is entry point
 *Return: 0
 **/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
