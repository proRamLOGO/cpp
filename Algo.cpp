#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> myvector ;
    for(int i = 0 ; i < 30 ; i+=3 ) myvector.push_back(i);
    rotate(myvector.begin(),myvector.begin()+5,myvector.end() );
    for ( auto x : myvector ) cout << x << " " ;


}
