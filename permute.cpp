#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    scanf("%d",&n);

    vector<int> permute(n);

    for ( int i = 0 ; i < n ; ++i ) cin >> permute[i];

    sort(permute.begin(),permute.end());

    do{
        for( int i = 0 ; i < n ; ++i ) cout << permute[i] << " ";
        cout << endl;
    }
    while(next_permutation(permute.begin(),permute.end()));


}
