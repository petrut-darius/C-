#include <iostream>
using namespace std;

int main(){
    //problema #338
    int n;
    cin >> n;
    long long rez = 0;
    // ++i -> ii adauga 1 inainte sa inceapra repetearea
    // i++ -> ii adauga 1 dupa ce a realizat repetarea
    for(int i = 1; i <= n; ++i){
        long long puterea = 1;
        for(int j = 1; j <= i; ++j){
            puterea = 1LL * puterea * i;
        }
        rez += puterea;
    }
    cout << rez << endl;
    return 0;
}
