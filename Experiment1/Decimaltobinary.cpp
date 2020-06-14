#include<iostream>
using namespace std;
int dec_bin(int);
int main(){
int n;
cout<<"Enter a number : ";
cin>>n;
cout<<"Binary Number : "<<dec_bin(n);
}

int dec_bin(int n){
int rem,i=1,binary=0;
while(n!=0){
rem=n%2;
n=n/2;
binary=binary+rem*i;
i=i*10;}

return binary;}
