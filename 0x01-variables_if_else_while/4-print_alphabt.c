#include <stdio.h>
/**
 *main - Entry Point
 *
 *Return: Always 0 (SUccess)
 */
int main(void)
{
char x = 'a';
while (x <= 'z')
{
if (x == 'e' || x == 'q')
++x;
putchar(x);
++x;
}
putchar('\n');
return (0);
}
