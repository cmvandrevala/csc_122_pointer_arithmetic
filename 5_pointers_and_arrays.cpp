#include <iostream>

using namespace std;

int main()
{
  int my_var[5] = {1, 2, 3, 4, 5};
  int *my_ptr = my_var;

  cout << "Initial" << endl;
  cout << "my_ptr: " << my_ptr << endl;
  cout << "*my_ptr: " << *my_ptr << endl;
  cout << "&my_ptr: " << &my_ptr << endl;
  cout << endl;

  my_ptr++;

  cout << "Decrement Once" << endl;
  cout << "my_ptr: " << my_ptr << endl;
  cout << "*my_ptr: " << *my_ptr << endl;
  cout << "&my_ptr: " << &my_ptr << endl;
  cout << endl;

  my_ptr++;

  cout << "Decrement Twice" << endl;
  cout << "my_ptr: " << my_ptr << endl;
  cout << "*my_ptr: " << *my_ptr << endl;
  cout << "&my_ptr: " << &my_ptr << endl;
  cout << endl;

  my_ptr++;

  cout << "Decrement Thrice" << endl;
  cout << "my_ptr: " << my_ptr << endl;
  cout << "*my_ptr: " << *my_ptr << endl;
  cout << "&my_ptr: " << &my_ptr << endl;
  cout << endl;

  my_ptr++;

  cout << "Decrement Four Times" << endl;
  cout << "my_ptr: " << my_ptr << endl;
  cout << "*my_ptr: " << *my_ptr << endl;
  cout << "&my_ptr: " << &my_ptr << endl;
  cout << endl;

  my_ptr++;

  cout << "Decrement Five Times" << endl;
  cout << "my_ptr: " << my_ptr << endl;
  cout << "*my_ptr: " << *my_ptr << endl;
  cout << "&my_ptr: " << &my_ptr << endl;
  cout << endl;

  my_ptr++;

  cout << "Decrement Six Times" << endl;
  cout << "my_ptr: " << my_ptr << endl;
  cout << "*my_ptr: " << *my_ptr << endl;
  cout << "&my_ptr: " << &my_ptr << endl;
  cout << endl;
}
