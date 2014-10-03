#include <iostream>
using namespace std;

int main(){
	int testCases, n = 0;
	cin >> testCases;
	int x,y,z, middle;
	while(testCases){

		cin >> x >> y >> z;
		if (y > x) // x,y
		{
			if (z > y) { //x,y,z
				middle = y;
			} else { 
				if (z > x) // x,z,y
				{
					middle = z;
				} else { //z,x,y
 					middle = x;
				}
			}

		} else // y,x
		{ 
			if (z > x) // y,x,z
			{
				middle = x;
			} else {
				if (z > y) // y,z,x
				{
					middle = z;
				} else { // z,y,x
					middle = y;
				}
			}
		}
		cout << "Case "<< n + 1 << ": "  << middle << endl;
		n++;
		testCases--;
	}


	return 0;
}