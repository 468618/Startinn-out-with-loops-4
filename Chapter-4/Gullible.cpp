#include <iostream>
using namespace std;

int main() {
    int x;
    while (x < 4000) {
        cout << "\nEnter any number other than 5: ";
        cin >> x;
    if (x == 5) {
        cout << "Hey! You're not supposed to enter 5!";
    }
    }
    return 0;
}
