#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    scanf("%d",&n);

    vector <int> arr(n);
    vector < vector < int > > subsets;
    sort(arr.begin(),arr.end());
    for ( int i = 0 ; i < n ; ++i ) scanf("%d",&arr[i]);

    int diff=0;

    for ( int i = 0 ; i < (1<<n) ; ++i ) {
        vector< int > subset;
        for ( int y = 0 ; y < n ; ++y ) {
            if( i&(1<<y) ) subset.push_back(arr[y]);
        }
        subsets.push_back(subset);
        cout << endl;
    }
    cout << "\n\n----------------------------------------\n\n";
    int ans = 0;
    bool found ;
    for ( int i = 1 ; i < subsets.size() ; ++i ){
        if( subsets[i].size() > 1 ){
        diff = subsets[i][1] - subsets[i][0] ;
        found = true;
        cout << "Sunset No. " << i <<endl ;
        for ( int y = 1 ; y < subsets[i].size() ; ++y ) {
            cout << subsets[i][y] << " ";
            if( subsets[i][y] - subsets[i][y-1] != diff ){
                cout << "\nBlackShip";
                bool found = false;
                break;
            }
        }
        int x = subsets[i].size() ;
        if( found ){
            cout << "\nSubset consistent";
            ans = max(ans, x) ;
            cout << "\nnew ans is " << ans;
        }
        }
        cout << endl;
    }

    printf("%d",ans);
}
