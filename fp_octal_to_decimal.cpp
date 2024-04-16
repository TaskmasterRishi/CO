#include <bits/stdc++.h>
using namespace std;

string octal_to_binary(float octal)
{
    int integer = octal;
    float point = octal - integer;

    string integers = "";
    while (integer > 0)
    {
        integers += to_string(integer % 8);
        integer /= 8;
    }
    reverse(integers.begin(), integers.end());
    string points = "";
    int max = 16;
    for (int i = 0; i < max; i++)
    {
        point *= 8;
        int bit = point;
        points += to_string(bit);
        point -= bit;
    }

    string binary = integers + "." + points;
    return binary;
}

float binary_to_octal(string binaryNumber)
{
    double octal = 0;
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
            octal += pow(2, precisionPoint - 1 - i);
        }
    }
    for (i = precisionPoint + 1; i < len; i++)
    {
        if (binaryNumber[i] == '1')
        {
            octal += pow(2, precisionPoint - i);
        }
    }
    return octal;
}

int main()
{
    float octal;
    cout << "-----Octal to Decimal-----" << endl;
    cout << "Enter octal Value : ";
    cin >> octal;
    cout << "Binary Number : " << octal_to_binary(octal) << endl
         << endl;

    cout << "-----Binary to octal-----" << endl;
    cout << "Enter Binary Number : ";
    string binaryNumber;
    cin >> binaryNumber;
    cout << "octal Number : " << binary_to_octal(binaryNumber);
    return 0;
}