#include <bits/stdc++.h>

using namespace std;
/*
-----TOP DOWN-----------
int solve( int x , vector<int>& dp) {

    if( x<=1 ) return 0;
    if ( dp[x] != -1 ) return dp[x] ;

    int p1 = INT_MAX ,p2 = INT_MAX ,p3 = INT_MAX ;
    if (x%2==0) p2 = 1 + solve(x/2,dp) ;
    if (x%3==0) p3 = 1 + solve(x/3,dp) ;
    if (x-1>=1) p1 = 1 + solve(x-1,dp) ;

    dp[x] = min(p1,min(p2,p3));

    return dp[x] ;

}*/

int main(){

    int n;
    scanf("%d",&n);
    vector<int> dp(n+1);
    dp[0] = 0 ; dp[1] = 0 ;

    for ( int i = 2 ; i <= n ; ++i ) {
        dp[i] = 1 + dp[i-1];
        if(!(i%2)) dp[i] = min(dp[i],1 + dp[i/2]);
        if(!(i%3)) dp[i] = min(dp[i],1 + dp[i/3]);
    }

    printf("%d",dp[n]);

}
