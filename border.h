#include "rectangle.hpp"
#include <iostream>

class Border : public Rectangle {
public:
    void Fill();
    void Alloc();
    void Print();

    using Rectangle::Rectangle;
    Border(int h, int w, char s, std::string c);
    Border(int h, char s, std::string c);

};
