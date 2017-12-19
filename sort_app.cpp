#include <bits/stdc++.h>

using namespace std;

struct student{

    string name;
    int roll,stnd,ph,ch,comp;
    float avg;

};

bool cmp( student x , student y ) {
    ///if( x.avg == y.avg )
        ///return x.ph > y.ph ;
    return x.name > y.name ;
}

int main() {

    int n;
    cin >> n;
    vector< student > s(n);

    for ( int i = 0 ; i < n ; ++i ){
        cin >> s[i].name  ;
        s[i].avg = ( s[i].ph + s[i].ch + s[i].comp ) / 3.0 ;
    }

    sort( s.begin() , s.end() , cmp ) ;


    for ( int i = 0 ; i < n ; ++i )
        cout << s[i].name << endl ;

    return 0;

}
