#include<iostream>
#include<math.h>
using namespace std;

void check(int x){
try{
cout<<"Check if there is any exception"<<endl;
if(x<0){
cout<<"Throw exception"<<endl;
throw x;
}
cout<<"No exception found"<<endl;
}

catch(int){
cout<<"Exception found!, Integer is negative"<<endl;
abort();
}
}
void calculate(int x){
check(x);
cout<<"Square root of"<<x<<" is "<<sqrt(x)<<endl;
}

int main(){
int x;
cout<<"Enter the integer you want root of "<<endl;
cin>>x;
calculate(x);
}
