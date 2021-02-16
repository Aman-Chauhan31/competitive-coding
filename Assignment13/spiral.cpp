#include <iostream>
using namespace std;
#define RW 4
#define CL 4
void print(int arr[RW][CL], int i, int j, int a, int b)
{
    if (i >= a or j >= b)
        return;
 
    for (int p = j; p < b; p++)
        cout << arr[i][p] << " ";
 
    for (int p = i + 1; p < a; p++)
        cout << arr[p][b - 1] << " ";
 
    if ((a - 1) != i)
        for (int p = b - 2; p >= j; p--)
            cout << arr[a - 1][p] << " ";
 
    if ((b - 1) != j)
        for (int p = a - 2; p > i; p--)
            cout << arr[p][j] << " ";
 
    print(arr, i + 1, j + 1, a - 1, b - 1);
}

int main()
{
 
    int a[RW][CL] = { { 101, 102, 103, 104 },
                    { 105, 106, 107, 108 },
                    { 109, 110, 111, 112 },
                    { 113, 114, 115, 116 } };

    print(a, 0, 0, RW, CL);
    return 0;
}

