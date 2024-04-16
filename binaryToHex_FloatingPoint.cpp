#include<bits/stdc++.h>
using namespace std;

string decimalToHex(double decimal){
    int intPart = decimal;
    double fracPart = decimal - intPart;
    string intHex = "";
    while(intPart!=0){
        int rem = intPart%16;
        char hexDigit;
        if(rem >= 0 && rem <=9){
            hexDigit = rem + '0';
        }
        else{
            hexDigit = rem - 10 + 'A';
        }
        intHex += hexDigit;
        intPart /= 16;
    }
    
    string fracHex = "";
    int max = 20;
    while(fracPart > 0 && fracHex.length() < max){
        fracPart *= 16;
        int rem = fracPart;
        char hexDigit;
        if(rem >= 0 && rem <=9){
            hexDigit = rem + '0';
        }
        else{
            hexDigit = rem - 10 + 'A';
        }
        fracHex += hexDigit;
        fracPart -= rem;
    }
    
    return intHex + (fracHex.empty() ? "":"." + fracHex);
}

double binaryToDecimal(string binary){
    double decimal = 0.0;
    bool isFractionalPart = false;
    int FractionalPower = -1;
    int power = 0;
    
    for(int i=0; i<binary.length(); i++){
        if(binary[i] == '.'){
            isFractionalPart = true;
            continue;
        }
        if(!isFractionalPart){
            if(binary[i]=='1'){
                decimal += pow(2,power);
            }
            power++;
        }
        else{
            decimal += (binary[i] - '0') * pow(2,FractionalPower);
            FractionalPower--;
        }
    }
    return decimal;
}

int main(){
    string binary;
    cout<<"Enter binary number :";
    cin>>binary;
    double decimal = binaryToDecimal(binary);
    cout<<"Hexadecimal number : "<<decimalToHex(decimal)<<endl;
    return 0;
}