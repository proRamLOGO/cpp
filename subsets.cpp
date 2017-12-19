#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    scanf("%d",&n);

    vector <int> arr(n);
    vector < vector < int > > subsets;
    sort(arr.begin(),arr.end());
    for ( int i = 0 ; i < n ; ++i ) scanf("%d",&arr[i]);

    for ( int i = 0 ; i < (1<<n) ; ++i ) {
        vector< int > subset;
        for ( int y = 0 ; y < n ; ++y ) {
            if( i&(1<<arr[y]) ) { subset.push_back(arr[y]); cout << arr[y] << " " ; }
        }
        subsets.push_back(subset);
    }

    for ( int i = 0 ; i < subsets.size() ; ++i ){
        for ( int y = 0 ; y < subsets[i].size() ; ++i ) {

            printf("%d ",subsets[i][y]);

        }
        printf("\n");
    }
}
