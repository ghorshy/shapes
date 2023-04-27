#include "border.h"
#include <iostream>

void Border::Fill() {
    int i, j;

    for (i = 0, j = 0; i < width; i++)
        tab[j][i] = 1;
   
    for (j = 1; j < height - 1; j++) {
            tab[j][0] = 1;
            tab[j][width-1] = 1;
    }
    
    for (i = 0, j = height - 1; i < width; i++)
        tab[j][i] = 1;

};

void Border::Alloc() {
	tab = new int* [height];
    for (int j = 0; j < height; j++) {
        tab[j] = new int[width];
        for (int i = 0; i < width; i++)
            tab[j][i] = 0;
    }
}


void Border::Print() {
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

Border::Border(const int h, const int w, const char s, std::string c) : Rectangle(h, w, s, c) {
    std::cout << "Konstruktor Rectangle Border" << std::endl;
    Border::Alloc();
    Border::Fill();
}

Border::Border(const int h, const char s, std::string c) : Rectangle(h, s, c) {
    std::cout << "Konstruktor Square Border" << std::endl;
    Border::Alloc();
    Border::Fill();
}