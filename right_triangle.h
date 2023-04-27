#include "shape.hpp"
#include <iostream>

class RTriangle : public Shape {
public:
    void Fill();
    void Alloc();
    void Print();

    using Shape::Shape;
    RTriangle(int h, char s, std::string c);

};