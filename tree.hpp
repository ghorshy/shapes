class Tree {
private:
    int height;
    char znak;
    std::string color;

    int** tab;
    int x{}, y{};

public:
    void printTree();
    Tree(int h, char z, std::string c);

    ~Tree();

static int counter;

    friend class Forest;
};