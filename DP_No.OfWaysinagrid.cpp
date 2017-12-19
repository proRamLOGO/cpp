#include <bits/stdc++.h>

using namespace std;

int solve(vector<vector< int > >& matrix ,vector<vector< int > >& dp , int x , int y ) {

    if( dp[x][y]!= -1 ) return dp[x][y] ;

    if( x==0 )
        return dp[x][y] = solve(matrix,dp,0,y-1) ;
    if( y==0 )
        return dp[x][y] = solve(matrix,dp,x-1,y) ;

    return dp[x][y] =  solve(matrix,dp,x-1,y) + solve(matrix,dp,x,y-1) ;

}

int main() {

    int n,m,x,y,val;
    scanf("%d%d%d%d",&n,&m,&x,&y) ;
    vector<int> dpp(m,-1) , z ;
    vector< vector<int> > matrix(n) , dp(n,dpp);

    for ( int i = 0 ; i < n ; ++i ) {
        z.clear();
        for ( int y = 0 ; y < m ; ++y ) {
            scanf("%d",&val);
            z.push_back(val);
        }
    }
    dp[0][0] = 1 ;
    int k = solve(matrix,dp,x,y);

    printf("%d",k);

}
