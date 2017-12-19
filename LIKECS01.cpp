/*
Question Link : https://www.codechef.com/problems/LKECS01

Solution by:
Shubh Bansal
shubhbansal.xyz
*/


#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t ;
    cin >> t;

    while ( t-- )
    {

        string s;
        cin >> s;
        bool f = false;
        vector<int> alpha(26,0);

        for ( int i = 0 ; i < s.size() ; ++i )
        {
            if (s[i]=='a')
            {
                alpha[0]++ ;
                if(alpha[0]>1) f = true ;
            }
            else if (s[i]=='b')
            {
                alpha[1]++ ;
                if(alpha[1]>1) f = true ;
            }
            else if (s[i]=='c')
            {
                alpha[2]++ ;
                if(alpha[2]>1) f = true ;
            }
            else if (s[i]=='d')
            {
                alpha[3]++ ;
                if(alpha[3]>1) f = true ;
            }
            else if (s[i]=='e')
            {
                alpha[4]++ ;
                if(alpha[4]>1) f = true ;
            }
            else if (s[i]=='f')
            {
                alpha[5]++ ;
                if(alpha[5]>1) f = true ;
            }
            else if (s[i]=='g')
            {
                alpha[6]++ ;
                if(alpha[6]>1) f = true ;
            }
            else if (s[i]=='h')
            {
                alpha[7]++ ;
                if(alpha[7]>1) f = true ;
            }
            else if (s[i]=='i')
            {
                alpha[8]++ ;
                if(alpha[8]>1) f = true ;
            }
            else if (s[i]=='j')
            {
                alpha[9]++ ;
                if(alpha[9]>1) f = true ;
            }
            else if (s[i]=='k')
            {
                alpha[10]++ ;
                if(alpha[10]>1) f = true ;
            }
            else if (s[i]=='l')
            {
                alpha[11]++ ;
                if(alpha[11]>1) f = true ;
            }
            else if (s[i]=='m')
            {
                alpha[12]++ ;
                if(alpha[12]>1) f = true ;
            }
            else if (s[i]=='n')
            {
                alpha[13]++ ;
                if(alpha[13]>1) f = true ;
            }
            else if (s[i]=='o')
            {
                alpha[14]++ ;
                if(alpha[14]>1) f = true ;
            }
            else if (s[i]=='p')
            {
                alpha[15]++ ;
                if(alpha[15]>1) f = true ;
            }
            else if (s[i]=='q')
            {
                alpha[16]++ ;
                if(alpha[16]>1) f = true ;
            }
            else if (s[i]=='r')
            {
                alpha[17]++ ;
                if(alpha[17]>1) f = true ;
            }
            else if (s[i]=='s')
            {
                alpha[18]++ ;
                if(alpha[18]>1) f = true ;
            }
            else if (s[i]=='t')
            {
                alpha[19]++ ;
                if(alpha[19]>1) f = true ;
            }
            else if (s[i]=='u')
            {
                alpha[20]++ ;
                if(alpha[20]>1) f = true ;
            }
            else if (s[i]=='v')
            {
                alpha[21]++ ;
                if(alpha[21]>1) f = true ;
            }
            else if (s[i]=='w')
            {
                alpha[22]++ ;
                if(alpha[22]>1) f = true ;
            }
            else if (s[i]=='x')
            {
                alpha[23]++ ;
                if(alpha[23]>1) f = true ;
            }
            else if (s[i]=='y')
            {
                alpha[24]++ ;
                if(alpha[24]>1) f = true ;
            }
            else if (s[i]=='z')
            {
                alpha[25]++ ;
                if(alpha[25]>1) f = true ;
            }
            if( f ) break;

        }
        if ( f )
        {
            cout << "yes\n";
            continue ;
        }
        cout << "no\n" ;



    }
}
