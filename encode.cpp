//Name: Ignatius Akeeh
//Class: CSE 310
//Project: 1
/**
	Description: Write a C/C++ program that implements the given encoding scheme on a plain text.
				The program must be compiled into an exectable name encode and it must take one command line parameter.
				The parameter is one of keywords insertion or merge.
				In all cases, you must read input from stdin, allowing redirection from a text file.
				You must write the encoded plain text to stdout, allowing redirection to a text file.
**/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	// . / exec merge->argc == 2; argv == ['exec', 'merge']
	// if argv[1] == "merge" {} else if argv[1] == "insertion" {}
	// <std><iostream> 
	// cin << x;
	// cout << x;
	// exec < input.txt > output.txt

	if (argv[1] == "insertion") {
		//put code here
	}
	else if (argv[1] == "merge") {
		//put code here
	}
	
	return 0;
	
}

