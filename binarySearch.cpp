#include <bits/stdc++.h>
using namespace std; //masarap aq
// pinaka masarap na nilalang si Brylle
// An iterative binary search function
int binarySearch(int arr[], int low, int high, int x) //edit ni cheenee
{
    while (low <= high) { //0(log n) * 6 = 0(log 6n)
        int mid = low + (high - low) / 2; //0(1)

        if (arr[mid] == x) //0(1)
            return mid; //0(1)

        if (arr[mid] < x) //0(1)
            low = mid + 1; //0(1)

        else 
            high = mid - 1; //0(1)
    }

    return -1; //0(1)
}
// = 0(log 6n) + 1

int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 }; //0(1)
    int x = 10; //0(1)
    int n = sizeof(arr) / sizeof(arr[0]); //0(1)
    int result = binarySearch(arr, 0, n - 1, x); //0(1)
    if(result == -1) cout << "Element is not present in array"; //0(1)
    else cout << "Element is present at index " << result; //0(1)
    return 0; //0(1)
}
// = 7

//fn = 0(log 6) + 1 + 7 = 0(log 6)+8 ==> 0(log n)

//edit kau pls
