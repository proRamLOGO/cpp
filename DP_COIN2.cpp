#include <bits/stdc++.h>
using namespace std;

int main(){

    int n , x ;
    scanf("%d%d",&n,&x) ;
    vector<int> coins(n) , ans(x+1) ;
    for ( int i = 0 ; i <n ; ++i ) scanf("%d",&coins[i]) ;
    ans[0] = 0;

    for ( int i = 1 ; i <= x ; ++i ) {
        ans[i] = INT_MAX ;
        for ( auto c : coins ) {
            if(i-c >= 0){
                ans[i] = min(ans[i],1 + ans[i-c]) ;
            }
        }
    }

    printf("%d",ans[x]) ;


}
