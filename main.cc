#include <iostream>
#include "MyString.h"

int main(void)
{
  MyString str, test;
  str.setString("Hello");
  test.setString("World");

  MyString newData(str);
  newData.print();

  newData = test;
  newData.print();

  std::cout << (char *)newData << std::endl;

  return 0;
}
