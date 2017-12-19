#include <iostream>

using namespace std;

int gcd(int x, int y) {

    if( !x && y ) return y;
    if( x && !y ) return x;
    return gcd(y,x%y);

}

int main() {

    int n,m;
    cin >> n >> m ;
    cout << gcd(n,m);

}
