#include "right_triangle.h"
#include <iostream>

void RTriangle::Fill() {
	for (int j = 0; j < height; j++)
        for (int i = 0; i <= j; i++)
            tab[j][i] = 1;
};

void RTriangle::Alloc() {
	tab = new int* [height];
    for (int j = 0; j < height; j++) {
        tab[j] = new int[width];
        for (int i = 0; i < width; i++)
            tab[j][i] = 0;
    }
}

void RTriangle::Print() {
	for (int j = 0; j < height; j++) {
        for (int i = 0; i < width; i++) {
            if (tab[j][i]) {
                std::cout << color << znak;
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << "\033[0m" << std::endl;
}

RTriangle::RTriangle(const int h, const char s, std::string c) : Shape(h, s, c) {
    std::cout << "Konstruktor Right Triangle" << std::endl;
    width = h;
    RTriangle::Alloc();
    RTriangle::Fill();
};