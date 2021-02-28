
#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j,s;
	    cin>>s;
	    int q[s];
	    for(i=0;i<s;i++)
	    {
	        cin>>q[i];
	    }
	    int to=0;
	    for(i=0;i<s;i++)
	    {
	        int e;
	        cin>>e;
	        for(j=0;j<e;j++)
	        {
	            int c;
	            cin>>c;
	            to+=c;
	            if(i!=0)
	            to-=q[i];
	        }
	    }
	    cout<<to<<"\n";
	}
	return 0;
}
