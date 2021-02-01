#include <iostream>

using namespace std;

int main()
{
    while(true)
    {
        int option;
        cout << "Insert a number to get an option: " << endl << endl;
        cout << "Options: 1,2,3 or you will exit." << endl << endl;
        cin >> option;
        switch(option)
        {
        case 1:
            {
                cout << endl << "You choose number 1" << endl << endl;
                break;
            }
        case 2:
            {
                cout << endl << "You choose number 2" << endl << endl;
                break;
            }
        case 3:
            {
                cout << endl << "You choose number 3" << endl << endl;
                break;
            }
        default:
            {
                cout << endl << "Do you want to exit?" << endl;
                cout << "1) Yes" << endl << "2) No" << endl << endl << endl;
                int option_2;
                cin >> option_2;
                if (option_2 == 1)
                {
                    cout << "Good Bye!" << endl;
                    return 0;
                }
                else
                {
                    cout << endl << "Welcome again!" << endl << endl;

                }
            }
        }
    }
    return 0;
}
