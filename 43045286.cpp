#include <iostream>
using namespace std;
#define ll long long
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,k,sum=0;
	    cin>>n>>k;
	    ll arr[n+k];
	    for(ll i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    for(ll i=n;i<n+k;i++)
	    {
	        arr[i]=sum+1;
	        sum=arr[i]+sum;
	    }
	    if(arr[n+k-1]%2==0)
	    cout<<"even"<<endl;
	    else
	    cout<<"odd"<<endl;
	}
	return 0;
}
