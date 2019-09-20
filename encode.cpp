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

#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char* argv[]) {
	// . / exec merge->argc == 2; argv == ['exec', 'merge']
	// if argv[1] == "merge" {} else if argv[1] == "insertion" {}
	// <std><iostream>
	// cin << x;
	// cout << x;
	// exec < input.txt > output.txt

	//varibles
	//vector<string> input;
	vector<string> output;
	vector<string> reverseOutput;
	string text;
	

	//add text from text file into vector text

	if (argv[1] == "insertion") {
		//put code here
		text = "";
		vector<string> input;

		cout << "The size of input after before text from text is " << input.size() << endl;

		getline(cin, text);
		input.assign(1, text);
		//input.push_back(text);

		//this will that input from cin and put it in the vector<string> input
		/*while (getline(cin, text)) {
			input.push_back(text);
		}*/

		cout << "The size of input after adding text from text is " << input.size() << endl;
		//output = input; //temporay to test if input and output is working

		//will send all element of vector<string> text to cout
		for (int i = 0; i < input.size(); i++) {
			cout << input[i] << endl;
		}
		
	}
	else if (argv[1] == "merge") {
		//put code here
	}
	
	return 0;
	
}





/*
	This function when call will sort an array using insertion sort.
*/
