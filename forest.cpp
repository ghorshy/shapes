#include "forest.hpp"
#include <cassert>

Forest::Forest(const int h, const int w) {
  H = h;
  W = w;
  tab = new int *[H];
  for (int j = 0; j < H; j++) {
    tab[j] = new int[W];
    for (int i = 0; i < W; i++) {
      tab[j][i] = 0;
    }
  }
}

Forest::~Forest() {
  for (const auto t : trees) {
    delete t;
  }
  trees.clear();
  for (int j = 0; j < H; j++) {
    delete tab[j];
  }
  delete tab;
}

void Forest::AddTree(const int h, const char s, std::string c, const int y, const int x) {
	Tree* tree = new Tree(h, s, c);
    tree->x = x;
    tree->y = y;
    trees.push_back(tree);

    for (int j = 0; j < tree->height; j++)
        for (int i = 0; i < 2 * tree->height - 1; i++)
            if (tree->tab[j][i])
                tab[j + y][i + x] = tree->tab[j][i] * trees.size();
};

//void Forest::AddRectangle(int h, int w, char s, string c, int y, int x) {
//
//}
//
//void Forest::AddBorder(int h, int w, char s, string c, int y, int x) {
//
//}
//
//void Forest::AddTriangle(int h, int w, char s, string c, int y, int x) {
//
//}
//
//void Forest::AddReangle(int h, int w, char s, string c, int y, int x) {
//
//}

void Forest::PrintForest() {
	for (int j = 0; j < H; j++) {
    for (int i = 0; i < W; i++) {
	    const int k = tab[j][i];
      assert(k >= 0 && k <= trees.size());
      if (k) {
          std::cout << trees[k - 1]->color;
          std::cout << trees[k - 1]->znak;
      } else
          std::cout << " ";
    }
    std::cout << "\033[0m"<< std::endl;
  }
  //std::cout << std::endl << "Liczba drzew: " << Tree::counter << std::endl;
}