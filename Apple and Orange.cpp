/*
Problem Link : https://www.hackerrank.com/challenges/apple-and-orange/problem

Solution BY :
Shubh Bansal
shubhbansal.xyz
*/

#include <iostream>

using namespace std;

int main() {

    int s,t,a,b,m,n;
    cin >> s >> t >> a >> b >> m >> n ;
    int app[m],org[n];
    int A=0,O=0;
    for( int i = 0 ; i < m ; ++i ) {
        cin >> app[i];
        if ( app[i]>=0 && s <= (app[i]+a) && (app[i]+a) <= t)  A++;
    }
    for( int i = 0 ; i < n ; ++i ) {
        cin >> org[i];
        if ( org[i]<=0 && s <= (org[i]+b) && (org[i]+b) <= t ) O++;
    }
    cout << A << endl << O ;


}