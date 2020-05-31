#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
void main()
{
char ch[30],ch1[30],ch2[30],ch3[30];
int len1,len2;
cout<<"\n enter the first string:";
gets(ch);
cout<<"\n enter the second string:";
gets(ch1);
len1=strlen(ch);
len2=strlen(ch1);
strcpy(ch2,ch);
strcpy(ch3,ch1);
for(int i=0;i<len1-1;i++)
{
for(int j=i+1;j<len1;j++)
{
 if(ch[i]<ch[j])
 {
  char temp=ch[i];
  ch[i]=ch[j];
  ch[j]=temp;
  }
  }
  }
 for( i=0;i<len2-1;i++)
{
for(int j=i+1;j<len2;j++)
{
 if(int(ch1[i])<int(ch1[j]))
 {
  char temp=ch1[i];
  ch1[i]=ch1[j];
  ch1[j]=temp;
  }
  }
  }

if(len1==len2)
{
 if(strcmp(ch,ch1)==0)
 cout<<ch2<<" and "<<ch3<<" are anagram";
 }
 else
 cout<<ch2<<" and "<<ch3<<" are not anagram";
 getch();
 }