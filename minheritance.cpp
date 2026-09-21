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
    cout << "Enter roll no.:";
    cin >> rollno;

    cout << "Enter name:";
    cin >> name;
  }
};

class studentMarks : public student 
{
protected:
  int marks[5];

public:
  void getmarks()
  {
    for(int i = 0; i < 5; i++)
    {
      cout << "Enter marks of subject " << i + 1 << ":";
      cin >> marks[i];
    }
  }
};

class StudentResult : public studentMarks
{
public:
  void display()
  {
    int total = 0;

    cout << "Student Result" << endl;
    cout << "Name: " << name << endl;

    cout << "Marks:" << endl;

    for(int i = 0; i < 5; i++)
    {
      cout << "Subject " << i + 1 << ": " << marks[i] << endl;
      total = total + marks[i];
    }

    float percent = total / 5.0;

    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percent << "%" << endl;
  }
};

int main()
{
  StudentResult s;

  s.getstudent();
  s.getmarks();
  s.display();

  return 0;
}

