#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    scanf("%d",&n);
    long int k , arr[n];
    scanf("%ld",&k);

    for ( int i = 0 ; i < n ; ++i ) scanf("%d",&arr[i]);

    sort(arr,arr+n);

    int sum = 0;

    for ( int i = 0 ; i < n ; ++i ) {

        for ( int y = 0 ; y < n ; ++y ) {

            if( abs(arr[i] - arr[y]) >= k ) sum++;

        }

    }

    cout << sum;

}
