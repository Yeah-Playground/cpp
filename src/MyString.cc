#include <cstddef>
#include <cstring>
#include <iostream>
#include "MyString.h"

MyString::MyString()
    : data(nullptr),
      length(0)
{}

MyString::MyString(MyString &rhs) : length(rhs.length) {
  setString(rhs.data);
}

MyString::~MyString() {
  release();
}

int MyString::setString(const char *str) {
  release();

  if (str == nullptr)
    return 0;

  int len = strlen(str);

  if (len == 0)
    return 0;

  data = new char[len + 1];
  strcpy(data, str);
  length = len;

  return len;
}

const char *MyString::getString() const {
  return data;
}

void MyString::release() {
  if (data != nullptr)
    delete[] data;

  data = nullptr;
  length = 0;
}

void MyString::print() {
  std::cout << data << std::endl;
}

MyString &MyString::operator=(MyString &rhs) {
  setString(rhs.data);
  length = rhs.length;

  return *this;
}

MyString::operator char *(void) {
  return data;
}
