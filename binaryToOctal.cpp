#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int binary)
{
    int decimal = 0;
    int temp, power = 0;
    while (binary != 0)
    {
        temp = binary % 10;
        if (temp == 1)
        {
            decimal += pow(2, power);
            power++;
        }
        else
        {
            power++;
        }
        binary /= 10;
    }
    return decimal;
}

string decimalToOctal(int decimal)
{
    string octal = "";
    int temp;
    while (decimal > 0)
    {
        temp = decimal % 8;
        octal += to_string(temp);
        decimal /= 8;
    }
    reverse(octal.begin(),octal.end());
    return octal;
}

int main()
{
    int binary;
    cout << "Enter binary number :";
    cin >> binary;
    int decimal = binaryToDecimal(binary);
    cout << "Octal number : " << decimalToOctal(decimal) << endl;
    return 0;
}