#include <iostream>
using namespace std;

class gold_manufacturing {
public:
    void gold() {
        cout << "gold" << endl;
    }
    void rodium() {
        cout << "rodium" << endl;
    }
    void brass() {
        cout << "brass" << endl;
    }
};

class precious_metal_manufacturing : public gold_manufacturing {
public:
    void diamond() {
        cout << "diamond" << endl;
    }
    void other_metal() {
        cout << "other_metal" << endl;
    }
};

class diamond_metal_manufacturing : public precious_metal_manufacturing {
public:
    void big_diamond() {
        cout << "big_diamond" << endl;
    }
};

int main() {
    diamond_metal_manufacturing necklace;
    necklace.big_diamond();
    
    return 0;
}

