#include <iostream>
#include <string>

using namespace std;

int calc( string s ) {

    if( s.empty() ) return 0;

    ///------------------------
    string s1(s.begin()+1,s.end());
    if( s[0] == 'C' ) {
        return 12 + calc( s1 );
    }
    if( s[0] == 'H' ) {
        return 1 + calc( s1 );
    }
    if( s[0] == 'O' ) {
        return 16 + calc( s1 );
    }

}

int main() {

    string s;
    cin >> s;

    ///int x = calc(s);

    cout << calc(s);

}
