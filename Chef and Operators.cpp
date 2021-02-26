//CodeChef
//Beginner Practice Problem
//Chef and Operators [CHOPRT]

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
    if(a<b) {cout<<"<\n";}
    else if(a>b) {cout<<">\n";}
    else {cout<<"=\n";}
    }
return 0;
}
