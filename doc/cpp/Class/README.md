### Copy/Move Constructor

```cpp
class Dog {
private:
    string name;
    void *data;

public:
    Dog(string name) : name{name} { data = new char[20]; }
    ~Dog() { delete data; }

    Dog(const Dog &s) : Dog(s.name) { }
    Dog(Dog &&s) noexcept : name{s.name}, data{s.data} {
      s.data = nullptr
    }
};

Dog myDog1 {"Choco"};
Dog myDog2 {myDog1}; // Copy constructor call

vector<Dog> v;
v.push_back(Dog("Merry"));
```

### Copy/Move Assignment Operator

```cpp
class MyString {
private:
  char *str;

public:
  MyString();
  MyString(const char *s);
  MyString(const MyString &source);
  MyString(MyString &&source);
  ~MyString();

  MyString& operator=(const MyString &rhs);
  MyString& operator=(MyString &&rhs);
};

MyString& MyString::operator=(const MyString &rhs){
  if(this == &rhs)
    return *this;
  delete [] str;
  str = new char[strlen(rhs.str) + 1];
  strcpy(str, rhs.str);  
}

MyString& MyString::operator=(MyString &&rhs){
  if(this == &rhs)
    return *this;
  delete [] str;
  str = rhs.str;
  rhs.str = nullptr;
  return *this;
}


Mystring s1 {"Harry"};
Mystring s2;
s2 = s1;

Mystring s1 = MyString{"Hi"};
```

### const
```cpp
public:
    string get_name() const {
      name = "Error"
    }
```

### static
```
class Player
{
private:
  static int num_players;

public:
  static int get_num_players();
};


cout << Player::get_num_players() << endl;
```


- ```get_num_players``` function can access static variables only.
