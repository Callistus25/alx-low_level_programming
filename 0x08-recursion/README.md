## C - Recursion

This project shows what I learned about recursion in C.

### Tasks

0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

	- [0-puts_recursion.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x08-recursion/0-puts_recursion.c): C function that prints a string, followed by a new line.
	- Prototype: void _puts_recursion(char *s)*;

1. Why is it so important to dream? Because, in my dreams we are together

	- [1-print_rev_recursion.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x08-recursion/1-print_rev_recursion.c): C function that prints a string in reverse.
	- Prototype: void _print_rev_recursion(char *s);*

2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange

	- [2-strlen_recursion.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x08-recursion/2-strlen_recursion.c): C function that returns the length of a string. 
	- Prototype: int _strlen_recursion(char *s);*

3. You mustn't be afraid to dream a little bigger, darling

	- [3-factorial.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x08-recursion/3-factorial.c): C function that returns the factorial of a given number.
	- Prototype: int factorial(int n);
	- If n is lower than 0, the function should return -1 to indicate an error
	- Factorial of 0 is 1
4. Once an idea has taken hold of the brain it's almost impossible to eradicate

	- [4-pow_recursion.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x08-recursion/4-pow_recursion.c): C function that returns the value of a number x raised to the value of an input y.

	- Prototype: int _pow_recursion(int x, int y);
	- If y is lower than 0, the function should return -1.

5. Your subconscious is looking for the dreamer

	- [5-sqrt_recursion.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x08-recursion/5-sqrt_recursion.c): C function that returns the natural square root of a number.

	- Prototype: int _sqrt_recursion(int n);
	- If the number does not have a natural square root, the function returns -1.

6. Inception. Is it possible?

	- [6-is_prime_number.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x08-recursion/6-is_prime_number.c): C function that returns 1 if the input integer is a prime number, otherwise return 0.

	- Prototype: int is_prime_number(int n);

7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything

	- [100-is_palindrome.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x08-recursion/100-is_palindrome.c): C function that checks if a string is a palindrome.

	- If the string is a palindrome, the function returns 1,otherwise, the function returns 0.
	- Prototype: int is_palindrome(char *s);*

8. Inception. Now, before you bother telling me it's impossible...

	- [101-wildcmp.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x08-recursion/101-wildcmp.c): C function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.

	- Prototype: int wildcmp(char *s1, char *s2);
	- s2 can contain the special character *.
	- The special char * can replace any string (including an empty string)
	- If the strings can be considered identical, the function returns , otherwise, the function returns 0.
