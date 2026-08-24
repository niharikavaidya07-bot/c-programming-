// default cnstructor,parameterized constructor,copy constructor
#include<iostream>
#include<string>
using namespace std;
class rectangle
{
    int length;
    int breadth;
public:
    rectangle()//default constructor
    {
        length=0;
        breadth=0;
    }
    rectangle(int l,int b)//parameterized constructor
    {
        length=l;
        breadth=b;
    }
    rectangle(rectangle &r)//copy constructor
    {
        length=r.length;
        breadth=r.breadth;
    }
    void area()
    {
        cout << "Area: " << length * breadth << endl;
    }
    void display()
    {
        cout<<"Length:"<<length<<endl;
        cout<<"Breadth:"<<breadth<<endl;
    }
};
int main()
{
    rectangle r1;//default
    rectangle r2(10,5);//parameterized
    rectangle r3(r2);//copy
    
   cout<<"Default Rectangle:"<<endl;
    r1.display();
    r1.area();

    cout<<"\nParameterized Rectangle:"<<endl;
    r2.display();
    r2.area();

    cout<<"\nCopy Rectangle:"<<endl;
    r3.display();
    r3.area();
    return 0;
}
