#include<iostream>
#include<string>
using namespace std;
class employee
{
    int id;
    string name;
    float salary;
public:
    employee()//default constructor
    {
        id=0;
        name="unknown";
        salary=0.0;
    }
    employee(int i,string n,float s)//paarameterized constructor
    {
        id=i;
        name=n;
        salary=s;
    }

    employee(employee &e)//copy constructor
    {
        id=e.id;
        name=e.name;
        salary=e.salary;
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
    employee e1;//default
    employee e2(14,"Niharika",70000.0);//parameterized
    employee e3(e2);//copy
   cout<< "Employee 1:" << endl;
    e1.display();
    cout<< "\nEmployee 2:" << endl;
    e2.display();
    cout<< "\nEmployee 3:" << endl;
    e3.display();
    return 0;
}

/*constructor is the function which is defined 
in public which has same name as class*/
