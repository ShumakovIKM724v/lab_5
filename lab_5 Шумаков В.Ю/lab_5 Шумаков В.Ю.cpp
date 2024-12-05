#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");

    int x, i, f, y;
    cout << "Уведіть ціле число х: ";
    cin >> x;

    i = 1;
    f = 1;

    while (i <= x) {
        f = f * i;
        i = i + 1;
    }

    y = 2 * f;
    cout << "y = " << y << '\n';

    return 0;
   
}
