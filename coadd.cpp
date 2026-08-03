#include<iostream>
using namespace std;
class student
{
    public:
    int a,b,sum,sub;

    void add()
   {
    cout<<"enter value of a:";
    cin>>a;
    cout<<"enter value of b:";
    cin>>b;
    
    sum=a+b;
    cout<<"addition is:"<<sum<<endl;
    
   }

   void subs()
   {
     cout<<"enter value of a:";
    cin>>a;
    cout<<"enter value of b:";
    cin>>b;
    
    sub=a+b;
    cout<<"substraction is:"<<sub;
    
   }

};

int main()
{
student s1;
s1.add();
s1.subs();
return 0;
}