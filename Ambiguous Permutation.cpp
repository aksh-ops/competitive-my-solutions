//CodeChef
//Beginner Practice Problem
//Ambiguous Permutation [PERMUT2]//a umber permutation is said to be ambigous if the position of number is same as that of numbers 


#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;

for(;;)
  {
  cin>>t;
  if(t==0) {break;}

  unsigned long long a[t];
  a[0]=0;

  bool tf=false;
  for(unsigned long long i=1;i<=t;i++) {cin>>a[i];}
  for(unsigned long long j=1;j<=t;j++) {if(a[a[j]]!=j) {tf=true; break;}}

  if(tf==false) {cout<<"ambiguous\n";}
  else {cout<<"not ambiguous\n";}
  }
return 0;
}
