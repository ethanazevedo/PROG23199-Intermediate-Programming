#include <iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter an integer: "; // prompt the user to enter an integer.
    cin >> x; // read an integer from the user and store it in the variable x.
    cout << x;
    cout << ("\nx is equal to " + to_string(x));

    return 0;
}