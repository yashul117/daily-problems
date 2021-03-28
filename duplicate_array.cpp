/********************Problem Statement***********************/
/* Given an array consisting of numbers ranging from 0 to n-1 of size n find the duplicate no from the array(Given only one no is duplicate) */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }

    int slow = a[0], fast = a[0]; // Using 2 pointer method
    do  
    {
        slow = a[slow]; 
        fast = a[a[fast]]; // fast will move at 2x speed
    } while (slow!=fast); // fast will have covered wx distance as compared to slow when they first meet
    fast = a[0];

    // Now the next time slow and fast meet they will be at the no which is duplicate
    while(slow!=fast) {
        slow = a[slow];
        fast = a[fast];
    }
    cout << slow;
}