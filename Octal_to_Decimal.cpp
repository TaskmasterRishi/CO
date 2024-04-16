#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num,temp,i=0;
    int decimal=0;
    cout<<"Enter Octal Number : ";
    cin>>num;
    while(num>0){
        temp=num%10;
        decimal += temp*pow(8,i);
        i++;
        num /= 10;
    }
    cout<<"Decimal Number : "<<decimal;
    return 0;
}
