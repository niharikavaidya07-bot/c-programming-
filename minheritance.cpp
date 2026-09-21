#include <iostream>
using namespace std;

class student 
{
protected:
  int rollno;
  string name;

public:
  void getstudent()
  {
   cout<<"enter roll no.:";
   cin>>rollno;

   cout<<"enter name:";
   cin>>name;
  }
};

class studentMarks: public student 
{
protected:
  int m1,m2,m3,m4,m5;

public:
  void getmarks()
  {
   cout<<"Enter marks of subject 1:";
   cin>>m1;

   cout<<"Enter marks of subject 2:";
   cin>>m2;

   cout<<"Enter marks of subject 3:";
   cin>>m3;
 
   cout<<"Enter marks of subject 4:";
   cin>>m4;

   cout<<"Enter marks of subject 5:";
   cin>>m5;
 }
};

class StudentResult : public studentMarks
{
public:
 void display()
 {
   int total=m1+m2+m3+m4+m5;
   float percent=total/5;
   cout<<"student result"<<endl;

   cout<<"Name:"<<name<<endl;
   cout<<"Total Marks:"<<total<<endl;
   cout<<"percentage:"<<percent<<"%"<<endl;
 }
};
int main()
{
 StudentResult s;

 s. getstudent();
 s.getmarks();
 s.display();
 return 0;
}



