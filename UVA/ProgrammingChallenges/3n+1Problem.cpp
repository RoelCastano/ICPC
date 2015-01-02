#include <iostream>

using namespace std;

int main()
{
	int i,j,max;
	cin >> i >>j;

	for (int k = i; k < j; ++k)
	{
		int cycles = 0, x = k;

		while(x != 1){
			if (x % 2 == 0) {
				cycles++;
				x /= 2;
			} else {
				cycles++;
				x = (x*3)+1;
			}
		} 

		if (cycles > max) max = cycles;

	}

	cout << i << " " << j << " " << max;

	return 0;
}