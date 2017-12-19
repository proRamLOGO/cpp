/*
Question Link : https://www.codechef.com/problems/C00K0FF

Solution by:
Shubh Bansal
shubhbansal.xyz
*/


#include <bits/stdc++.h>

using namespace std;

int main() {

	int t;
	cin >> t;
	while ( t-- ) {

		int n;
		cin >> n ;
		string arr[n];

		bool c=0,s=0,e=0,em=0,mh=0;

		for ( int i = 0 ; i < n ; ++i ){

			cin >> arr[i] ;

            if ( arr[i] == "cakewalk" ) c = 1;
            else if ( arr[i] == "simple" ) s = 1;
            else if ( arr[i] == "easy" ) e = 1;
            else if ( arr[i] == "medium" ) em = 1;
            else if ( arr[i] == "hard" ) mh = 1;
            else if ( arr[i] == "easy-medium" ) em = 1;
            else if ( arr[i] == "medium-hard" ) mh = 1;

		}

        if ( c && s && e && em && mh ) cout << "Yes\n";
        else cout << "No\n" ;

	}

}
