/*

	11498 - Division of Nlogonia

*/


#include <iostream>
using namespace std;

int main()
{
	int queries, n, m, x, y;
	cin >> queries;
	while (queries){
		cin >> n >> m;

		for (int i = 0; i < queries; ++i)
		{
			string section;
			cin >> x >> y;
			if ( x == n || y == m) {
				section = "divisa";
			} else {
				(y > m) ? section += "N" : section += "S";
				(x > n) ? section += "E" : section +="O";
			}
			cout << section << endl;
		}

		cin >> queries;
	}
	return 0;
}