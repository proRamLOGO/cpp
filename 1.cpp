#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;
    int x,y;
    cin >> x >> y ;
    vector< int > a(n),b(n);
    for ( int i = 0 ; i < n ; ++i ) cin >> a[i] ;
    for ( int i = 0 ; i < n ; ++i ) cin >> b[i] ;

    if( x%10 == 0 ) {
        for ( int i = 0 ; i < n/4 ; ++i ) a[i]*=2;
    }
    if( x%8 == 0 ) {
        for ( int i = 0 ; i < n/4 ; ++i ) a[i]/=2;
    }

    if( y%4 == 0 ) {
        for ( int i = 0 ; i < n/3 ; ++i ) b[i]*=3;
    }
    if( x%10 == 0 ) {
        for ( int i = 0 ; i < n ; ++i ) a[i]*=0.2;
    }

    int sx = 0 , sy = 0;

    for ( auto i : a ) sx += i ;
    for ( auto i : b ) sy += i ;

    if( sx > sy ) cout << "Xavier\n";
    else cout << "Magneto\n" ;

}
