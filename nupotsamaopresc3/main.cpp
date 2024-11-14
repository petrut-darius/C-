#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    long long rez;
    //1LL -> 1 long long; converteste variabila de tip int intr-o variabila de tip long long
    rez = 1LL * n * (n+1) / 2;
    cout << rez << endl;
    return 0;
}
