

# 7.1 - Compound Statements (Blocks)

- Compound Statement (block): A group of zero or more statements that is treated by the compiler as if it were a single statement.
    - Begin `{` and close `}`.

- Nesting Level (Nesting Depth): Maximum number of nested blocks you can be inside at any point in the function.
    - Compilers typically support 256 levels of nesting. BUT some can differ.
        - Stick the <=3 levels of nesting.

# 7.2 - User-defined Namespaces and the Scope Resolution Operator

- Namespace: A block of code used to prevent naming collisions between functions etc.
    - AKA -> User-defined Namespaces or Program-defined Namespaces.

```cpp
namespace NamespaceIdentifier {

    // content of namespace here
}
```

- Scope Resolution Operator (`::`): Tells the compiler that the identifier specified by the right-hand operand should be looked for in the scope of the left-hand operand.

```cpp
#include <iostream>

namespace Foo // define a namespace named Foo
{
    // This doSomething() belongs to namespace Foo
    int doSomething(int x, int y)
    {
        return x + y;
    }
}

namespace Goo // define a namespace named Goo
{
    // This doSomething() belongs to namespace Goo
    int doSomething(int x, int y)
    {
        return x - y;
    }
}

int main()
{
    std::cout << Foo::doSomething(4, 3) << '\n'; // use the doSomething() that exists in namespace Foo
    return 0;
}
```

- Namespace Alias: You can assign an alias to a namespace for shorthand use.

```cpp
#include <iostream>

namespace Foo::Goo
{
    int add(int x, int y)
    {
        return x + y;
    }
}

int main()
{
    namespace Active = Foo::Goo; // active now refers to Foo::Goo

    std::cout << Active::add(1, 2) << '\n'; // This is really Foo::Goo::add()

    return 0;
} // The Active alias ends here
```

# 7.3 - Local Variables

- Local Variables: Variables that are defined inside a fucntion (including function parameters).

- Local variables have **block scope**.
    - They are in scop from their point of definition to the end of the block the are defined within.

- Storage Duration (Variable): Determines what rules govern when and how a variable will be instantiated and destroyed.
    - Most cases, `storage duration` directly determines its `lifetime`.

- Automatic Storage Duration: Local Variables are created at a the point of definition and destroyed at the end of the block they are defined in.
    - Sometime called **automatic variables**

```cpp
int main()
{
    int i { 5 }; // i created and initialized here
    double d { 4.0 }; // d created and initialized here

    return 0;
} // d and i are destroyed here
```

# 7.4 - Introduction Global Variables

- Global Variables: Variables the are declared *outside* of a function.
    - Typically prefixed with `g_` or `g`.

- Variables declared inside a namespace are also global variables.
    - Prefer defining global variables inside a namespace rather than in the global namespace.

- Static Duration: Variables the are created when the program starts (before `main()`) and destroyed when it ends. 
    - Global Variables have static duration.
        - AKA **static variables**.

- Unlike local variables, which are uninitialized by default, variables with static duration are zero-initialized by default.

```cpp
int g_x;       // no explicit initializer (zero-initialized by default)
int g_y {};    // value initialized (resulting in zero-initialization)
int g_z { 1 }; // list initialized with specific value
```

- Summary: 

```cpp
// Non-constant global variables
int g_x;                 // defines non-initialized global variable (zero initialized by default)
int g_x {};              // defines explicitly value-initialized global variable
int g_x { 1 };           // defines explicitly initialized global variable

// Const global variables
const int g_y;           // error: const variables must be initialized
const int g_y { 2 };     // defines initialized global const

// Constexpr global variables
constexpr int g_y;       // error: constexpr variables must be initialized
constexpr int g_y { 3 }; // defines initialized global constexpr
```

# 7.5 - Variable Shadowing (Name Hiding)

- Name Hiding/Shadowing: When a nested variable “hides” the outer variable in areas where they are both in scope.
    - This applies to global variables and nested ones as well. 
    - Use the **Scope Operator** (`::`) to access the global variable directly when inside a nested scope.
    - `-Wshadow`: Will generate warnings if a variable is shadowed.

```cpp
#include <iostream>

int main()
{ // outer block
    int apples { 5 }; // here's the outer block apples

    { // nested block
        // apples refers to outer block apples here
        std::cout << apples << '\n'; // print value of outer block apples

        int apples{ 0 }; // define apples in the scope of the nested block

        // apples now refers to the nested block apples
        // the outer block apples is temporarily hidden

        apples = 10; // this assigns value 10 to nested block apples, not outer block apples

        std::cout << apples << '\n'; // print value of nested block apples
    } // nested block apples destroyed


    std::cout << apples << '\n'; // prints value of outer block apples

    return 0;
} // outer block apples destroyed
```

```cpp
#include <iostream>
int value { 5 }; // global variable

int main()
{
    int value { 7 }; // hides the global variable value
    ++value; // increments local value, not global value

    --(::value); // decrements global value, not local value (parenthesis added for readability)

    std::cout << "local variable value: " << value << '\n';
    std::cout << "global variable value: " << ::value << '\n';

    return 0;
} // local value is destroyed
```

# 7.6 - Internal Linkage

