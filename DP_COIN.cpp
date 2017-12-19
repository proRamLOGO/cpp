#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,x;
    scanf("%d%d",&n,&x);
    vector<int> coins(n), dp(x,10000) ;
    //vector< map< int , vector<int> > > ans(x);
    for ( int i = 0 ; i < n ; ++i ) scanf("%d",&coins[i]);
    dp[0] = 0;
    for ( int i = 1 ; i <= x ; ++i ) {
        cout << "\nRs. " << i << " = ";
        for ( auto c : coins ) {
            if( i-c >= 0 ) {
                dp[i] = min( dp[i] , dp[i-c]+1 );
                cout << c << " ,";
            }
        }

    }*/

    for ( auto i : dp ) cout << i <<  " " ;

    cout << endl << endl << dp[x] << endl;
    //for ( auto i : ans[x].second ) printf("%d ",i) ;

}

