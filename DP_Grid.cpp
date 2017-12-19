#include <bits/stdc++.h>

using namespace std;

int solve(vector< vector < int > > &matrix , int x , int y , vector< vector<int> > &dp ){

    if( dp[x][y]!=-1 )
        return dp[x][y] ;
    if(x==0 && y==0)
        return matrix[0][0] ;
    if( x==0 )
        return solve(matrix,0,y-1,dp) + matrix[x][y] ;
    if( y==0 )
        return solve(matrix,x-1,0,dp) + matrix[x][y] ;

    return dp[x][y] = min(solve(matrix,x,y-1,dp), solve(matrix,x-1,y,dp)) + matrix[x][y] ;

}

int main(){

    int n,s,e;
    scanf("%d%d%d",&n,&s,&e);
    vector<int> v,dpp(n,-1);
    vector< vector< int > > matrix(n) , dp(n,dpp);

    for ( int i = 0 ; i < n ; ++i ) {
        for ( int y = 0 ; y < n ; ++y ) {
            int x;
            scanf("%d",&x);
            v.push_back(x);
        }
        matrix[i] = v;
        v.clear();
    }
    dp[0][0] = matrix[0][0] ;

    int x = solve(matrix,s,e,dp);


    printf("\n%d",x) ;

}
