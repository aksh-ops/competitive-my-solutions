//CodeChef
//Beginner Practice Problem
//Chef and Coloring [COLOR]

#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t=0;
cin>>t;

while(t--)
    {
    long long n=0,r=0,g=0,b=0;
    cin>>n;

    string s="";
    cin>>s;

    for(long long i=0;i<n;i++)
        {
        if(s[i]=='R') {r++;}
        else if(s[i]=='G') {g++;}
        else {b++;}
        }
    cout<<n-max(r,(max(g,b)))<<"\n";
    }
return 0;
}
