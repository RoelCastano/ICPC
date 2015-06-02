// This problems is for experimenting with SETS

#include <iostream>
#include <set>

using namespace std;


//Assumes the array given has odd size and only one value is uncoupled
void uncoupledInteger(int *a, int size){ // SAME AS "int a[]"
    if(!(size%2)){
        cout << "Can't use even values." << endl;
        return;
    }
    set<int> set1;
    for (int i = 0; i < size; i++){
        if(set1.find(a[i]) == set1.end()){
            set1.insert(a[i]);
        } else {
            set1.erase(a[i]);
        }
    }

    set<int>::iterator it;
    for (it = set1.begin(); it != set1.end(); ++it)
    {
        cout << *it << endl;
    }
}

int main() {
    int arr[] = {1,2,3,4,1,2,3,4,5};
    cout << "// {1,2,3,4,1,2,3,4,5}" << endl;
    uncoupledInteger(arr, 9);
    int arr2[] = {1,2,3,4,5,2,3,4,5};
    cout << "// {1,2,3,4,5,2,3,4,5}" << endl;
    uncoupledInteger(arr2, 9);
    int arr3[] = {1,2,1};
    cout << "// {1,2,1}" << endl;
    uncoupledInteger(arr3, 3);
    int arr4[] = {1,2};
    cout << "// {1,2}" << endl;
    uncoupledInteger(arr3, 2);
}
