 
 #include<iostream>
using namespace std ;
 main()
{
int a[50],size,sum=0;
cout<<"\n enter the array size:";
cin>>size;
cout<<"\n enter the array:";
for(int i=0;i<size;i++)
cin>>a[i];

for(int i=0;i<size;i++)
{
sum=sum+a[i];
}
cout<<"\n sum of array elements:"<<sum;
}
