#include<iostream>
#include<vector>
using namespace std;

int main(){
    int temp=0,i,num;
    vector<int> Octal;
    cout<<"Enter decimal number : ";
    cin>>num;
    while(num>0){
        temp = num%8;
        Octal.push_back(temp);
        num/=8;
    }
    for(i=Octal.size()-1;i>=0;i--){
        cout<<Octal[i]<<" ";
    }
return 0;
}
