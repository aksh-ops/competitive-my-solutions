//CodeChef
//Beginner Practice Problem
//Chef and Fruits [FRUITS]

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
  long long n=0,m=0,k=0,minimum=0;
  cin>>n>>m>>k;

  if(k>abs(m-n)) {minimum=0;}
  else {minimum=abs(abs(m-n)-k);}
  cout<<minimum<<"\n";
  }
return 0;
}
