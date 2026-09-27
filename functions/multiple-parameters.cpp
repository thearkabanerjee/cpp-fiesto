#include <iostream>
using namespace std;


int largest(int a, int b, int c) {
    if (a == b && b == c)
        return 0;

    if (a >= b && a >= c)
        return a;

    if (b >= a && b >= c)
        return b;

    return c;
}


int main() {
    int a, b, c;

    cin >> a >> b >> c;

    int m = largest(a, b, c);

    if (m != 0) {
        cout << m << endl;
    } else {
        cout << "All numbers are same" << endl;
    }

    return 0;
}
