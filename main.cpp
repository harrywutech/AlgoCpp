#include <iostream>
using namespace std;

int main() {
  int a=10, *p;
  int &b=a; //reference
  p=&a; //pointer
  string s="c++";
  string *ps=&s;
  cout<<p<<endl;
  cout<<b<<endl;
  cout<<*p<<endl;
  cout<<ps<<endl;
  cout<<*ps<<endl;

  return 0;
}
