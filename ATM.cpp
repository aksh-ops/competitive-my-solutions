//CodeChef
//Beginner Practice Problem
//ATM [HS08TEST]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long x=0;
double y=0;
cin>>x>>y;

if((x%5==0)&&(y>x+0.50)) {cout<<fixed<<setprecision(2)<<double(y-x-0.500)<<"\n";}
else {cout<<y;}

return 0;
}