# <a href="strings.cpp">Strings
</a>
To use strings in a program, you need to include a header called string.
```C++
#include<string>
```

Declaring a string
```C++
string str = "Tushar";
```
It declares a string of value “Tushar”
```C++
string str(10);
```
It declares a string of size 10.
```C++
string s(5,"N");
```
It declares a string of size 5 with all characters ‘N’.
```C++
string news(str);
```
It declares a copy of the string str.
Taking Input
We use cin to input the string.
```C++
cin >> str;
```
Using getline() function: To input the string with space we use getline() function
instead of cin.
```C++
getline(cin,s);
```
Throwing Output
We use cout to throw output to the terminal.
```C++
cout << str;
```
## <a href="stringfun.cpp">Different functions of string
</a>

1. **append()**: 

Inserts additional characters at the end of the string (can also be
done using ‘+’ or ‘+=’ operator). Its time complexity is O(N) where N is the
size of the new string.


```C++
s1.append("hello");
// Or
s1 + "hello";
```

2. **assign():**

Assigns new string by replacing the previous value(can also be done using ‘=’ operator).
```C++
s.assign("New string");
```


3. **at():**

 Returns the character at a particular position (can also be done using ‘[
]’ operator). Its time complexity is O(1).
```C++
s.at(3);
// OR
s[3];
```

4. **begin():**

Returns an iterator pointing to the first character. Its time complexity is O(1).

5. **clear():**

 Erases all the contents of the string and assign an empty string (“”)
of length zero. Its time complexity is O(1).
```C++
s.clear();
```


6. **compare():**

 Compares the value of the string with the string passed in the
parameter and returns an integer accordingly. Its time complexity is O(N +
M) where N is the size of the first string and M is the size of the second
string.
```C++
s2.compare(s1);
```
Output: a value greater than 0 denoting s2 is greater
than s1.

Output: 0 - as both string are equal.

Output:  a value less than 0 denoting s2 is less than s1.


7. **c_str():**

 Convert the string into C-style string (null terminated string) and
returns the pointer to the C-style string. Its time complexity is O(1).


8. **empty():**

 Returns a boolean value, true if the string is empty and false if the
string is not empty. Its time complexity is O(1).
```C++
s.empty();
```


9. **end():**

 Returns an iterator pointing to a position which is next to the last
character. Its time complexity is O(1).


10.**erase():**

 Deletes a substring of the string. Its time complexity is O(N) where
N is the size of the new string.
```C++
s.erase(3,3);
```


11.**find():**

 Searches the string and returns the first occurrence of the parameter
in the string. Its time complexity is O(N) where N is the size of the string.
```C++
s.find("he");
```
12.**insert():**

 Inserts additional characters into the string at a particular position.
Its time complexity is O(N) where N is the size of the new string.
```C++
s.insert(3,"Le");
```
13.**length():**

 Returns the length of the string. Its time complexity is O(1).

```C++
s.length();
```
14.**resize():**

 Resize the string to the new length which can be less than or
greater than the current length. Its time complexity is O(N) where N is the
size of the new string.
```C++
s.resize(6);
```

15.**size():**

 Returns the length of the string. Its time complexity is O(1).

```C++
s.size();
```

16.**substr():**

 Returns a string which is the copy of the substring. Its time
complexity is O(N) where N is the size of the substring. For example:
```C++
string news = s.substr(2,4);
```

17.**stoi():**

 Returns the strings converted to int datatype.
```C++
int x = stoi(s)
```

### Note:
1. To convert an integer to a string, we use to_string() function. Example

```C++
int x = 5;
string s = to_string(x);
```


2. Sorting a string: To sort a string, we need to include a header file known as algorithm in our code like this
```C++
#include<algorithm>
```
Then we can use sort() function that is present in above header file on our string.
Sort() function takes 2 arguments viz. iterator to start of the string and iterator to
end of the string.
```C++
sort(s.begin(),s.end());
```


