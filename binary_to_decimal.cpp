#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num,power=1;
    int decimal=0,temp=0;
    cout<<"Enter binary number : ";
    cin>>num;
    while(num>0){
        temp = num%10;
        decimal += temp*power;
        power *= 2;
        num/=10;
    }
    cout<<"Decimal number : "<<decimal;
    return 0;
}
