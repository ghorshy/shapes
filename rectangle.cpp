#include "rectangle.hpp"
#include <iostream>

void Rectangle::Fill(){
	for (int j = 0; j < height; j++) {
    for (int i = 0; i < width; i++)
      tab[j][i] = 1;
  }

};

void Rectangle::Alloc() {
	tab = new int* [height];
    for (int j = 0; j < height; j++) {
        tab[j] = new int[width];
        for (int i = 0; i < width; i++)
            tab[j][i] = 0;
    }
}


void Rectangle::Print() {
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

Rectangle::Rectangle(const int h, const int w, const char s, std::string c) : Shape(h, s, c){
  std::cout<< "Konstruktor Rectangle"<< std::endl;
  width = w;
  Rectangle::Alloc();
  Rectangle::Fill();
}

Rectangle::Rectangle(const int h, const char s, std::string c) : Shape(h, s, c){
  std::cout<< "Konstruktor Square"<< std::endl;
  width = h;
  Rectangle::Alloc();
  Rectangle::Fill();
}