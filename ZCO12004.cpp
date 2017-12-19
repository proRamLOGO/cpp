#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    long int n;
    scanf("%ld",&n);
    int arr[n];
    long int cost = 0;
    for ( auto i = 0 ; i < n ; ++i ) scanf("%d",&arr[i]); ;
    for ( auto i = 0 ; i < n-1 ; i+=2 ){
        cost += (arr[i] > arr[i+1] ) ? arr[i+1] : arr[i] ;
    }
    if(n%2!=0) cost+=arr[n-1];
    printf("%ld",cost);

}
