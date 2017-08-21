#include<bits/stdc++.h>
using namespace std;

long long power(long long a,long long b)
{
	if(b==0)
	return 1;
	long long temp;
	temp= power(a,b/2);
	temp=(temp*temp)%1000000007;
	if(b%2)
	return (temp*a)%1000000007;
	else
	return temp;
}
int main()
{	
// Codevita Round 1
long long n,ans=1;
cin>>n;
if(n==1){
cout<<0;
return 0;}
else if(n==2){
	cout<<0;
	return 0;
} 
ans= power(2,n-1);

cout<<ans-2;	
}
