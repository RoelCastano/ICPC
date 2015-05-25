#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/*
 *  * Complete the function below.
 *   */
int maxXor(int l, int r) {
  int i, j, max = 0;
  for (j = l; j <= r; j++){
    for (i = j; i <= r; i++) {
      if((j^i) > max) max = j^i;
    }
  }
  return max;
}

int main() {
  int res;
  int _l;
  cin >> _l;

  int _r;
  cin >> _r;

  res = maxXor(_l, _r);
  cout << res;

  return 0;
}


