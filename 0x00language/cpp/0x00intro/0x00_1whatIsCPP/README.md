# My learnings - overview

C++ is a general purpose programming language by Bjarne Stroustrup, first public release in 1985. It is the extension of the C programming language with object-oriented features like, classes and inheritance. C++ is used for game development, system programming, embedded systems & high performance computing.

C++ is a statically typed programming language, means, the type of the variable is known during the compilation.

Because, C++ is made from C, most C programms and be compiled and run with a C++ compiler.

```cpp
#include <iostream>

// A simple function to add two numbers
int add(int a, int b) {
    return a + b;
}

class Calculator {
public:
    // A member function to multiply two numbers
    int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    int x = 5;
    int y = 3;

    // Using the standalone function 'add'
    int sum = add(x, y);
    std::cout << "Sum: " << sum << '\n';

    // Using a class and member function
    Calculator calc;
    int product = calc.multiply(x, y);
    std::cout << "Product: " << product << '\n';

    return 0;
}
```

my try ,
![My try](./assets/Screenshot%20From%202025-12-06%2010-26-50.png)
