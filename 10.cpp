#include<bits/stdc++.h>

using namespace std;

bool cmp(const pair<string, long> &p1, const pair<string, long> &p2)
{
    if(p1.second!=p2.second)
        return p1.second < p2.second;
    return p1.first > p2.first;
}

int main()
{

    int n ; cin >> n;
    vector< pair <string,int> > vect(n);
    int x ; string s;

    for (int i=0; i<n; i++){
        cin >> s >> x;
        vect[i] = make_pair(s,x) ;
    }

    sort(vect.begin(), vect.end(), cmp);

    for (int i=n-1; i>=0; i--)
    {
        cout << vect[i].first << " " << vect[i].second << endl;
    }

    return 0;
}
