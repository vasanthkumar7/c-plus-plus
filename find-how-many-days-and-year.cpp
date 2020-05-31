
#include<iostream>
using namespace std;
main()
{

int num,year,weaks1,weaks2,days;
cout<<"\n enter number of days:";
cin>>num;
year=num/365;
weaks1=num%365;
weaks2=weaks1/7;
days=(weaks1%7);
cout<<"\n years:"<<int(year);
cout<<"\n weeks:"<<weaks2;
cout<<"\n days:"<<days;
}
