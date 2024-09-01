#include<iostream>
#include<string>
using namespace std;
class student
{
  public:
  string name;
  int rollNumber;
  int age;
  
  void displayInfo()
  {
    cout<<"Name:"<<name<<endl;
    cout<<"Roll Number:"<<rollNumber<<endl;
    cout<<"Age:"<<age<<endl;
  }
};
int main()
{
  student s1;
  student s2;
  
  s1.name="Janhavi";
  s1.rollNumber=113;
  s1.age=18;
  
  s2.name="Darshan";
  s2.rollNumber=07;
  s2.age=22;
  
  cout<<"s1 Information:"<<endl;
  s1.displayInfo();
  cout<<"s2 Information:"<<endl;
  s2.displayInfo();
  
  return 0;
}