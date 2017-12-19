#include <iostream>
#include <vector>

using namespace std;

bool palindrome(int a)
{
    long long reverse_num = 0;
    long long temp = a;
    while(temp != 0)
    {
        reverse_num = reverse_num * 10;
        reverse_num += temp % 10;
        temp /= 10;
    }
    if(a == reverse_num)
       return true;
    else
       return false;
}

int main() {

	vector<int> seive(1000000,1) ;

	for( int i = 2 ; i <= 1000000 ; ++i ) {
        if( seive[i] ) {
            for ( int y = i*2 ; y <= 1000000 ; y+=i ) seive[y] = 0 ;
        }
	}
	seive[0] = 0 ; seive[1] = 0 ;

	int n;
	cin >> n ;

	for ( int i = n ; i < 1000000 ; ++i ) {
		if( palindrome(i) && seive[i] ) {cout << i ; break;}
	}

}
