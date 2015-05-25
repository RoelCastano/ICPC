#include <iostream>
using namespace std;

int height(int n) {
  if(n == 0) return 1;
  if(n%2) return 2 * height(n-1);
  return 1 + height(n-1);
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    cout << height(n) << endl;
  }
}
