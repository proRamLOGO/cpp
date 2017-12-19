#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n ;
    cin >> n ;
    vector< int > v(n) ;
    for ( int i = 0 ; i < n ; ++i ) cin >> v[i] ;

    int steps = 0 , counter = 0;

    while ( 1 ) {
        int i = 1;
        for ( i = 1 ; i < n ; ++i ) {
            if( v[i-1] > v[i]) {
                cout << "v[i] = " << v[i] << "\nv[i-1] = " << v[i-1] << endl;
                steps++;
                sort(v.begin(),v.begin()+i);
                continue;
            }
            cout << endl;
        }
        if( i == n) break;
    }

    cout << steps ;

}
