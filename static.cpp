*STATIC:
1.static local variable
2.static member variable
3.static member functions

#include<iostream>
using namespace std;
class fun{
private:
  int a; //instance variable means belong to instance(object)
  static b; //static member variable hich is by default equals to zero //there is no need to make the object for the static member variable it will still exist
  // but only on declaring it will not get the memory we should define it

public:
  void setbalance(int b){
    balance=b;
  }
   static void setb(int r){ //static member functions(if we want to acess this function or call this function without objecy so static word is used)
    b=r;
  }
};

int fun::b=3; //fun:: it si called membership variable and without this line the memory will not be given to the variable

int main(){
  fun f1; //object will contain the variable a but static member can be created only for once
  f1.setb(4); //we can access the member variable like this if there is any object or we can do like
  fun::setb(4); //if there is no objects
}
--------------------------------------------------------------------------------
int main(){
  fun f1; //object will contain the variable a but static member can be created only for once
  fun::b=7; //we can access this variable if it is public like this
}
