#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int rollno;
    float marks;

    int input()
   {
     cout<<"enter name:";
    cin>>name;

    cout<<"enter rollno.:";
    cin>> rollno;

    cout<<"enter marks:";
    cin>>marks;
   }

   int display()
   {
    cout<<"Name:"<<name<<endl;
    cout<<"roll no.:"<<rollno<<endl;
    cout<<"Marks:"<<marks<<endl;
   }

};

int main()
{
student s1;
s1.input();
s1.display();
}