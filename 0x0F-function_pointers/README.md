# 0x0F. C - Function pointers
The following were the learning objectives:
-   What are function pointers and how to use them
-   What does a function pointer exactly hold
-   Where does a function pointer point to in the virtual memory

The following are files found in the directory and  here is what they do:
1. 0-print_name.c - function that prints a name.
2. 1-array_iterator.c - function that executes a function given as a parameter on each element of an array.
3. 2-int_index.c - function that searches for an integer.
4.  3-main.c - program prints the result of the operation, followed by a new line
5. 3-op_functions.c - contains the 5 following functions:

		-   `op_add`: returns the sum of  `a`  and  `b`. Prototype:  `int op_add(int a, int b);`
		-   `op_sub`: returns the difference of  `a`  and  `b`. Prototype:  `int op_sub(int a, int b);`
		-   `op_mul`: returns the product of  `a`  and  `b`. Prototype:  `int op_mul(int a, int b);`
		-   `op_div`: returns the result of the division of  `a`  by  `b`. Prototype:  `int op_div(int a, int b);`
		-   `op_mod`: returns the remainder of the division of  `a`  by  `b`. Prototype:  `int op_mod(int a, int b);`
6. 3-get_op_func.c - contains the function that selects the correct function to perform the operation asked by the user.
7. 3-calc.h - header file containing all the function prototypes and data structures used by the program.
8. function-pointers.h - header file containing the prototypes of all the functions and the prototype of the function `_putchar`