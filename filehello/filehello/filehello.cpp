#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	//init zmienne
	int x = 0;
	cin >> x;
	if (x == 1) {
		ofstream MyFile("filename.txt");

		// Write to the file
		MyFile << "Hello123";

		// Close the file
		MyFile.close();
	}
	else if (x == 2) {
		// Create a text string, which is used to output the text file
		string myText;

		// Read from the text file
		ifstream MyReadFile("filename.txt");

		// Use a while loop together with the getline() function to read the file line by line
		while (getline(MyReadFile, myText)) {
			// Output the text from the file
			cout << myText;
		}

		// Close the file
		MyReadFile.close();
	}
	if (x == 3) {
		string filename;
		cin >> filename;
		// Create and open a text file
		ofstream MyFile(filename);
	}
}