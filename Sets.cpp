#include <bits/stdc++.h>

using namespace std;

int main() {

    int arr[] = {1,3,2,5,4,1,3,2,1} ;
    set<int> s1(arr,arr+9);
    multiset<int>  s2(arr,arr+9);

    for(auto x : s1) cout << x << " " ;
    cout << "\n\n" ;
    for(auto x : s2) cout << x << " " ;

}
