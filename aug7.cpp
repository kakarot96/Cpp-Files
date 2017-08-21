#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	int arr[n+1];
	for(int i=1;i<=n;i++)cin>>arr[i];
	
	for(int i=1;i<=q;i++)
	{
		int type;
		cin>>type;
		
		if(type==1){
			int in,k;
			cin>>in>>k;
			int temp=in;
			for(int i=in+1;i<=n;i++)
			{	if(i-temp>100 || k==0)break;
				if(arr[i]>arr[temp] && k>0)
				{
					temp=i;
					k--;
				}
			}
			cout<<temp<<endl;
		}
		if(type==2)
		{
			int l,r,x;
			cin>>l>>r>>x;
			for(int i=l;i<=r;i++)
			{
				arr[i]+=x;
			}
		}
	}
}
