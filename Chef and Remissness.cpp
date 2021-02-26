//CodeChef
//Beginner Practice Problem
//Chef and Remissness [REMISS]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    unsigned long long a=0,b=0;
    cin>>a>>b;
    if(b>a) {cout<<b<<" ";}
    else {cout<<a<<" ";}
    cout<<a+b<<"\n";
    }
return 0;
}