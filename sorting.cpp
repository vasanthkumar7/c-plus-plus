#include<iostream>
using namespace std;

main()
{
int a[50],temp,size;
cout<<"\n enter the array size:";
cin>>size;
cout<<"\n enter the array:";
for(int i=0;i<size;i++)
cin>>a[i];
cout<<"\n before sorting:";
for(int i=0;i<size;i++)
cout<<a[i]<<" ";
for(int i=0;i<size-1;i++)
{
for(int j=i+1;j<size;j++)
{
if(a[j] < a[i])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
cout<<"\n\n after sorting:";
for(int i=0;i<size;i++)
cout<<a[i]<<" ";
}
