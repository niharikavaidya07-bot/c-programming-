#include<iostream>
#include<string>
using namespace std;
class employee
{
    int id;
    string name;
    float salary;
public:
    employee()
    {
        id=0;
        name="";
        salary=0.0;
    }
    employee(int i,string n,float s)
    {
        id=i;
        name=n;
        salary=s;
    }
    void display()
    {
        cout<<"Employee ID:"<<id<<endl;
        cout<<"Employee Name:"<<name<<endl;
        cout<<"Employee Salary:"<<salary<<endl;
    }
};
int main()
{
    employee e1;

    return 0;
}
