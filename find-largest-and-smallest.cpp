 #include<iostream>
 using namespace std;
 main()
{
int a[50],temp,size;
cout<<"\n enter the array size:";
cin>>size;
printf("\n enter the array:");
for(int i=0;i<size;i++)
cin>>a[i];
for(int i=0;i<size-1;i++)
{
for(int j=i+1;j<size;j++)
{
if(a[j] < a[i])
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
}
}
cout<<"\n smallest element in the array:"<<a[0];
cout<<"\n largest element in the array:"<<a[size-1];
}

