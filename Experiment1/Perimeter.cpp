#include<iostream>
#include<math.h>
#define pie 3.14
#define area 314

using namespace std;
class rectangle{
private:
    int length=2,b;
public:
    int breadth(){
    b=area/length;}

    int perimeter_rec(){
    cout<<2*(b+length);
    return(2*(b+length));
    }
    }r1;

class circle{
private:
    int r;
public:
    int radius(){
    r=sqrt(area/pie);}

    int perimeter_cr(){
    cout<<2*pie*r;
    return(2*pie*r);
    }
    }c1;

class triangle{
private:
    float d,ba,height=4;
public:
    float base(){
    ba=(2*area)/height;
    }

    int perimeter_tr(){
    d=ba+height+sqrt(ba*ba+height+height);
    return(d);
    }
    }t1;
class square{
private:
    float s;
public:
    float side(){
    s=sqrt(area);
    }

    float perimeter_sq(){
    cout<<4*s;
    return(4*s);
    }
}s1;

int main(){
float f=s1.side();
float g=t1.base();
int j=r1.breadth();
int m=c1.radius();

float a[4];
a[0]=s1.perimeter_sq();
cout<<endl;
a[1]=t1.perimeter_tr();
cout<<endl;
a[2]=r1.perimeter_rec();
cout<<endl;

for(int i=0;i<=4;i++){
    if(a[i]==high)break;
}

if(i==0)
    cout<<"Perimeter of square is max"<<a[i]<<endl;
    else if(i==1)
        cout<<"Perimeter of triangle is max"<<a[i]<<endl;
    else if(i==2)
        cout<<"Perimeter of rectangle is max"<<a[i]<<endl;
    else
        cout<<"Perimeter of circle is max"<<a[i]<<endl;

        for(int i=0;i<=4;i++){
    if(a[i]==low)break;
}

if(i==0)
    cout<<"Perimeter of square is min"<<a[i]<<endl;
    else if(i==1)
        cout<<"Perimeter of triangle is min"<<a[i]<<endl;
    else if(i==2)
        cout<<"Perimeter of rectangle is min"<<a[i]<<endl;
    else
        cout<<"Perimeter of circle is min"<<a[i]<<endl;
}
