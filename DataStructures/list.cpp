#include <iostream>
using namespace std;

struct Node
{
	int value;
	Node *next;
};



int factorial(int n){
	if (n > 1)
		return n * factorial(n-1);
	else 
		return 1;
}

void duplicate(int& a){
	a = a * 2;
}

int main() {
	int a = 10;

	duplicate(a);

	int fact = factorial(-1);
	printf("%i\n", fact);

	return 0;
}