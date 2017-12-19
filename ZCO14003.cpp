#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    scanf("%d",&n);
    long long int v[n];

    for ( int i = 0 ; i < n ; ++i ) scanf("%lld",&v[i]);

    sort(v,v+n);

    long long int x = v[0] * n ;

    for ( int i = 1 ; i < n ; ++i ) {
        if( v[i]*(n-i) > x ) x = v[i]*(n-i) ;
    }

    cout << x;


}
