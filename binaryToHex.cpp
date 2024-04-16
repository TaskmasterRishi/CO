#include<bits/stdc++.h>
using namespace std;

string decimalToHex(int decimal){
    string hex="";
    while(decimal!=0){
        int rem = decimal%16;
        char hexDigit;
        if(rem >= 0 && rem <=9){
            hexDigit = rem + '0';
        }
        else{
            hexDigit = rem - 10 + 'A';
        }
        hex += hexDigit;
        decimal /= 16;
    }
    reverse(hex.begin(),hex.end());
    return hex;
}

int binaryToDecimal(int binary){
    int decimal = 0;
    int temp,power=0;
    while(binary != 0){
        temp = binary % 10;
        if(temp == 1){
            decimal += pow(2,power);
            power++;
        }
        else{
            power++;
        }
        binary/=10;
    }
    return decimal;
}

int main(){
    int binary;
    cout<<"Enter binary number :";
    cin>>binary;
    int decimal = binaryToDecimal(binary);
    cout<<"Hexadecimal number : "<<decimalToHex(decimal)<<endl;
    return 0;
}