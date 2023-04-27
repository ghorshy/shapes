#include "triangle.h"
#include <iostream>

void Triangle::Fill() {
	for (int j = 0; j < height; j++) {
        for (int i = height - j - 1; i < height + j; i++)
            tab[j][i] = 1;
    }

};

void Triangle::Alloc() {
	tab = new int* [height];
    for (int j = 0; j < height; j++) {
        tab[j] = new int[2 * height - 1];
        for (int i = 0; i < 2 * height - 1; i++)
            tab[j][i] = 0;
    }
}

void Triangle::Print() {
	for (int j = 0; j < height; j++) {
        for (int i = 0; i < 2 * height - 1; i++) {
            if (tab[j][i]) {
	            std::cout << color << znak;
            }
            else {
	            std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    
}

Triangle::Triangle(const int h, const char s, std::string c) : Shape(h, s, c) {
    std::cout << "Konstruktor Triangle" << std::endl;
    width = h;
    Triangle::Alloc();
    Triangle::Fill();
};