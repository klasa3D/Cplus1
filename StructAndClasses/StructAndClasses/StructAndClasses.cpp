#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

    class naszaKlasa 
    {      
    public:
                int liczba;
                    naszaKlasa() {
                    cout << "Konstruktor \n";
                }

                    void add(int x) {
                        liczba = x;
                    }

                 void toString() {
                     cout << "Liczba: " << liczba << endl;
                 }

                 void addString(string txt) {
                     cout << txt;
                 }




    };

int main()
{
    /*
    struct {
        int myNum;
        string myString;
    } myStructure;

    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n"; 
    */

    system("Color DE");

    naszaKlasa aaa;
    aaa.add(100);
    aaa.toString();
    aaa.addString("Dupa");




    return 0;
}
