#include<iostream>
using namespace std;



int hash_function(int a)
{
	int sum=0;
	for(int t=a,i=0;i<3;i++,t/=10)
	sum+=t%10;
	
	while(sum>9)
	{	int t=sum%10;
		sum/=10;
		sum+=t;
	}return sum;
}
int hash_table[10]={};
void Insert()
{	int a,index,count=0;char ch='y';
	while(ch!='n')
	{	cout<<"Insert value: ";cin>>a;
		index=hash_function(a);
		try
		{	if(hash_table[index]!=0) 
			throw index;
			hash_table[index]=a;
		}
		catch(int a)
		{	cout<<"Collision occured at position "<<a<<endl;}
		cout<<"Want to continue? ";cin>>ch;
	}
}
void Delete()
{
	int a,index;
	cout<<"Delete value: ";cin>>a;
	index=hash_function(a);
	hash_table[index]=0;
}
void Search()
{
	int a,index,count=0;
	cout<<"Search value: ";cin>>a;
	index=hash_function(a);
	
	if(hash_table[index]==a)cout<<"Found at position "<<index<<endl;
}



void Display()
{
	for(int i=0;i<10;i++)
	cout<<hash_table[i]<<" ";
	cout<<endl;
}
int main()
{
	char ch;
	while(1)
	{
		cout<<"\n1.Insert 2.Delete 3.Search 4.Display\nEnter choice:";cin>>ch;
		switch(ch)
		{
			case '1': Insert();break;
			case '2': Delete();break;
			case '3': Search();break;
			case '4': Display();break;
			default : cout<<"Wrong choice.";exit(0);
		}
	}
}
