#include <iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    
    int tt;
    cin>>tt;
    while(tt--)
    {
       string l,m;
       cin>>l>>m;
       int a[26],b[26];
       for(int i=0;i<26;i++)
       {
           a[i]=b[i]=0;
       }
       for(int i=0;i<26;i++)
       {
           for(int j=0;l[j]!='\0';j++)
           {
               int p;
               p=l[j]-97;
               if(a[p]==0)
               a[p]=1;
               
           }
       }
       
       for(int i=0;i<26;i++)
       {
           for(int j=0;m[j]!='\0';j++)
           {
               int p;
               p=m[j]-97;
               if(b[p]==0)
               b[p]=1;
            }
       }
       int count=0;
       for(int i=0;i<26;i++)
       {
           if(a[i]+b[i]==1&&a[i]*b[i]==0)
           count=count+1;
       }
       
       cout<<count<<endl;
       
    }
    return 0;
    
}

