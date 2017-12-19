/*
Question Link : http://www.spoj.com/problems/MST1/

Solution by:
Shubh Bansal
shubhbansal.xyz
*/

#include <iostream>
#include <vector>

using namespace std;

int calc(int x){

    return x;

}

int main() {

    int n;
    cin >> n;
    vector< int > dp(n,-1);
    cout << 1 + min(calc(n-1),min(calc(n/2),calc(n/3)));

}























/*
int calc( int n ) {

    if(n<=1) return 0;
    int x = min(1+calc(n/2),1+calc(n/3));
    return min(x+1,1+calc(n-1));

}

int main() {

    int n,t;
    cin >> t;
    while ( t-- ){
        cin >> n;
        cout << calc(n) << endl;
    }
}
*/
