#include <iostream>

using namespace std;

void add_v1(int x)
{
  x += 1;
}

void add_v2(int &x)
{
  x += 1;
}

void add_v3(int *x)
{
  x += 1;
}

int main()
{
  int my_var = 100;
  cout << "my_var: " << my_var << endl;

  add_v1(my_var);
  cout << "my_var: " << my_var << endl;

  add_v2(my_var);
  cout << "my_var: " << my_var << endl;

  int *my_ptr = &my_var;
  cout << "my_ptr: " << my_ptr << endl;
  cout << "*my_ptr: " << *my_ptr << endl;

  add_v3(my_ptr);
  cout << "my_ptr: " << my_ptr << endl;
  cout << "*my_ptr: " << *my_ptr << endl;

  // Invalid
  // add_v1(my_ptr);
  // add_v2(my_ptr);
}
