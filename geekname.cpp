#include<iostream>
using namespace std;
class geeks{
public:
int id;
string geekname;
void printid(){
cout<<"Geek id is:"<<id<<endl;
}
void printname(){
cout<<"Geekname is":<<geekname<<endl;
}
};
int main(){
geeks ob1;
ob1.id=15;
ob1.geekname="Abid";
ob1.printname();
ob1.printid();
return 0;
}
