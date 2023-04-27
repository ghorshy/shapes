#include "shape.hpp"
#include <iostream>

class Triangle : public Shape {
public:
    void Fill();
    void Alloc();
    void Print();

    using Shape::Shape;
    Triangle(int h, char s, std::string c);

};