# My learnings - overview

## About

C ++ is a general purpose, high performance, programming language. 

Developed by, Bjarne Stroustrup in 1979 at Bell Labs.

## Basics

### Including libraries 

We use `#include` to include libraries or header files

ex, to include standard input-outpur libraries

```cpp
#include <iostream>
```

### Main Function

`main()` function must. This is the entry point.

```cpp
int main() {
    // code 
    return 0;
}
```

### Input - Output

`std::cout` for output & `std:cin` for input.

```cpp
#include <iostream>

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    std::cout << "You entered: " << number << '\n';
    return 0;
}
```

My first lines of code 🫣

![First lines of code](./assets/images/Screenshot%20From%202025-12-04%2020-58-31.png)

### Variables & Data types

// Some Data-types 

`int` ~ for integer values; <br />
`float` ~ for single-digit floating point values; <br>
`double` ~ for double-digit floating point values; <br>
`char` ~ for character values; <br>
`bool` ~ for boolean values; <br>

and so on...

a variable must defined with a data-type before use;

ex, 

```cpp
int x;
int num;
```

### Control Structures

`if`, `else`, `while`, `for`, `switch` 

#### `if` 

```cpp
if (condition) {
    // if condition is `true` run this code
} else {
    // if condition is `false` run this code
}
```

#### `while`

```cpp
while (condition) {
    // if condition is `true` run this code
}
```

#### `for`

```cpp
for (initialization, condition, update) {
    // code
}
```

#### `switch`

```cpp
switch (variable) {
    case value1:
        // if the variable == value1 run this code
        break;
    case value2:
        // if the variable == value2 run this code
        break;
    // more cases...
    default:
        // if variable doesn't matches with any cases run this code
}
```

### Functions

`Functions` are reusable block of code, here we defined a returnType, parameter list, function body

basic structure of a function

```
returnType functionName(parameterType1 parameter1, parameterType2 parameter2) {
    // Function body
    return returnValue;
}
```

ex, 

```cpp
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);
    std::cout << "3 + 4 = " << result << '\n';
    return 0;
}
```

my try,

![My Try](./assets/images/Screenshot%20From%202025-12-05%2012-50-57.png)