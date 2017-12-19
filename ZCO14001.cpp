#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    long int h;

    scanf("%d%ld",&n,&h);

    int boxes[n] , val;
    vector<int> cmds;

    for( int i = 0 ; i < n ; ++i ) scanf("%d",&boxes[i]);

    scanf("%d",&val);
    while( va   l ){
        cmds.push_back(val);
        scanf("%d",&val);
    }

    int pos = 0 , hol = 0 ;
    for ( int i = 0 ; i < cmds.size() ; ++i ) {

        if( cmds[i] == 1 && n-1 >= pos && pos > 0 ) pos--;

        else if( cmds[i] == 2 &&  0 <= pos && pos < n-1  ) pos++;

        else if( cmds[i] == 3 && boxes[pos] > 0 ) boxes[pos]--;

        else if( cmds[i] == 4 && boxes[pos] < h ) boxes[pos]++;

    }

    for ( int i = 0 ; i < n ; ++i ) printf( "%d ", boxes[i]) ;


}
