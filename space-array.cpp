#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int i, n, moves = 0, flag = 0;
        cin>>n;
        vector<int> v(n);

        for (i = 0; i < n;i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        for (i = 0; i < n; i++) // to check if initially the array is valid
        {
            if(v[i]>i+1)
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            for (i = 0; i < n;i++) // counting no of moves required to finish the game
            {
                if(i+1>=v[i])
                {
                    moves += i + 1 - v[i];
                }
                else
                {
                    break;
                }
            }
        }
        if(moves%2!=0 && flag==0)
            cout << "First\n";
        else
            cout << "Second\n";
    }
}