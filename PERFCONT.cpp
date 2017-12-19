/*
Question Link : https://www.codechef.com/problems/PERFCONT

Solution by:
Shubh Bansal
shubhbansal.xyz
*/


#include <iostream>
#include <cstdio>

using namespace std;

int main() {

	int t;
	cin >> t;
	while ( t-- ) {

		int n, p;
		cin >> n >> p;
		int arr[n];

		int c=0,h=0;

		for ( int i = 0 ; i < n ; ++i ){

			cin >> arr[i] ;
			if (arr[i] >= p/2) c+=1 ;
			else if (arr[i] <= p/10) h+=1 ;

		}

		(c==1 && h==2)? cout << "yes\n": cout << "no" << endl;



	}

}
