/*
Question Link : https://www.codechef.com/COFI1601/problems/CF221

Solution by:
Shubh Bansal
shubhbansal.xyz
*/

#include<iostream>
#include<algorithm>

using namespace std;
int main()
{

int nod,nos,x,y;

cin>>x>>y>>nos;

for(nod = 0 ; nos>0 ; nod++ )
{
nos = nos - (x-y);
}
cout<<nod;

return 0;
}
