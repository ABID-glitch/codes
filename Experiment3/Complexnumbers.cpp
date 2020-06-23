
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;            
    public:
        void setcom(int a,int b);
        
        void showcom();

        Complex add(Complex c)
        {
            Complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
        int showa()
        {
            return a;
        }
        int showb()
        {
            return b;
        }
	Complex diff(Complex p)
	{
		Complex tempo;
		tempo.a=a-p.a;
		tempo.b=b-p.b;
		return tempo;
	}
};
void Complex::setcom(int a,int b)
{
	int x,y;
    cout<<"Enter the real part:";
    cin>>x;
    a=x;
    cout<<"Enter imaginary part:";
    cin>>y;
    b=y;

    this->a=a,this->b=b;
}
void Complex::showcom()
{
    cout<<"\ta="<<a<<"\tb="<<b;
}

int main()
{
    Complex *j=new Complex;
    Complex *k=new Complex;
    Complex *l=new Complex;
    Complex *m=new Complex;
    Complex c1,c2,c3,c4;
    j=&c1;
    k=&c2;
    l=&c3;
    m=&c4;
    
    c1.setcom(12,15); 
    c2.setcom(10,8);
    c3=c1.add(c2);
    c4=c1.diff(c2); 	
    int q=c3.showa();
    int w=c3.showb();
    int e=c4.showa();
    int r=c4.showb();
    cout<<"Sum of complex numbers="<<q<<"+i"<<w<<"\n";
    cout<<"Difference of complex numbers="<<e<<"+i"<<r<<"\n";
    
    delete j;
    delete k;
    delete l;
    delete m;
    return 0;
}
