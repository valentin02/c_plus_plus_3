#include "pch.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char array[100];
	std::cout << "Еnter the encrypted text:\n";
	gets_s(array);
	_strrev(array);
	std::cout << "\nProcessed text:\n";
	std::cout << array << "\n";
}


