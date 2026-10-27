
# 2.1 - Introduction to Functions

- Function: A reusable sequence of statements designed to do a particular job.

- Nested functions are not supported.

# 2.2 - Function Return Values (Value-returning Functions)

- When the return statement is executed:
    - The return expression is evaluated to product a value.
    - The valye produced by the return expression is copied back to the caller/
        - This copy is called the **return value**.
    - THe function exits, and control returns to the caller.

- Return by Value: Process of returning a copied value back to the caller.

- `main()` is required to return an `int`.
- Explicit function calls to `main()` are disallowed.
- Global variables are initialized prior to the execution of `main()`, thus main is not always the first function that executes, if the global variable invokes a function.

- Status Codes: Return `int` from main
    - `0`: Success
    - Non-zero is often used to indicate a failure but...
        - C++ standard only defines 3 status codes in `<cstdlib>`:
            1. `0`: Success
            2. `EXIT_SUCCESS`: Success
            3. `EXIT_FAILURE`: Failure
        - Use these 3 status codes for maximum portability.

# 2.3 - Void Functions (Non-value Returning Functions)

- Non-value Returning Functions: A function that does not return a value.
    - Void Functions

# 2.4 - Introduction to Function Parameters and Arguments

- Function Parameter: A variable used in the header of a function. Function parameters work almost identically to variables defined inside the function, but with one difference: they are initialized with a value provided by the caller of the function.

- Arguements: The value that is passed from the caller to the function being called.

- When a function is called, all of the parameters of the function are created as variables, and the value of each of the arguments is **copied** into the matching parameter. 
    - Copy Initialization
    - Pass by Value


# 2.5 - Introduction to Local Scope

- Local Variables: Variables that are defined inside the body of a function.
    - Function parameters are also generally considered to be local variables.

# 2.6 - Why Functions are Useful and How to Use Them Effectively

# 2.7 - Forward Declaration and Definitions

- Forward Declaration: A broad concept applying to any identifier (functions, classes, structs, variables) defined before its full implementation.

- Function Prototype: A forward declaration statement that includes a function’s name, return type, parameter types, and optionally the parameter names. It does not include the function body. It tells the compiler about the existence of a function before it is defined.

- One Definition Rule (ODR): 
    1. Within a file, each function, variable, type, or template in a given scope can only have one definition.
    2. Within a program, each function or variable in a given scope can only have one definition. 
    3. Types, templates, inline functions, and inline variables are allowed to have duplicate definitions in different files, so long as each definition is identical.

# 2.8 - Programs with Multiple Code Files

- When you compile your program, you’ll need to include all of the relevant code files on the compile line. For example: `g++ main.cpp add.cpp -o main`, where `main.cpp` and `add.cpp` are the names of your code files, and main is the name of the output file.

# 2.9 - Naming Collisions and an Introduction to Namespaces

- Naming Collision/Conflict: If two identical identifiers are introduced into the same program in a way that the compiler or linker can't tell them apart, the compiler or linker will produce and error.
    - Compiler Error: Naming collision in the same file.
    - Linker Error: Naming collision in separate files in the same program.

- Scope Region: Area of source code where all declared identifiers are considered distinct from names declared in other scopes.

- Namespace: Allows you to declare or define names inside of it for the purpose of disambiguation. The names declared in a namespace are isolated from names declared in other scopes, allowing such names to exist without conflict.

- Scope Resolution Operator `::`: The identifier to the left of the `::` symbol identifies the namespace that the name to the right of the `::` symbol is contained within. If no identifier to the left of the `::` symbol is provided, the global namespace is assumed.

- Using Directive: Allows us to access the names in a namespace without using a namespace prefix.
    - Not considered best practice!

```cpp
#include <iostream>

using namespace std; // this is a using-directive that allows us to access names in the std namespace with no namespace prefix

int main()
{
    cout << "Hello world!";
    return 0;
}
```

# 2.10 - Introduction to the Preprocessor

- Preprocessor: A program that makes various changes to the text of the code files being compiled. 
    - Sometimes built into the compiler, sometimes separate.
    - Does not modify the original code files, but all changes happen either temporarily in-memory or using temporary files.
    - Strips out comments.
    - Ensures each code file ends in a new line.
    - Processes `#include` directive.

- Translation Unit: The result of a preprocessor.
    - Translation unit is then compiled by the compiler. 

- Translation: The entire process of preprocessing, compiling, linking.

# 2.11 - Header Files 

- Header Files: Allow us to put declarations in one place and then import them wherever we need them. This can save a lot of typing in multi-file programs.

- Including Header files from other directories:
    - `g++ -o main -I./source/includes main.cpp``

- Transitive Includes: Importing a header file that uses a header file will implicitly include the nested header file.

# 2.12 - Header Guards

- Header Guards: Conditional compilation directives, designed to ensure that the contents of a given header file are not copied more than once into any single file, in order to prevent duplicate definitions.

```cpp
#ifndef SOME_UNIQUE_NAME_HERE
#define SOME_UNIQUE_NAME_HERE

// your declarations (and certain types of definitions) here

#endif
```

# 2.13 - How to Design Your First Program

