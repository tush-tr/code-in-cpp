# Object Oriented Programming in C++

## <li> <a href="class.cpp">Class in C++</a>
```C++
class student {
  // access specifier
public:
  // data members
  string name;
  int age;
  bool gender;
};
```

### <li><a href="class2.cpp">Array of objects</a>

### <li><a href="class3.cpp">Accessing private data using a function inside the class.</a>
```C++
class student {
  string name;

public:
  int age;
  void setname(string s){
      name = s;
  }
  string getname() { 
      return name; 
  }
};
```

## <li><a href="class4.cpp">Constructor in C++</a>
A constructor in C++ is a special method that is automatically called when an object of a class is created.<br>To create a constructor, use the same name as the class, followed by parentheses ():
```C++
class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!";
    }
};
```

### Constructor Parameters
Constructors can also take parameters (just like regular functions), which can be useful for setting initial values for attributes.


```C++
class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};
```

## Destructors
Invoked when the object goes out of scope or is explicitly destroyed by a call to delete.
```C++
~student(){
      cout<<"Destructor called"<<endl;
  }
```

## Operator overloading
We can overload operators( == , + , - ,etc), to work on class objects.
```C++
bool operator == (student &a){
        if(name==a.name && age == a.age && gender == a.gender){
            return true;
        }
        return false;
        
    }
```
