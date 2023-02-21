#include "main.h"


	/**
	 * Main - Entry
	 * print_alphabet - print all alphabet in lowercase
	 * Return: Success
	 */


	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}


