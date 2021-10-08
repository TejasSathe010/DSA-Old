#include <iostream>
#include <set>
using namespace std;

int main()
{

    // Time Complexity - Avg case O(logn) Worst case O(n)
    // There are better solutions Randomized version of quickselet and
    // Worst case linear time algorithm.
    
    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    set<int> s(arr, arr + n);

    set<int>::iterator itr = s.begin(); 
    advance(itr, k - 1); 

    cout << *itr << "\n";

    return 0;
}