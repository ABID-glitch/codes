#include<iostream>
using namespace std;

void i_stole(){
cout<<"If i stole you will see, I stole"<<endl;
throw "Found thief";
cout<<"I stole"<<endl;
}

void he_stole(){
cout<<"If he stole you will see, He stole"<<endl;
i_stole();
cout<<"He stole"<<endl;
}

void she_stole(){
cout<<"If she stole you will see, she stole"<<endl;
try{
he_stole();}
catch(...){
cout<<"Thief caught"<<endl;}
cout<<"She stole"<<endl;

}

int main(){
she_stole();
}
