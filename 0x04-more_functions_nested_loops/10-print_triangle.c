#include "main.h"
/**
* print_triangle - prints a triangle.
* @size: numbers of lines.
* Return: no return. */
void print_triangle(int size)
{
int h;
int a;
if (size<=0)
_putchar('\n');
for (a=0;a<size;a++)
{
for (h=size;h-1>a;h--)
{
_putchar(' ');
}
for (h=0;h- 1<a;h++)
{
_putchar('#');
}
_putchar('\n');
}
}
