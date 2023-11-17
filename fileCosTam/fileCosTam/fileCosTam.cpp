#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main() {

	string odczyt;

	string nazwa;

	cout << "1. Odczyt" << endl << "2. Zapis" << endl << "3. Zmiana nazwy pliku" << endl;

	cin >> odczyt;

	if (odczyt == "1") {
	// Create and open a text file
	ofstream MyFile("filename.txt");

	// Write to the file
	MyFile << "dupa123";

	// Close the file
	MyFile.close();

	}
	else if (odczyt == "2") {
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
	else if (odczyt == "3") {

		cout << "Wprowadz nazwe pliku" << endl;

		cin >> nazwa;


		ofstream MyFile(nazwa+".txt");
	}

}
