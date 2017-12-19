#include <bits/stdc++.h>>
using namespace std;

bool cmp(pair<int,int> f, pair<int,int> s){
    if(f.first == s.first) return f.second < s.second ;
    return f.first < s.first ;

}

int main(){

    int n,a,b;
    scanf("%d",&n);
    vector< pair< int , int > > points(n+2);
    points[0] = make_pair(0,500);
    points[n+1] = make_pair(100000,500);
    for ( int i = 1 ; i < n+1 ; ++i ){
        scanf("%d%d",&a,&b);
        points[i] = make_pair(a,b);
    }
    sort(points.begin()+1,points.end()-1,cmp);

    long int pro=1 , val;

    for ( int i = 0 ; i < n+1 ; ++i ){
        printf("\n\n\nx1 = %d y1 = %d\nx2 = %d y2 = %d\nMultiplying x2 and y1\n",points[i].first,points[i].second,points[1+i].first,points[i+1].second);
        printf("\npro was %ld",pro);
        val = points[i].second * points[i+1].first ;
        printf ("\nVal = %ld",val);
        if( val > pro ){ pro = val ; printf(" and Now val is %ld\n\n",val); }
    }

    printf("%ld",pro) ;


}
