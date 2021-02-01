#include <iostream>

using namespace std;

int main() {
int num;
cout << "inter a number: ";
cin >> num;

cout << num << " is " << ((num%2==0) ? "even" : "odd") << endl;

return 0;
}
