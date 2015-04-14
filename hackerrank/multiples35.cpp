#include <iostream>

using namespace std;

long long int sumMultiples(long long int max, long long int mult) {
    long long int mid = (max - 1)/mult;
    return ((((mid*mult)-mult)/2.0 + mult)* mid);
}

int main () {
    int tests;

    for (cin >> tests; tests > 0; tests--){
        long long int num;
        cin >> num;

        cout <<  sumMultiples(num, 3) + sumMultiples(num, 5) - sumMultiples(num, 15) << endl;
    }

    return 0;
}
