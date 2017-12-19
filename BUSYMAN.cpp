/*
Question Link : http://www.spoj.com/problems/BUSYMAN/

Solution by:
Shubh Bansal
shubhbansal.xyz
*/

#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> f , pair<int,int> s){
    if( f.second == s.second ) return f.first < s.first ;
    return f.second < s.second ;
}

int main(){

    int t;
    scanf("%d",&t);

    while ( t-- ) {

        int n;
        scanf("%d",&n);
        vector< pair < int , int > > times(n);
        for ( int i = 0 ; i < n ; ++i ) {
            int s , e ;
            scanf("%d%d",&s,&e);
            times[i] = make_pair(s,e);
        }

        sort(times.begin(),times.end(),cmp);
        int ans = 1;
        pair< int , int > x = times[0];

        for ( int i = 1 ; i < n ; ++i ) {
            if(times[i].first >= x.second ){
                ans++;
                x = times[i];
            }
        }

        printf("%d",ans);

    }


}
