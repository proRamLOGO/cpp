#include <bits/stdc++.h>

using namespace std;

int main(){

    int n , x ;
    scanf("%d%d",&n,&x);
    vector<int> coins(n),sol(x+1,0);

    for ( int i = 0 ; i < n ; ++i ) scanf("%d",&coins[i]) ;

    sol[0] = 1;
    for ( int i = 1 ; i <= x ; ++i ){
        for ( auto c : coins ) {
            if( i-c >= 0) sol[i] += sol[i-c] ;
        }
    }

    printf("%d",sol[x]);


}
