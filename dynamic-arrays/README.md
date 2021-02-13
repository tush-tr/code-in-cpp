# Vectors and Pairs in C++

## Vectors
Vectors are dynamic arrays. They have the ability to resize itself when it gets
filled. The size of the vector gets doubled each time when they get filled.

#### Syntax
<code>
<pre>
vector< datatype > name(size,value)
</pre></code>

#### <a href="intro.cpp">Initializing and printing vectors</a>

```C++
vector <int> v;
v.push_back(1);
v.push_back(2);
// end element will be poped after pop_back() function
v.pop_back();
```
#### 2D vector
Declared a vector of size nxm.

```C++
vector<vector<int>> grid(n, vector<int>(m,-1));
```

### <a href="iterator.cpp"> Iterators and for each loop(Auto keyword)</a>
```C++
vector<int>::iterator i;
    for(i=v.begin();i!=v.end();i++){
        cout<<*i<<endl;
    }
```

```C++
for(auto element:v){
        cout<<element<<endl;
    }
```

## <a href="functions.cpp">Functions</a>
### Swap()
```C++
swap(v,v1);
```

### sort()
```C++
sort(v.begin(),v.end());
```

## <a href="pair.cpp">Pairs</a>
```C++
pair <int,char> p;
    p.first = 12;
    p.second = 'Q';
```

Q:- <a href="reduce-array.cpp">Reduce the given array.</a>