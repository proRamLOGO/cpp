/*
Question Link : https://www.codechef.com/problems/NOTINCOM

Solution by:
Shubh Bansal
shubhbansal.xyz
*/


#include <bits/stdc++.h>

using namespace std;

int main() {

    int t ;
    cin >> t;

    while ( t-- ) {

        int n,m,counter=0;
        cin >> n >> m;
        vector<int> al(n),be(m);
        for ( int i = 0 ; i < n ; ++i ) cin >> al[i] ;
        sort(al.begin(),al.end());
        for ( int i = 0 ; i < m ; ++i ){
            cin >> be[i];
            if(binary_search(al.begin(),al.end(),be[i])) counter++;
        }

        cout << counter << endl;

    }
}
