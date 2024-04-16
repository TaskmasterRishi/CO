#include <bits/stdc++.h>
using namespace std;

string decimal_to_binary(float decimal)
{
    int integer = decimal;
    float point = decimal - integer;

    string integers = "";
    while (integer > 0)
    {
        integers += to_string(integer % 2);
        integer /= 2;
    }
    reverse(integers.begin(), integers.end());
    string points = "";
    int max = 16;
    for (int i = 0; i < max; i++)
    {
        point *= 2;
        int bit = point;
        points += to_string(bit);
        point -= bit;
    }

    string binary = integers + "." + points;
    return binary;
}

float binary_to_decimal(string binaryNumber)
{
    double decimal = 0;
    int i = 0, precisionPoint;
    int len = binaryNumber.length();
    for (i = 0; i < len; i++)
    {
        if (binaryNumber[i] == '.')
        {
            precisionPoint = i;
            break;
        }
    }
    for (i = 0; i < precisionPoint; i++)
    {
        if (binaryNumber[i] == '1')
        {
            decimal += pow(2, precisionPoint - 1 - i);
        }
    }
    for (i = precisionPoint + 1; i < len; i++)
    {
        if (binaryNumber[i] == '1')
        {
            decimal += pow(2, precisionPoint - i);
        }
    }
    return decimal;
}

int main()
{
    float decimal;
    cout << "-----Decimal to Binary-----" << endl;
    cout << "Enter Decimal Value : ";
    cin >> decimal;
    cout << "Binary Number : " << decimal_to_binary(decimal) << endl
         << endl;

    cout << "-----Binary to Decimal-----" << endl;
    cout << "Enter Binary Number : ";
    string binaryNumber;
    cin >> binaryNumber;
    cout << "Decimal Number : " << binary_to_decimal(binaryNumber);
    return 0;
}