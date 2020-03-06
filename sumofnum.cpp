#include<iostream>
using namespace std;
class Example
{ 
public:
int a;
Example add(Example E){
a=a+E.a;
}
};
int main(){
Example E1,E2;
E1.a=12;
E2.a=4;
cout<<"Initial values:"<<endl;
cout<<"Value of object one is:"<<E1.a<<"\nand object two is:"<<E2.a<<endl;;

E2.add(E2);
cout<<"New values:"<<endl;
cout<<"Value of object one is:"<<E1.a<<"\nand object two is:"<<E2.a<<endl;
return 0;
}
