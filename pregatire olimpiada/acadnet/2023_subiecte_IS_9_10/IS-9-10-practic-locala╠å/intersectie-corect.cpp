#include <iostream>
using namespace std;

#define NMAX 10000

int v1[NMAX];

int main() {
    int x, n1 = 0;
    int cnt = 0, found = 0;

    // Citeste primul vector
    while (1) {
        cin >> x;

        if (x != 0)
            v1[n1++] = x;
        else
            break;
    }

    while (1) {
        cnt += found;
        found = 0;

        cin >> x;

        if (x != 0) {
            for (int i = 0; i < n1; i++)
                if (v1[i] == x)
                    found = 1;
        } else
            break;
    }

    cout << cnt + found << '\n';

    return 0;
}
