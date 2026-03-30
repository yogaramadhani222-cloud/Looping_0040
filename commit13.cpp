#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int x;
    srand(time(0));

    x = 1 + rand() % 10;

    while (x <= 5) {
        cout << x << endl;
        x = rand() % 10;
    }
}