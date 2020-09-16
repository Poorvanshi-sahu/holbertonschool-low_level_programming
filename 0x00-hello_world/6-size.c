#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long int longType;
long long int longlongType;
float floatType;

/*sizeof evaluates the size of a variable*/
printf("Size of char: %ld bytes\n", sizeof(charType));
printf("Size of int: %ld bytes\n", sizeof(intType));
printf("Size of long int: %ld bytes\n", sizeof(longType));
printf("Size of long long int: %ld bytes\n", sizeof(longlongType));
printf("Size of float: %ld bytes\n", sizeof(floatType));
return (0);
}
