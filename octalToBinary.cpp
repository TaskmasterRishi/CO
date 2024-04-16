#include <bits/stdc++.h>
using namespace std;

int octalToDecimal(int octal)
{
    int decimal = 0;
    int temp, power = 0;
    while (octal != 0)
    {
        temp = octal % 10;
        decimal += temp * pow(8, power);
        power++;
        octal/=10;
    }
    return decimal;
}

string decimalToBinary(int decimal)
{
    string binary = "";
    while (decimal != 0)
    {
        if((decimal%2)==0){
            binary += '0';
        }
        else{
            binary += '1';
        }
        decimal/=2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

int main()
{
    int octal;
    cout << "Enter Octal number :";
    cin >> octal;
    int decimal = octalToDecimal(octal);
    cout << "Binary number : " << decimalToBinary(decimal) << endl;
    return 0;
}