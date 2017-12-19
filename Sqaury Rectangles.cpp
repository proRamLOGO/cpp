/*
Contest Link : https://www.hackerrank.com/contests/coe-10-programming-prelims/challenges
Question Link : https://www.hackerrank.com/contests/coe-10-programming-prelims/challenges/squary-rectangles

Solution by:
Shubh Bansal
shubhbansal.xyz
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b;
    cin >> a >> b;
    int ans=1;
    int m = (a > b) ? b : a;
    for ( int i=2 ; i<=m ; ++i ){
        if(a%i==0 && b%i==0 )      ans++;
    }
    cout << ans;
    return 0;
}