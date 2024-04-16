#include <bits/stdc++.h>

using namespace std;

bool XOR(bool a, bool b) {
    return (a || b) && !(a && b);
}

bool XNOR(bool a, bool b) {
    return !(a || b) || (a && b);
}

bool NOR(bool a, bool b) {
    return !(a || b);
}

bool NAND(bool a, bool b) {
    return !(a && b);
}

int main() {
    bool a, b;

    cout << "Enter value for A (0 or 1): ";
    cin >> a;
    cout << "Enter value for B (0 or 1): ";
    cin >> b;

    cout << "XOR: " << XOR(a, b) << endl;
    cout << "XNOR: " << XNOR(a, b) << endl;
    cout << "NOR: " << NOR(a, b) << endl;
    cout << "NAND: " << NAND(a, b) << endl;

    return 0;
}
