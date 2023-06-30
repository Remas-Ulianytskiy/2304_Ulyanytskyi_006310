#include <iostream>
#include <vector>

using namespace std;

class Tree {
public:
    virtual void draw() const = 0;
};

class Tree_one : public Tree {
public:
    void draw() const override {
        cout << "  / \\" << endl;
        cout << " // \\\\" << endl;
        cout << "/// \\\\\\" << endl;
        cout << "  | |" << endl;
    }
};

class Tree_two : public Tree {
public:
    void draw() const override {
        cout << "  *" << endl;
        cout << " ***" << endl;
        cout << "*****" << endl;
        cout << "  |" << endl;
    }
};

class Tree_three : public Tree {
public:
    void draw() const override {
        cout << "   / \\" << endl;
        cout << "  / * \\" << endl;
        cout << " /*/|\\*\\" << endl;
        cout << "/**/|\\**\\" << endl;
        cout << "    |" << endl;
    }
};

int main() {
    Tree_one tree_1;
    Tree_two tree_2;
    Tree_three tree_3;

    vector<Tree*> tree_array = { &tree_1, &tree_2, &tree_3 };

    for (int i = 0; i < tree_array.size(); ++i) {
        cout << "Малюнок " << i + 1 << ":" << endl;
        tree_array[i]->draw();
        cout << endl;
    }

    return 0;
}