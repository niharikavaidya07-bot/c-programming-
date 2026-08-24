#include<iostream>
#include<string>
using namespace std;
class product
{
    int id;
    string name;
    float price;
public:
    product()//default constructor
    {
        id=0;
        name="";
        price=0.0;
    }
    product(int i,string n,float p)//parameterized constructor
    {
        id=i;
        name=n;
        price=p;
    }
    product(product &p)//copy constructor
    {
        id=p.id;
        name=p.name;
        price=p.price;
    }
    void display()
    {
        cout<<"Product ID:"<<id<<endl;
        cout<<"Product Name:"<<name<<endl;
        cout<<"Product Price:"<<price<<endl;
    }
};
int main()
{
    product p1;//default
    product p2(101,"Laptop",75000.0);//parameterized
    product p3(p2);//copy
   cout<< "Product 1:" << endl;
    p1.display();
    cout<< "\nProduct 2:" << endl;
    p2.display();
    cout<< "\nProduct 3:" << endl;
    p3.display();
    return 0;
}