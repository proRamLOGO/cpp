#include <bits/stdc++.h>
using namespace std;

int step(int arr[], int N)
{
    int lis[N];

    for (int i = 0; i < N; i++)
        lis[i] = 1;

    for (int i = 1; i < N; i++)
        for (int j = 0; j < i; j++)
            if (arr[i] >= arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;

    int maxi = 0;
    for (int i = 0; i < N; i++)
        if (maxi < lis[i])
            maxi = lis[i];

    return (N - maxi);
}

int main()
{
    int num;
    cin>>num;
    int arr[num];

    for (int i = 0 ; i < num; ++i) cin>>arr[i];

    int N = num;
    cout << step(arr, N);
    return 0;
}

