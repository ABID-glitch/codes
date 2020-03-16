#include<iostream>
using namespace std;
template <class X>
X big(X x,X y){
if(x>y){
return(x);
}
else 
return(y);
}
int main(){
cout<<big(3,4)<<endl;
cout<<big(7.6,6.5)<<endl;
return 0;
}
