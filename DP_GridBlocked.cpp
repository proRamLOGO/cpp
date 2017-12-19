#include <bits/stdc++.h>

using namespace std;

int solve(vector< vector<int> >& matrix, vector< vector<int> >& dp, int x1, int y1, int x2, int y2) {

    if(dp[x2][y2] != -1 ) return dp[x2][y2];
    if( x2==x1 ) return dp[x2][y2] = solve(matrix,dp,x1,y1,x2,y2-1) ;
    if( y2==y1 ) return dp[x2][y2] = solve(matrix,dp,x1,y1,x2-1,y2) ;
    return dp[x2][y2] = solve(matrix,dp,x1,y1,x2-1,y2) + solve(matrix,dp,x1,y1,x2,y2-1);

}

int main() {

    int n, m, x1, y1, x2, y2, val;
    scanf("%d%d%d%d%d%d",&n,&m,&x1,&y1,&x2,&y2);
    vector<int> v,dpp(m,-1);
    vector< vector<int> > matrix(n),dp(n,dpp);

    for ( int i = 0 ; i < n ; ++i ) {
        v.clear();
        for ( int y = 0 ; y < m ; ++y ) {
            scanf("%d",&val);
            v.push_back(val);
        }
        matrix[i] = v;
    }
    dp[x1][y1] = 1;
    int x = solve(matrix,dp,x1,y1,x2,y2) ;

    printf("%d",x);

}
