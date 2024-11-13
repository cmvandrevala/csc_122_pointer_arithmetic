#include <iostream>

using namespace std;

int main()
{
  int my_var = 100;
  int *my_ptr = &my_var;

  cout << "Initial" << endl;
  cout << "my_ptr: " << my_ptr << endl;
  cout << "*my_ptr: " << *my_ptr << endl;
  cout << "&my_ptr: " << &my_ptr << endl;
  cout << endl;

  my_ptr -= 1;

  cout << "Decrement Once" << endl;
  cout << "my_ptr: " << my_ptr << endl;
  cout << "*my_ptr: " << *my_ptr << endl;
  cout << "&my_ptr: " << &my_ptr << endl;
  cout << endl;

  my_ptr -= 1;

  cout << "Decrement Twice" << endl;
  cout << "my_ptr: " << my_ptr << endl;
  cout << "*my_ptr: " << *my_ptr << endl;
  cout << "&my_ptr: " << &my_ptr << endl;
  cout << endl;

  my_ptr -= 1;

  cout << "Decrement Thrice" << endl;
  cout << "my_ptr: " << my_ptr << endl;
  cout << "*my_ptr: " << *my_ptr << endl;
  cout << "&my_ptr: " << &my_ptr << endl;
  cout << endl;
}
