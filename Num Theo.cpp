#include <iostream>

using namespace std;

int main() {

    /// Code1
    /*
    int n1=2,n2=2;

    for( int i = 1 ; i < 10105 ; ++i ) {
        n1 = ((2%10000) * (n1%10000)) % 10000 ;
    }
    for( int i = 1 ; i < 123456 ; ++i ) {
        n2 = ((2%10000) * (n2%10000)) % 10000 ;
    }

    cout << (n1 + n2) % 10000 ;
    */

    ///COde 2
    int n,num=1;
    cin >> n;
    for ( int i = 1 ; i < n ; ++i ){
        num = ((num%n) * (i%n))%n ;
    }
    cout << num;

}
