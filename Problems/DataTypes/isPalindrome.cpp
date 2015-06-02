#include <iostream>

using namespace std;

bool isPalindrome(string original){
    int first = 0, last = original.length()-1;
    for(; first < (original.length()/2); first++, last--){
        if(original[first] != original[last]) return false;
    }
    return true;
}

int main(){
	string str = "strrts";

	if (isPalindrome(str))
	{
		cout << "isPalindrome";
	} else {
		cout << "not isPalindrome";
	}

	return 0;
}