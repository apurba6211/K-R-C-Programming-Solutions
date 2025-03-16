/*
 * Write a C program to print any message like Hello World
 *
 * This is our first C program. This program demostrates the core concepts common to all programming languages
 */

#include <stdio.h>
		/* For now, just know this that #include is a control line, which is telling the compiler
		 * to include information from the stdio.h (standard input output library) header file where
		 * many default functions like printf(), scanf() exist
		 */

int main() {
	/* A C program usually consists functions and variables. Functions are nothing but set of instuctions
	 * and variables to perform desired task. Every C program must have a main() function from where 
	 * the program begins execution. You can name your own functions anything but main().functions usually have
	 * return type like int, void, double etc. For our main() function return type is int.
	 *
	 * Varibles store data. Like int, float, double etc
	 */
	
	printf("Hello, World\n");
	/*
	 * Printf() is already available like other default functions defined in stdio.h
	 * it just format and print it's output to console. Anything written between the double quote sign '"' 
	 * is argument to the function printf().
	 * In case of white space charachers like \n, \t, \r , escape characters to print special sysmbols
	 * like double quote itselt, format specifiers like %d, %s etc the printf() function formats it's input
	 * accordingly.
	 * the '\n' in printf() is linefeed( move input pointer to newline/nextline)
	 */

	return 0;
	/*
	 * return desired data or control to the calling function
	 */
}
