#include <iostream>
using namespace std;


int *reverseArray(int *arr, const int SIZE)
{
//int revArr[SIZE];
int *revArr = nullptr;
revArr = new int[SIZE];


int count = SIZE;
int countRev = 0;

    for (int j = count - 1; j >= 0; j--)
            {
                revArr[countRev] = arr[j];
                countRev++;
            }


return revArr;
}

int *expandArray(int *arr, const int SIZE)
{
const int NEWSIZE = SIZE * 2;
int *expArr = nullptr;
expArr = new int[NEWSIZE];



    for (int count = 0; count < SIZE; count ++)
        {
            expArr[count] = arr[count];
        }

    for (int count = SIZE; count < NEWSIZE; count ++)
        {
            expArr[count] = 0;
        }


return expArr;
}

int *shiftArray(int *arr, const int SIZE)
{
const int NEWSIZE = SIZE + 1;
int *shiftArr = nullptr;
shiftArr = new int[NEWSIZE];


shiftArr[0] = 0;


    for (int count = 0; count < SIZE; count ++)
        {
            shiftArr[count + 1] = arr[count];
        }



return shiftArr;
}
