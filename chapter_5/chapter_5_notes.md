
# 5.1 - Constant Variables (Named Constants)

- Constant: Value that may not be changed during the programs execution.
    - Named Constants (Symbolic Constants): Constant values that are associated with an identifier.
    - Literal Constants: Constant values that are not associated with an identifier.

- Constant Variables: A variable whose value cannot be changed after initialization.
    - `const` next to the object type.
    - Must be initialized when defined!

- Type Qualifiers: A keyword that is applied to a type that modifies how that type behaves.
    - `const` is a **const type qualifier**.
    - C++23 has 2 type qualifers: 
        1. `const`: Setting values constant.
        2. `volatile`: Used to tell the compiler that an object may have its value changed at any time.
        - Often referred as `cv-qualifiers`

# 5.2 - Literals

- Literals: Values that are inserted directly into the code.

- Literal Constants: Literals are sometimes called literal constants because their meaning cannot be redefined 

![alt text](image.png)

- Literal Suffixes: Add a suffix to a literal to change its deduced type.

![alt text](image-1.png)

- String: Collection of sequential characters used to represent text (such as names, words, and sentences).

- String Literal: C-style string literals are `const` objects that are created at the start of the program and are guaranteed to exist for the entirety of the program.

- Null Terminator `\0`: Character with ASCII Code 0, used to indicate the end of the string. 
    - String that ends with a null terminator is called a **null-terminated string**.

- Magic Number: A literal (usually a number) that either has an unclear meaning or may need to be changed later.
    - Avoid magic numbers.

# 5.3 - Numeral Systems (Decimal, Binary, Hexadecimal, Octal)

# 5.4 - The as-if Rule and Compile-time Optimization

- Profiler: A program that is used to determine how long certain parts of a program are taking to run and which are impacting overall performance.

- Optimizer: A program that optimizes another program.

- As-If Rule: The compiler can modify a program however it likes in order to produce more optimized code, so long as those modifications do not affect a program’s “observable behavior”.

- Compile-time Evaluation: When the compiler fully or partially evaluates an expression at compile-time.
    - Constant Folding: An optimization technique where the compiler replaces expressions that have **literal operands** with the result of the expression.
        - `int x{3 + 4}` is replaced with `x{7}``
    - Constant Propagation: An optimization technique where the compiler replaces **variables** known to have constant values with their values. 
    - Dead Code Elimination: An optimization technique where the compiler removes code that may be executed but has no effect on the program’s behavior.
        - Unused variables (optimized out/away)
    
- Use `const` variables to help the compiler predetermine variable status and improve compiler optimization.





