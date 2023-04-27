#include <iostream>
#include <vector>
#include "tree.hpp"

class Forest {
public:
    int H, W;
    int** tab;

    std::vector<Tree*> trees;

    Forest(int h, int w);
    ~Forest();

    void AddTree(int h, char s, std::string c, int y, int x); //10, '%', "green", 2, 2
    void PrintForest();

};

