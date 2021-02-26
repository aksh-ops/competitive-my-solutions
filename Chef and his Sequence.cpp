//CodeChef
//Beginner Practice Problem
//Chef and his Sequence [CHEFSQ]

#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

unsigned long long t=0;
cin>>t;

while(t--)
    {
    unsigned long long ln=0,lf=0,c=0,tf=0;
    long long n[500],f[500];

    cin>>ln;
    for(unsigned long long i=0;i<ln;i++) {cin>>n[i];}
    cin>>lf;
    for(unsigned long long i=0;i<lf;i++) {cin>>f[i];}

    for(unsigned long long i=0;i<lf;i++)
        {
        for(unsigned long long j=0;j<ln;j++)
            {
            if(n[j]==f[i]) {c++; break;}
            }
        }
    if(c==lf) {cout<<"Yes\n";}
    else {cout<<"No\n";}
    }
return 0;
}
