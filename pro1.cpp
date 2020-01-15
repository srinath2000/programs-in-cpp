#include<iostream>
using namespace std;
main(int)
{
int n,i,j;int p;
cout<<"enter the number ";
cin>>n;
for(i=2;i<=n;i++)
{
if(n%i==0)
{p=1;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
p=0;
break;
}}
if(p=1)
{
cout<<"\t"<<i;
}}
}}
