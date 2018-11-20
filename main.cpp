#include <iostream>
#include "prototype.h"

using namespace std;


int main()
{

int *revArr = reverseArray(arr, SIZE);
cout << &revArr<<endl;
int *expArr = expandArray(arr, SIZE);
cout << &expArr << endl;
int *shiftArr = shiftArray(arr, SIZE);
cout << &shiftArr << endl;

delete[] revArr;
delete[] expArr;
delete[] shiftArr;
}

