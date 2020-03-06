#inlcude<iostream>
using namespace std;
class complex{
private:
int a,b;
public:
complex(int x){
a=x;
}
complex(){
a=0;b=0;
}
complex(int x,int y){
a=x;b=y;
}
};
int main(){
complex c1(3),c2(4,5),c3;
return 0;
}
