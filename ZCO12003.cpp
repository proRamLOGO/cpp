#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    scanf("%d",&n);
    vector<int> v(n);
    for ( int i = 0 ; i < n ; ++i ) scanf("%d",&v[i]) ;

    stack<int> br , ind;
    int md1=0,md2=0;
    int ans=0;
    bool onp;

    if(v[0]==1 || v[0]==2) onp=true;
    else onp = false;

    for ( int i = 0 ; i < n ; ++i ) {

        if( onp && (v[i]!=1 && v[i]!=2) ) {
            ans++;
            onp = false;
        }
        else if( !onp && (v[i]!=4 && v[i]!=3) ){
            ans++;
            onp = true;
        }

        if( v[i]==1 || v[i]==3 ) {
            br.push(v[i]);
            ind.push(i);
        }
        else if ( v[i] == 2 ) {
            md1 = max(md1,i-ind.top()+1);
            ind.pop();
            br.pop();
        }
        else{
            md2 = max(md2,i-ind.top()+1);
            ind.pop();
            br.pop();
        }

    }

    printf("%d %d %d",ans,md1,md2);

}
