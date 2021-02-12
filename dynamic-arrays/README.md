# Vectors and Pairs in C++

## Vectors
Vectors are dynamic arrays. They have the ability to resize itself when it gets
filled. The size of the vector gets doubled each time when they get filled.

#### Syntax
<code>
<pre>
vector< datatype > name(size,value)
</pre></code>

```C++
vector <int> v;
v.push_back(1);
v.push_back(2);
```
#### 2D vector
Declared a vector of size nxm.

```C++
vector<vector<int>> grid(n, vector<int>(m,-1));
```


