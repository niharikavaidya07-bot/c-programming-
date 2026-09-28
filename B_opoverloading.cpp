#include <iostream>
using namespace std;
class Number
{
int x;

public:
Number(int a)
{
 x=a;
}
 
 Number operator+(Number n)
 {
cout<<x<<endl;
 //cout<<n.x<<endl;
 return Number(x+n.x);

 }
 
 void display()
 {
 cout<<"Sum:"<<x;
 }
 };
 
 int main()
 {
 Number n1(10), n2(11),n4(120),n5(12);
 Number n3=n1+n2+n4+n5;
 n3.display();
 return 0;
 }
 

  


