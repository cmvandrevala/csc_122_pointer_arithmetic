#include <iostream>

using namespace std;

int main()
{
  int my_var = 100;
  int *my_ptr = &my_var;

  cout << "my_var: " << my_var << endl;
  cout << "&my_var: " << &my_var << endl;
  cout << "my_ptr: " << my_ptr << endl;
  cout << "*my_ptr: " << *my_ptr << endl;
  cout << "&my_ptr: " << &my_ptr << endl;
}
