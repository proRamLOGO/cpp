#include <bits/stdc++.h>

using namespace std;

int solve(int start, int endd , vector<int>& coins , vector< vector<int> >& dp , int year) {

    if( start > endd ) return 0;
    if( dp[start][endd] != -1 ) return dp[start][endd] ;

    int incs , ince ;

    incs = coins[start]*year + solve(start+1 , endd , coins , dp , year + 1 );
    ince = coins[endd]*year + solve(start , endd - 1 , coins , dp , year + 1 );

    dp[start][endd] = max(incs,ince);

}

int main(){

    int n;
    scanf("%d",&n);
    vector<int> wines(n);
    for ( int i = 0 ; i < n ; ++i ) scanf("%d",&wines[i]);

    vector<int> temp(n,-1);
    vector< vector<int> > dp(n,temp) ;

    int x = solve(0 , n-1 , wines , dp , 1 ) ;

    printf("%d",x);

}
