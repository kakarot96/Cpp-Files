#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t;cin>>t;
	while(t--){
		int n;cin>>n;int arr[n];int flag=0;
		for(int i=0;i<n;i++)cin>>arr[i];
		
		bool check[8];int count=0;
		for(int i=1;i<8;i++)check[i]=true;
		for(int i=0;i<(n+1)/2;i++)
		{
			if(arr[i]!=arr[n-i-1])
			{
				flag=1;break;
			}
			
		}
		
		for(int i=0;i<n;i++)
		{
			if(check[arr[i]]==true && arr[i]<=7){
				check[arr[i]]=false;
				count++;
			}
		}
		
	//	cout<<flag<<"  "<<count<<endl;
		if(flag==0 && count==7)cout<<"yes\n";
		else cout<<"no\n";
		
		
	}
}
