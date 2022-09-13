#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 * Description: Print character using _putchar
 * Returns: Always 0 (Success)
 */
int main(void)
{
	char ch_arr[8] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(ch_arr[i]);
	}
	_putchar('\n');
