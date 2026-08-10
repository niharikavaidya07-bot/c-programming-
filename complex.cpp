#include<iostream>
using namespace std;
class complex
{
    private:
    int real,imag;

    public:
    void input()
    {
        cout<<"enter real part";
        cin>>real;

        cout<<"enter imaginary part";
        cin>>imag;

    }
    void add(complex c1, complex c2)
    {
       real=c1.real+c2.real;
       imag=c1.imag+c2.imag;
       cout<<"Addition:"<<real<<"+"<<imag<<"i"<<endl;
    }

      void sub(complex c1, complex c2)
    {
       real=c1.real-c2.real;
       imag=c1.imag-c2.imag;
       cout<<"substraction:"<<real<<"-"<<imag<<"i"<<endl;
    }

};
int main()
{
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c3.add(c1,c2);
    c3.sub(c1,c2);
    return 0;

}
