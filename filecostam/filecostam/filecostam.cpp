#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string odczyt;
	string nazwa;

	int x = 0;
	cin >> x;
	if (x == 1) {
		ofstream MyFile("filename.txt");
		MyFile << "Z Piątnicy no bo skąd?";
		MyFile.close();
	}
	else if (x == 2) {
		string myText;
		ifstream MyReadFile("filename.txt");
		while (getline(MyReadFile, myText)) {
			cout << myText;
		}
		MyReadFile.close();
	}
	else if (x == 3) {
		cout << "Wprowadz nazwe pliku" << endl;
		cin >> nazwa;
		ofstream MyFile(nazwa + ".txt");
	}
}