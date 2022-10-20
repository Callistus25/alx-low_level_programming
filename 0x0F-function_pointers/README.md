## C - Function pointers

This project is about function pointers in `C` - what they hold, where they point in virtual memory, and how to use them.

- [function_pointers.h](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x0F-function_pointers/function_pointers.h): Header file containing prototypes for all functions written for programs 0-2 of the project.

## Tasks

0. What's my name

	- [0-print_name.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x0F-function_pointers/0-print_name.c): C function that prints a name.
	- Prototype: `void print_name(char *name, void (*f)(char *));`
1. If you spend too much time thinking about a thing, you'll never get it done

	- [1-array_iterator.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x0F-function_pointers/1-array_iterator.c): C function that executes a function given as a parameter on each element of an array.
	- Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
	- where size is the size of the array
	- and action is a pointer to the function you need to use
2. To hell with circumstances; I create opportunities

	- [2-int_index.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x0F-function_pointers/2-int_index.c): C function that searches for an integer.
	- Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
	- where `size` is the number of elements in the array `array`
	- `cmp` is a pointer to the function to be used to compare values
	- `int_index` returns the index of the first element for which the cmp function does not return 0
	- If no element matches, return `-1`
	- If size <= `0`, return `-1`

3. A goal is not always meant to be reached, it often serves simply as something to aim at

[3-op_functions.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x0F-function_pointers/3-op_functions.c): File containing the following five functions:

	- op_add: Returns the sum of `a` and `b`.
	- op_sub: Returns the difference of `a` and `b`.
	- op_mul: Returns the product of `a` and `b`.
	- op_div: Returns the division of `a` by `b`.
	- op_mod: Returns the remainder of the division of `a` by `b`.

[3-get_op_func.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x0F-function_pointers/3-get_op_func.c): C function that selects the correct function from 3-op_functions.c to perform the operation asked by the user.
	- Prototype: `int (*get_op_func(char *s))(int, int);`
	- where `s` is the operator passed as argument to the program
	- This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: `get_op_func("+")` should return a pointer to the function `op_add`
	- You are not allowed to use `switch` statements
	- You are not allowed to use `for` or `do ... while` loops
	- You are not allowed to use `goto`
	- You are not allowed to use `else`
	- You are not allowed to use more than one `if` statement in your code
	- You are not allowed to use more than one `while` loop in your code
	- If `s` does not match any of the 5 expected operators `(+, -, *, /, %)`, return `NULL`
	- You are only allowed to declare these two variables in this function:

[3-main.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x0F-function_pointers/3-main.c): C program that performs simple mathematical operations.
	- You are not allowed to code any other function than main in this file
	- You are not allowed to directly call `op_add`, `op_sub`, `op_mul`, `op_div` or `op_mod` from the main function
	- You have to use atoi to convert arguments to `int`
	- You are not allowed to use any kind of loop
	- You are allowed to use a maximum of 3 `if` statements

4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker

	- [100-main_opcodes.c]: C program that prints the opcodes of its own main function, followed by a new line.
	- Usage: `./main number_of_bytes`
	- Output format:
		- the opcodes should be printed in hexadecimal, lowercase
		- each opcode is two char long
		- listing ends with a new line
		- see example
	- You are allowed to use `printf` and `atoi`
	- You have to use `atoi` to convert the argument to an `int`
	- If the number of argument is not the correct one, print `Error`, followed by a new line, and exit with the status `1`
	- If the number of bytes is negative, print `Error`, followed by a new line, and exit with the status `2`
	- You do not have to compile with any flags
