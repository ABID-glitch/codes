#include<iostream>
using namespace std;
int dec_binary(int n);
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Binary number:"<<dec_binary(n);
}

int dec_binary(int n){
    int rem,i=1,binary=0;
    while(n!=0){
    rem=n%2;
    n=n/2;
    binary=binary+rem*i;
    i=i*10;
    }
    return binary;
}
