#include<iostream>
using namespace std;
class complex{
~complex(){
cout<<"Destructor called"<<endl;
}
void fun(){
complex object;
}
int main(){
fun();
return 0;
}
