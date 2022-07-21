#pragma

class MyString {
private:
  char *data;
  int length;

public:
  MyString();
  explicit MyString(MyString &rhs);
  ~MyString();
  int setString(const char *str);
  const char *getString() const;
  void release();
  void print();
  MyString &operator=(MyString &rhs);
  operator char *(void);
};
