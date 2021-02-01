/*
Author: Diaa Hassouna
This is my 1st Project using Object Oriented Design
*/
#include <iostream>

using namespace std;

class Book {
public:
    //attributes
    string name{"My Awesome Book"};
    string author{"Diaa"};


    //methods


};

int main() {

Book Go;

cout << "Your Book name is " << Go.name << endl;
cout << "Author's name is " << Go.author << endl;

Go.name = "Go";
Go.author = "Jack";

cout << endl << Go.name << endl << Go.author << endl;

return 0;
}


