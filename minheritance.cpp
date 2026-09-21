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
  int m1, m2, m3, m4, m5;

public:
  void getmarks()
  {
    int marks[5];

    for(int i = 0; i < 5; i++)
    {
      cout << "Enter marks of subject " << i + 1 << ":";
      cin >> marks[i];
    }

    m1 = marks[0];
    m2 = marks[1];
    m3 = marks[2];
    m4 = marks[3];
    m5 = marks[4];
  }
};

class StudentResult : public studentMarks
{
public:
  void display()
  {
    int total = m1 + m2 + m3 + m4 + m5;
    float percent = total / 5.0;

    cout << "Student result" << endl;
    cout << "Name:" << name << endl;
    cout << "Total Marks:" << total << endl;
    cout << "Percentage:" << percent << "%" << endl;
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

