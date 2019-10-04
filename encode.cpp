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

/*
	This function when call will sort an array using insertion sort.
*/
void insertion(vector<string> &A, int n) {
	int j, i;
	string key;
	for (j = 1; j < n; j++) {
		key = A[j];
		i = j - 1;
		while (i > 0 && A[i] > key) {
			A[i] = A[i - 1];
			i--;
		}//end of while loop
		A[i+1] = key;
	}//end of for loop
}//end of the insertion function

/*
	This function use mergesort to sort the v;ector<string>
*/
void Merge(vector<string> &A, int L, int mid, int R) {
	int n1 = mid - L + 1;
	int n2 = R - mid;
	int left = L;
	int right = R;
	for (int index = 0; index < A.size(); index++) {
		string L = A[index].substr(left, n1);
		string R = A[index].substr(n2, right);
		int i = 0, j = 0, k = 1;

		while (i < n1 && j < n2) {
			if (L[i] <= R[j]) {
				A[index][k] = L[i];
				i++;
			}
			else {
				A[index][k] = R[j];
				j++;
			}
			k++;
		}//end of while loop

		while (i < n1) {
			A[index][k] = L[i];
			i++;
			k++;
		}

		while (j < n2) {
			A[index][k] = R[j];
			j++;
			k++;
		}
	}//end of for loop

}//end of merge function

void Mergesort(vector<string> &A, int L, int R) {
	if (L < R) {
		int mid = (L + (R-1)) / 2;
		Mergesort(A, L, mid);
		Mergesort(A, mid + 1, R);
		Merge(A, L, mid, R);
	}//end of if 
}//end of mergesort function



int main(int argc, const char* argv[]) {

	//varibles
	vector<string> input;
	vector<string> output;
	vector<string> original;
	string choice = argv[1];
	string text = "";
	string last = "";
	int index;
	

	//add text from text file into vector text


	while (!cin.eof()) {
		//put code here
		getline(cin, text);
		input.push_back(text);
		//cout << "Current size of input vector: " << input.size() << endl;

		//sorting the original vector<string> 
		if (choice == "insertion") {
			//put code here
			//cout << endl;
			//cout << "Inside the insertion if statement." << endl;
			//int index = 0;
				//doing the encoding scheme
				//cout << input[index] << endl;
				//cout << input[index].size() << endl;
				//cout << endl;
				//string originalText = input[index];
			string originalText = text;
			//original.push_back(input[index]);
			original.push_back(text);
			for (int i = 1; i < text.size(); i++) {
				string temp = "";
				for (int j = 1; j < original[i - 1].size(); j++) {
					temp = temp + original[i - 1][j];
				}//end of 2nd for loop
				temp = temp + original[i - 1][0];
				original.push_back(temp);
			}//end of 1st for loop

			insertion(original, original.size());


			//outputing element in the vector<string> original
			for (int i = 0; i < original.size(); i++) {
				//cout << original[i] << endl;
			}//end of for loop

			//fill the last string
			for (int i = 0; i < original.size(); i++) {
				int size = original[0].size();
				last = last + original[i][size - 1];
			}//end of for loop

			//find index that in sorted original that match originalText
			for (int i = 0; i < original.size(); i++) {
				if (original[i] == originalText) {
					//cout << i << endl;
					output.push_back("" + i);
				}//end of if loop
			}//end of for loop

			//output last string
			//cout << endl;
			//cout << last << endl;
			output.push_back(last);
			//end




		}
		else if (choice == "merge") {
			//put code here
			//cout << endl;
			//cout << "Inside the merge if statement." << endl;
			//index = 0;
				//doing the encoding scheme
				//cout << input[index] << endl;
				//cout << input[index].size() << endl;
				//cout << endl;
			string originalText = text;
			original.push_back(text);
			for (int i = 1; i < text.size(); i++) {
				string temp = "";
				for (int j = 1; j < original[i - 1].size(); j++) {
					temp = temp + original[i - 1][j];
				}//end of 2nd for loop
				temp = temp + original[i - 1][0];
				original.push_back(temp);
			}//end of 1st for loop


			Mergesort(original, 0, original.size());
			//fill the last string
			for (int i = 0; i < original.size(); i++) {
				int size = original[0].size();
				last = last + original[i][size - 1];
			}//end of for loop

			//find index that in sorted original that match originalText
			for (int i = 0; i < original.size(); i++) {
				if (original[i] == originalText) {
					//cout << i << endl;
					output.push_back("" + i);
				}//end of if loop
			}//end of for loop

			//output last string
			//cout << endl;
			//cout << last << endl;
			output.push_back(last);
			//end



		}

	}//end of 1st while loop

	

	//outputing element in the vector<string> original
	for (int i = 0; i < original.size(); i++) {
		//cout << original[i] << endl;
	}

	
	
	return 0;
	
}





