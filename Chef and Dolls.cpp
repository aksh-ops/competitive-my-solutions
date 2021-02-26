//CodeChef
//Beginner Practice Problem
//Chef and Dolls [MISSP]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
  {
  unsigned long long n=0,temp=0;
  cin>>n;

  vector <unsigned long long> v;
  for(unsigned long long i=0;i<n;i++)
    {
    cin>>temp;
    v.push_back(temp);
    }
  sort(v.begin(),v.end());
  for(unsigned long long i=0;i<v.size();i+=2)
    {
    if(v[i]==v[i+1]) {continue;}
    else {cout<<v[i]<<"\n"; break;}
    }
  }
return 0;
}
