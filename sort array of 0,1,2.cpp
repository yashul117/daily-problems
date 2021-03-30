#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort(int a[], int n) //Using 3 pointers(Dutch national flag algo)
{
    int low, mid, high;
    low = mid = 0;
    high = n - 1;

    while(mid<=high) //every element from 0 to low-1 would be '0', from high+1 to n-1 would be '2' and rest would be '1'
    {
        switch(a[mid])
        {
            case 0: {
                swap(a[low], a[mid]);
                low++;
                break;
            }
            case 1: {
                mid++;
                break;
            }
            case 2: {
                swap(a[mid], a[high]);
                high--;
            }
        }
    }
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, n);
    display(a, n);
}