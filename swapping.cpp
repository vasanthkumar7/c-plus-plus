#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
int temp=a;
a=b;
b=temp;
}
main()
{
int x,y;
cout<< "\n enter first number:";
cin>>x;
cout<<"\n enter second number:";
cin>>y;
cout<<"\n before swaping ";
cout<<"\n first number:"<<x<<" second number:"<<y;
swap(x,y);
cout<<"\n after swaping ";
cout<<"\n first number:"<<x<<" second number:"<<y;
}
