# Difference Between C and C++

---

## 1. Language Paradigm

| Aspect | C | C++ |
| :--- | :--- | :--- |
| Programming Style | Procedural / Structured | Multi-paradigm |
| Main Focus | Functions & procedures | Objects + Functions |
| OOP Support | No | Yes |
| Templates | No | Yes |

---

## 2. References (IMPORTANT FOR C++)

* C does **not** have references
* C++ **does** have references (`&`)
* A reference is an alias (another name) for an existing variable

---

## 3. Swap Function Example

### Using Pointers (C and C++)

```cpp
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

### Using References (Only in C++)

```cpp
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
```

---

## 4. Why Do We Use Pointers / References?

### Problem Without Pointers or References

```cpp
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
```

* This uses **call by value**
* Copies of variables are passed
* Swap happens only inside the function
* Original values in `main()` remain unchanged

### Reason for Using Pointers / References

* They give direct access to original memory
* Changes reflect in the calling function
* Arrays require pointers or references to modify data
* Without them:
    * No swapping
    * No array reversal
    * No permanent modification

---

## 5. Memory Management

| Feature | C | C++ |
| :--- | :--- | :--- |
| Allocation | `malloc()`, `calloc()` | `new` |
| Deallocation | `free()` | `delete` |
| Constructors / Destructors | No | Yes |

---

## 6. Input / Output

### C
```cpp
printf("Hello");
scanf("%d", &x);
```

### C++
```cpp
#include <iostream>
using namespace std;

cout << "Hello";
cin >> x;
```

---

## 7. Structure vs Class

### C Structure
```cpp
struct Student {
    int roll;
};
```

* No member functions
* All members are public

### C++ Class
```cpp
class Student {
public:
    int roll;
};
```

* Supports member functions
* Access specifiers: public, private, protected

---

## 8. STL (Standard Template Library)

| C | C++ |
| :--- | :--- |
| No STL | `vector`<br>`map`<br>`set`<br>`stack`<br>`queue`<br>`algorithms (sort, reverse)` |

---

# Vectors in C++

## 9. What is a Vector?

* Dynamic array from STL
* Automatically resizes
* Stored in contiguous memory
* Safer than arrays

```cpp
#include <vector>
using namespace std;
```

---

## 10. 1D Vector

### Declaration
```cpp
vector<int> v;
```

### Initialization
```cpp
vector<int> v = {1, 2, 3, 4};
vector<int> v(5, 10);
```

### Common Operations
```cpp
v.push_back(5);
v.pop_back();
v.size();
v.empty();
v.clear();
```

### Access Elements
```cpp
v[0];
v.at(0);
v.front();
v.back();
```

### Looping
```cpp
for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
}
```

---

## 11. Passing Vector to Function

### By Value (Copy)
```cpp
void func(vector<int> v);
```

### By Reference (Recommended)
```cpp
void func(vector<int> &v);
```

---

## 12. 2D Vector

### Declaration
```cpp
vector<vector<int>> v;
```

### Initialization
```cpp
vector<vector<int>> v = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```

### Fixed Size 2D Vector
```cpp
vector<vector<int>> v(3, vector<int>(4, 0));
```

```cpp
int rows = 3, cols = 4;
vector<vector<int>> mat(rows, vector<int>(cols, 0));
```
translates to

```pgsql
3 rows
each row has 4 columns
all values = 0
```

---

## 13. Input and Output in 2D Vector

### Input
```cpp
for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
        cin >> v[i][j];
    }
}
```

### Output
```cpp
for(int i = 0; i < v.size(); i++){
    for(int j = 0; j < v[i].size(); j++){
        cout << v[i][j] << " ";
    }
    cout << endl;
}
```

---

## 14. Array vs Vector

| Feature | Array | Vector |
| :--- | :--- | :--- |
| Size | Fixed | Dynamic |
| Memory | Stack / Heap | Heap |
| Safety | Less | More |

---

## 15. Important Exam / Interview Notes

* Always pass vectors by reference
* Use `v.size()` instead of hardcoding
* Prefer vectors over arrays in C++
* References are safer than pointers when possible

**END**
