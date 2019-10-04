//Name: Ignatius Akeeh
//Class: CSE 310
//Project: 1
/**
	Description: Write a C/C++ program that implements the given decoding scheme on a plain text.
				The program must be compiled into an exectable name decode and it must take one command line parameter.
				In all cases, you must read input from stdin, allowing redirection from a text file.
				You must write the decoded plain text to stdout, allowing redirection to a text file.
**/


#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char* argv[]) {
	//varible(s)
	vector<string> input;
	vector<string> output;
	vector<string> original;
	string text = "";
	string last = "";
	int index;

	while (!cin.eof()) {

		cin >> index;

		getline(cin, text);
		for (int i = 0; i < text.size(); i++) {

		}//end of for loop

		//last = text;



	}//end of 1st while

	


	return 0;
}