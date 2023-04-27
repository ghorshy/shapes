#include "shape.hpp"
#include <iostream>

class Rectangle : public Shape {
public:
    void Fill();
    void Alloc();
    void Print();

    using Shape::Shape;
    Rectangle(int h, int w, char s, std::string c);
    Rectangle(int h, char s, std::string c);

};