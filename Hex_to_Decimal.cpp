#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int decimal = 0, temp = 0, i = 0, p = 0;
    string Hex;
    cout << "Enter Hex number : " << endl;
    cin >> Hex;
    int len = Hex.length();
    for (i = Hex.length() - 1; i >= 0; i--)
    {
        len--;
        if (Hex[i] >= '0' || Hex[i] <= '9')
            temp = Hex[i] - '0';
        else if (Hex[i] >= 'a' && Hex[i] <= 'f')
            temp = Hex[i] - 'a' + 10;
        else if (Hex[i] >= 'A' && Hex[i] <= 'F')
            temp = Hex[i] - 'A' + 10;

        decimal += temp*pow(16,len);
    }
        cout << "Decimal Number : " << decimal;
        return 0;
    }
