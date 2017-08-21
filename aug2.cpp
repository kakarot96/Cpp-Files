#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		long long int n,d;
		cin>>n>>d;
		long long int arr[n],arr2[n];
		for(int i=0;i<n;i++)cin>>arr[i];
		long long avg=0;
	for(int i=0;i<n;i++){
		avg+=arr[i];
	}
	
	if(avg%n!=0){cout<<-1<<endl;continue;
	}
	avg = avg/n;
//	cout<<avg<<endl;
for(int i=0;i<n;i++){
	arr2[i]=arr[i]-avg;
}
int flag=0;
for(int i=0;i<d;i++)
{	int temp=0;
	for(int j=i;j<n;j=j+d){
		temp+=arr2[j];
	}
	if(temp!=0){
		flag=1;break;
	}
}

if(flag==1){cout<<-1<<endl;continue;
	}
	
else{
		long long int steps=0;
for(int i=0;i<n;i++)
{
	if(arr[i]<avg)
	{
		steps+=avg-arr[i];
		arr[i+d]=arr[i+d]-(avg-arr[i]);
		arr[i]=avg;
		
	}
	else if(arr[i]>avg)
	{
		steps+=arr[i]-avg;
		arr[i+d]=arr[i+d]+(arr[i]-avg);
		arr[i]=avg;
		
	}
}
cout<<steps<<endl;
}	}
}
