#include<iostream>
using namespace std;
int main()
{
int n,b,rem,rev=0;
cin>>n;
b=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(b==rev)
cout<<"palindrome";
else
cout<<"not a palindrome";
}
