#include <iostream>
#include "tree.hpp"

void Tree::printTree()
{

	if (color == "green")
		std::cout << "\033[0;32m";

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < 2 * height - 1; j++)
		{
			std::cout << tab[i][j];
		}
		std::cout << std::endl;
	}
	for (int j = 0; j < height; j++)
	{
		for (int i = 0; i < 2 * height - 1; i++)
		{
			std::cout << tab[j][i];
		}
		std::cout << std::endl;
	}
}

Tree::Tree(const int h, const char z, std::string c)
{
	int j, i;
	height = h;
	znak = z;
	color = c;

	if (c == "red") color = "\033[1;31m";
	if (c == "yellow") color = "\033[1;33m";
	if (c == "green") color = "\033[1;32m";
	if (c == "blue") color = "\033[1;34m";
	if (c == "cyan") color = "\033[1;36m";
	if (c == "purple") color = "\033[1;95m";


	tab = new int*[height];
	for (j = 0; j < height; j++)
	{
		tab[j] = new int[2 * height - 1];
		for (i = 0; i < 2 * height - 1; i++)
			tab[j][i] = 0;
	}

	for (j = 0; j < height; j++)
	{
		for (i = height - j - 1; i < height + j; i++)
		{
			tab[j][i] = 1;
		}
	}

	counter++;
}

Tree::~Tree()
{
	for (int j = 0; j < height; j++)
	{
		delete tab[j];
	}
	delete tab;
	counter--;
	std::cout << std::endl << "kasuje drzewo: zostalo " << counter << std::endl;
}
