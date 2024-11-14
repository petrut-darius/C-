#include <iostream>
using namespace std;

int convert_to_binary(int n, int result[10]) {
    int i;
    for (i = 0; n > 0; ++i) {
        result[i] = n % 2;
        n = n / 2;
    }

    return i;
}

int main()
{
    // "Print the solution, you must" - Yoda
    int a[10] = {0}, n, no_elements;
    cin >> n;

    no_elements = convert_to_binary(n, a);

    for (int i = no_elements - 1; i >= 0; --i) {
        cout << a[i];
    }
}
