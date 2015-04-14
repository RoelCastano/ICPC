#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    long long int fibbonacci[90];
    fibbonacci[0] = 1;
    fibbonacci[1] = 2;
    for(int i = 2; i < 90; i++){
        fibbonacci[i] = fibbonacci[i-1] + fibbonacci[i-2];
    }

    int tests;
    for(cin >> tests; tests > 0; tests--) {
        long long int sum = 0, num;
        cin >> num;
        for(int i = 0; fibbonacci[i] <= num; i++){
            if(fibbonacci[i] % 2 == 0) sum += fibbonacci[i];
        }
        cout << sum << endl;
    }

    return 0;
}
