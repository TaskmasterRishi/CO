#include<iostream>
#include<vector>
using namespace std;

int main(){
    int temp,num,i;
    vector<int> binary;
    cout<<"Enter decimal number"<<endl;
    cin>>num;
    while(num>0){
        temp = num%2;
        binary.push_back(temp);
        num=num/2;
    }
    cout<<"binary number :";
    for(i=binary.size()-1;i>=0;i--){
        cout<<binary[i];
    }
    return 0;
}
