#include <iostream>

using namespace std;

void uncoupledIntegerBit(int *arr, int size){
    if (!(size%2)){
        cout << "Can't have even size." << endl;
        return;
    }
    unsigned int num = 0;
    for(int i = 0; i < size; i++){
        num = num ^ arr[i];
    }
    cout << num << endl;
}

int main(int argc, const char *argv[])
{
    int arr[] = {1,2,3,4,1,2,3,4,5};
    cout << "// {1,2,3,4,1,2,3,4,5}" << endl;
    uncoupledIntegerBit(arr, 9);
    int arr2[] = {1,2,3,4,5,2,3,4,5};
    cout << "// {1,2,3,4,5,2,3,4,5}" << endl;
    uncoupledIntegerBit(arr2, 9);
    int arr3[] = {1,2,1};
    cout << "// {1,2,1}" << endl;
    uncoupledIntegerBit(arr3, 3);
    int arr4[] = {1,2};
    cout << "// {1,2}" << endl;
    uncoupledIntegerBit(arr3, 2);
}
