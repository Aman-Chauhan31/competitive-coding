#include <bits/stdc++.h> 
using namespace std; 

void alternateSort(int arr[], int n) 
{ 
  
    sort(arr, arr+n); 

    int i = 0, j = n-1; 
    while (i < j) { 
        cout << arr[j--] << " "; 
        cout << arr[i++] << " "; 
    } 

    if (n % 2 != 0) 
        cout << arr[i]; 
} 

int main() 
{ 
    int arr[] = {3, 6, 9, 11, 3, 16}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    alternateSort(arr, n); 
    return 0; 
} 
