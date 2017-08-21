#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
	long long int n,m;cin>>n>>m;
	long long int minSal[n+1],offSal[m+1],maxOffer2[m+1],maxOffer[m+1];
		for(int i=1;i<=n;i++)cin>>minSal[i];
		
		for(int i=1;i<=m;i++)
		{
			cin>>offSal[i];
			cin>>maxOffer[i];
			maxOffer2[i]=maxOffer[i];
		}
	
	char qual[n+2][m+2];
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>qual[i][j];
		}
	}
	
	long long placed=0,amount=0;
	for(int i=1;i<=n;i++)
	{	int temp=-1,index=-1,flag=0;
		for(int j=1;j<=m;j++)
		{
			if(qual[i][j]=='1' && maxOffer2[j]>0 && (minSal[i]<=offSal[j]))
			{
				if(offSal[j]>temp){
					
					temp=offSal[j];
					index=j;
					flag=1;
					
				}
			}
		}
		if(flag==1){
			placed++;
			maxOffer2[index]--;
			amount+=offSal[index];
			
		}
	}	
	
	long long diff=0;
	for(int i=1;i<=m;i++)
	{if(maxOffer[i]==maxOffer2[i])diff++;
		}
			cout<<placed<<" "<<amount<<" "<<diff<<endl;	
		
	}
	
	

}
