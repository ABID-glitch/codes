
#include<iostream>
  using namespace std;
  class box{
  private:
  int l,b,h;
  public:
  void setdata(int x,int y,int z){
  l=x;b=y;h=z;
  }
  void displaydata(){
  cout<<"l="<<l<<"\nb="<<b<<"\nh="<<h<<endl;
  }
  };
  int main(){
  box b1;
  b1.setdata(5,4,9);
  b1.displaydata();
  return 0;
  }
