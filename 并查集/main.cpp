#include "UF.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream f;
    f.open("tinyuf.txt", ios::in);
    int N = 10;
    UF uf(10);
    while (!f.eof()) {
        int p, q;
        f >> p >> q;
        cout << p << q << endl;
        uf.union_(p, q);
    }
    cout << uf.count << endl;
}