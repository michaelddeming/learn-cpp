
# 3.1 - Syntax anad Semantic Errors

- Syntax Error: Occurs when you write a statement that is not valid according to the grammar of the C++ language.

- Semantic Error: Occur when a statement is syntactically valid, but either violates other rules of the language, or does not do what the programmer intended.

# 3.2 - The Debugging Process 

# 3.3 - A Strategy for Debugging

# 3.4 -  Basic Debugging Tactics

# 3.5 - More Debugging Tactics

# 3.6 - Using an Integrated Debugger: Stepping

- Debugger: A computer program that allows the programmer to control how another program executes and examine the program state while that program is running.

- Integrated Debugger: Debugger that is found in IDE. 

# 3.7 - Using an Integrated Debugger: Running and Breakpoints

- Run to Cursor: Executes the program until execution reaches the statement selected by your cursor.

- Continue: Continues running the program as per normal, either until the program terminates, or until something triggers control to return back to you again (such as a breakpoint).

- Start: Starting from the beginning of the program. It can only be invoked when not already in a debug session.

- Breakpoints: A special marker that tells the debugger to stop execution of the program at the breakpoint when running in debug mode.

- Set Next Statement: Allows us to change the point of execution to some other statement (sometimes informally called jumping).

# 3.8 - Using an Integrated Debugger: Watching Variables 

- Wathcing Variables: Using a debugger to watch variables (and their values) as your program executes. 

- Watch Window: Visual window provided by the IDE where variables are displayed during program execution. 

# 3.9 - Using an Integrated Debugger: The Call Stack

- Call Stack: A list of all active functions that have been called to get to the current point of the execution. 
    - Includes:
        - An entry for each function called.
        - What line of code to return to when the function returns.

# 3.10 - Finding Issues Before They Become Problems 

- Unit Testing: A software testing method by which small units of source code are tested to determine whether they are correct.

- Constraints: Addition of some extra code (that can be compiled out in a non-debug build, if desired) to check that some set of assumptions or expectations are not violated.
    - `assert` and `static_assert`

- Static Analysis Tools (linter): Programs that analyze your source code to identify specific semantic issues (in this context, static means that these tools analyze the source code without executing it).

