
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

