#include <bits/stdc++.h>
using namespace std;

int hexToDecimal(string hex) {
    int len = hex.length();
    int decimal = 0;
    for (int i = len - 1; i >= 0; i--) {
        int digitValue;
        if (hex[i] >= '0' && hex[i] <= '9')
            digitValue = hex[i] - '0';
        else if (hex[i] >= 'a' && hex[i] <= 'f')
            digitValue = hex[i] - 'a' + 10;
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            digitValue = hex[i] - 'A' + 10;
        decimal += digitValue * pow(16, len - 1 - i);
    }
    return decimal;
}

string decimalToBinary(int decimal) {
    string binary = "";
    int temp;
    while (decimal != 0) {
        temp = decimal % 2;
        binary += to_string(temp);
        decimal /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

int main() {
    string hex;
    cout << "Enter Hexdecimal number :";
    cin >> hex;
    int decimal = hexToDecimal(hex);
    cout<<decimal<<endl;
    cout << "Binary number : " << decimalToBinary(decimal) << endl;
    return 0;
}
