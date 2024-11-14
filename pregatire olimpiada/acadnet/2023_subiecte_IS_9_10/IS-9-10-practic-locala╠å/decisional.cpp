#include <iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

int check_pages_parity(int pages[], int vector_size) {

    for (int i = 1; i <= vector_size; i++) {
        if (pages[i] % 2 == 1) {
            return FALSE;
        } else {
            return TRUE;
        }
    }

    return TRUE;
}

int main() {
    int vector_size, i;
    int pages[2000];

    cin >> vector_size;

    if (vector_size > 2000) {
        return 1;
    }

    for (i = 0; i < vector_size; i++) {
        cin >> pages[i];
    }

    if (check_pages_parity(pages, vector_size) == TRUE) {
        cout << "Numarul de pagini al tuturor cartilor este par." << endl;
    } else {
        cout << "Unele carti au numar de pagini impar." << endl;
    }

    return 0;
}
