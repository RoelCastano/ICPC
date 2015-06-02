#include <iostream>

using namespace std;


int main () {
	string orig = "111";
	int newNum = stoi(orig);

	cout << to_string(newNum+1);


	return 0;
}