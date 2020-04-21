#include<stdio.h>
int main(){
int a,b,c,k;
printf("Enter 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
k=a;
if(b>a&&b>c)
k=b;
if(c>a&&c>b)
k=c;
printf("Greater number is %d:",k);
return 0;
}
