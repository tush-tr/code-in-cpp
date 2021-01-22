# Pointers

Pointers are variables that store the address of other variables.

**Syntax**
```C++
// data_type *nameofpointer
//____________________
int *myintpointer;
char *mycharpointer;
```

**Getting started with the Pointers**

Every variable is stored in the memory and each memory location has its own
memory address. It enables us to pass variables by reference.


**‘&’ Operator** ​: It gives the address of the variable.


**‘*’ Operator:** ​It gives the value stored at the address, i.e dereferences the value
stored at the address

### <a href="intro.cpp">Intro to pointers, array pointers, passing by reference</a>

<br>

**Working Demo**

```C++
int a = 10;
int* aptr = &a;
cout<< *aptr <<endl;
*aptr = 20;
cout<< a << endl;

```


In the above example,

1. We declared an integer variable ‘a’, and an integer pointer ‘aptr’.

2. The address of ‘a’ (&a) is stored in aptr.

3. cout << *aptr; gives the value stored at the memory address.

4. *aptr = 20 changes the value at the memory address to 20. Value of ‘a’ gets
changed to 20.

## <a href="parith.cpp">Pointer Arithmetic</a>

## **Array Pointers**

### <a href="parray.cpp">Example of Array Pointers</a>

In C++, The name of the array is a pointer that points to the first element of the
array.
```C++
int arr[] = {10, 20, 30};
cout << *arr <<endl;
int *ptr= arr;
for(int i=0;i<3;i++){
    cout<< *(arr + i)<< endl;
}
```


*(arr + i) is equivalent to arr[i].
<br>
(arr + i) is the address of the ith element of the array.

**Swapping 2 variables using the address**

Address of ‘a’ and ‘b’ gets interchanged, thus their values get swapped.
```C++
int a= 2;
int b = 4;
swap(&a, &b);
cout<<a<<" "<<b<<endl;
```

## Pointer to pointer
We can have a variable that will store the address of a pointer variable that's called pointer to pointer.
```C++
int a = 10;
int *pa = &a;
int **ppa = &pa;
```
### <a href="ptop.cpp">Program to demonstrate pointer to ponter</a>

## Passing pointers to functions
We pass address pointers to the functon its called pass by reference, we pass the address of the variable not the value.

```C++
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
// call this function like this
swap(&a,&b);
```
