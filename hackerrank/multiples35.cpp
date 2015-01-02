#include <iostream>

using namespace std;

int main () {
    int tests;

    for (cin >> tests; tests > 0; tests--){
        unsigned long int num, total = 0, temp = 0;
        cin >> num;

        for(unsigned long int i = 3; i < num; i = i + 3) total += i;
        for(unsigned long int i = 5; i < num; i = i + 5) total += i;
        for(unsigned long int i = 15; i < num; i = i + 15) total -= i;
        cout << total << endl;
    }

    return 0;
}
