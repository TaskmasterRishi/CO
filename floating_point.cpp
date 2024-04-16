#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
    string binary_num;
    int decimal=0,i;
    cout<<"Enter binary : "<<endl;
    cin>>binary_num;
    while(i>binary_num.length()){
        if(binary_num[i]=='0'){
            i++;
            break;
        }
        else{
            decimal += (binary_num[i] - '0')*pow(2,binary_num.length()-i-1);
            i++;
        }
    }
    double fraction =0;
    while(i>binary_num.length()){
         fraction += (binary_num[i] - '0')*pow(2,-(binary_num.length()-i-1));
    }
    cout<<decimal+fraction;
    return 0;
}
