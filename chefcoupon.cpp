#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int d,c,a1,a2,a3,b1,b2,b3;
	    cin>>d>>c;
	    cin>>a1>>a2>>a3;
	    cin>>b1>>b2>>b3;
	    int a=a1+a2+a3;
	    int b=b1+b2+b3;
	    int sum1=a+b+d+d;
	    int sum2=a+b+(a>=150?c:d)+(b>=150?0:d);
	    if(sum1>sum2)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
