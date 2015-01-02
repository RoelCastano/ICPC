#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int tests;
    // Do loop the amount of time the user inputs.
    for (cin >> tests; tests > 0; tests--){
        int num, divs = 0, orig;
        cin >> orig;
        num = orig; //Copy original value to mutable value.
        do {
            int dig = num % 10;
            if ((dig != 0) && (orig%dig == 0)) divs++;
        } while (num /= 10);
        cout << divs << endl;
    }

    return 0;
}

