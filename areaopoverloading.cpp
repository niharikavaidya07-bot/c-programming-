#include <iostream>
using namespace std;
class Area
{
public:
  void area(int side) 
  {
   cout<<"area of square="<<side*side;
   
  }
 
 void area(int length, int breadth)
 {
  cout<<"area of rectangle="<<length*breadth;
 }
 
 void area(float radius)
{
 cout<<"area of circle="<<3.14* radius* radius;

}
  
};

int main()
{
  Area a;
  a.area(5);
  cout<<endl;
  
  a.area(5,6);
  cout<<endl;
  
  a.area(5);
  cout<<endl;
   
  return 0;
}
