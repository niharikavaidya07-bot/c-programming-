#include <iostream>
using namespace std;
class Distance
{
public:
  int feet,inch;  
  
Distance(int f , int i)
  {
   feet=f;
   inch=i;
  }
  
  void operator+()
  {
   ++feet;
   inch++;
  }
  
  void display()
  {
   cout<<feet<<endl;
   cout<<inch<<endl;
  }
  
};

int main()
{
  Distance d(8,9);
  
  +d;
  d.display();
  
  return 0;
}
