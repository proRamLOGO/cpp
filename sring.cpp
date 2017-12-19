#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;

    int v=0;
    for ( auto x : s ) {

        if ( x == 'A' ) ++v ;
        else if ( x == 'E' ) ++v ;
        else if ( x == 'I' ) ++v ;
        else if ( x == 'O' ) ++v ;
        else if ( x == 'U' ) ++v ;

    }

    cout << v;

}
