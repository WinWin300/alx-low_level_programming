#include <stdio.h>
/**
 *main - Entry Point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char str[] = "_putchar";
int x;
for  (x = 0; x < 8; ++x)
putchar(str[x]);
putchar('\n');
return (0);
}
