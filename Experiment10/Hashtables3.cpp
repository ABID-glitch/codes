#include<iostream>
using namespace std;
int hash_function(int a)
{	int sum=0;
	for(int t=a,i=0;i<3;i++,t/=10)
	sum+=t%10;

	while(sum>9)
	{	int t=sum%10;
		sum/=10;
		sum+=t;
	}
	return sum;
}
int hash_table[10]={};
void Insert()
{	int a,index,count=0;char ch='y';
	while(ch!='n')
	{	cout<<"Insert value: ";cin>>a;
		index=hash_function(a);

		while(hash_table[index]!=0 && count<10)
		{	index+=1;index%=10;
			count++;
		}
		hash_table[index]=a;
		cout<<"Want to continue? ";cin>>ch;
	}
}
void Delete()
{	int a,index,count=0;
	cout<<"Delete value: ";cin>>a;
	index=hash_function(a);

	while(count<10)
	{	if(hash_table[index]==a)hash_table[index]=0;
		index+=1;index%=10;
		count++;
	}
}


void Search()
{	int a,index,count=0;
	cout<<"Search value: ";cin>>a;
	index=hash_function(a);

	while(count<10)
	{	if(hash_table[index]==a)cout<<"Found at position "<<index<<" ";
		index+=1;index%=10;
		count++;
	}
}
void Display()
{	for(int i=0;i<10;i++)
	cout<<hash_table[i]<<" ";
	cout<<endl;
}
int main()
{	char ch;
	while(1)
	{	cout<<"\n1.Insert 2.Delete 3.Search 4.Display\nEnter choice:";cin>>ch;
		switch(ch)
		{	case '1': Insert();break;
			case '2': Delete();break;
			case '3': Search();break;
			case '4': Display();break;
			default : cout<<"Wrong choice.";exit(0);
		}
}
}
