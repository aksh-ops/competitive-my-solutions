//CodeChef
//Beginner Practice Problem
//Chef and Table Tennis [TTENIS]

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
    string s="";
    cin>>s;

    long long a=0,b=0;
    for(long long i=0;i<s.length();i++)
        {
        if(s[i]=='1') {a++;}
        else {b++;}
        }
    if(a>b) {cout<<"WIN\n";}
    else {cout<<"LOSE\n";}
    }

return 0;
}
