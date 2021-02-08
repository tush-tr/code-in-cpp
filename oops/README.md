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

## Encapsulation
> Hiding "sensitive" data from the user.  Encapsulation is achieved in C++ using
Classes.

Classes have two main components:
> 1. Data Members
> 2. Member Function

### Access Modifiers
Access modifiers are keywords in object-oriented languages that set the
accessibility of classes, methods, and other members. Access modifiers are used
to facilitate the encapsulation of components.<br>
There are 3 types of Access Modifiers:<br>
1. <b> Public:</b><br> Class objects can access the data members and function outside the
class.
2. <b> Private: </b><br>Objects cannot access the data members and function outside the
class. These members can only be accessed inside the class.
3. <b> Protected:</b><br> Objects cannot access the data members and function outside
the class. These members can be accessed inside the class and inherited
class.

<table>
<tr><td>Access Modifiers</td><td>Own class</td><td>Derived class</td><td>Outside the class</td></tr><tr><td>Public</td><td>✔</td><td>✔</td><td>✔</td></tr><tr><td>Private</td><td>✔</td><td>✘</td><td>✘</td></tr><tr><td>Protected</td><td>✔</td><td>✔</td><td>✘</td></tr></table>


### Advantages of Encapsulation:

- Good coding practice, useful in interviews
- Increased security of data
### <a href="encapsulation.cpp">Sample code</a>