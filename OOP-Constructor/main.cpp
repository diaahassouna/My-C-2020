#include <iostream>
#include <string>

using namespace std;

class Player{

    //Attributes
public:
    string name;
    int health;
    int xp;

public:
    //Overloaded Constructor
    Player();
    //Destructor
    ~Player() {
        cout << "Destructor launched for object: " << name << endl;
    }

};

//Declaring Overloaded Constructor Outside the class
Player::Player()
    :name{"Adam"},health{100},xp{0}
    {
        cout << "My constructor is launched" << endl;
    }

int main()
{
    Player Adam;
    cout << "Name = " << Adam.name << endl;
    cout << "Health = " << Adam.health << endl;
    cout << "XP = " << Adam.xp << endl;
    return 0;
}
