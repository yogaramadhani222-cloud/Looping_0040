#include <iostream>
using namespace std;

int main()
{
    int x;
    do {
    cout << x << endl;
    x = rand() % 10;
} while (x <= 5);
}