#include "Header.h"

void zadanie::setTable(int* size)
{
	int** tab, n = 0;

	std::cout << "Podaj liczbe wierszy i kolumn: ";
	std::cin >> n;
	*size = (2 * n) - 1;

	tab = new int* [*size];
	for (int i = 0; i < n; i++)
		tab[i - 1] = new int[*size];
}

void zadanie::zadanieA()
{
	setTable(&size);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == 0 || j == 0 || j == size - 1 || i == size - 1)
			{
				std::cout << "1";
			}
			else
			{
				std::cout << "0";
			}
		}
		std::cout << std::endl;
		border++;
	}
}

void zadanie::zadanieB()
{
	setTable(&size);
	border = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (border == j)
			{
				std::cout << "1";
			}
			else
			{
				std::cout << "0";
			}
		}
		std::cout << std::endl;
		border++;
	}
}

void zadanie::zadanieC()
{
	setTable(&size);
	border = size;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (border == j + 1)
			{
				std::cout << "1";
			}
			else
			{
				std::cout << "0";
			}
		}
		std::cout << std::endl;
		border--;
	}
}

void zadanie::zadanieD()
{
	setTable(&size);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == 0 || j == 0 || j == size - 1 || i == size - 1)
			{
				if (isSecond == true)
				{
					std::cout << "1";
				}
				else
				{
					std::cout << "0";
				}
			}
			else
			{
				std::cout << "0";
			}
		}
		std::cout << std::endl;
		isSecond = !isSecond;
	}
}

void zadanie::zadanieE()
{
	setTable(&size);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (isSecond == true)
			{
				std::cout << "1";
			}
			else
			{
				std::cout << "0";
			}
		}
		std::cout << std::endl;
		isSecond = !isSecond;
	}
}

void zadanie::zadanieF()
{
	setTable(&size);

	for (int i = 0; i < size; i++)
	{
		isSecond = true;
		for (int j = 0; j < size; j++)
		{
			if (isSecond == true)

			{
				std::cout << "1";
			}
			else
			{
				std::cout << "0";
			}
			isSecond = !isSecond;
		}
		std::cout << std::endl;
	}
}