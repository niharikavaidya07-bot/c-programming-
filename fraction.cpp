#include<iostream>
using namespace std;
class fraction
{
    private:
    int n1,n2,d1,d2;

    public:
    int num,den;
    void input()
    {
        cout<<"enter num part";
        cin>>n1>>n2;

        cout<<"enter den part";
        cin>>d1>>d2;

    }
    void add()
    {
       num=((n1*d2)+(n2*d1));
       den=d1*d2;
       cout<<"Addition:"<<num<<"/"<<den<<endl;
    }

      void sub()
    {
        num=((n1*d2)-(n2*d1));
         den=d1*d2;
        cout<<"substraction:"<<num<<"/"<<den<<endl;
    }

   
};
int main()
{
   fraction c1;
   c1.input();
   c1.add();
   c1.sub();

   return 0;

}
