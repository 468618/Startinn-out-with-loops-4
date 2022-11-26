#include <iostream>
using namespace std;

int main()
{
  int age;
  cout << "Please input your age" << endl;
  cin >> age;

  while (!cin)
  {
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Please enter a valid age" << endl;
    cin >> age;
  }
  cout << "You are " << age << " years old!"<<endl;
}
