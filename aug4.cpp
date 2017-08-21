#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		char s[502],t[502];
		int ss[27]={0},tt[27]={0};
		cin>>s>>t;
		int len=strlen(s);
		for(int i=0;i<len;i++)
		{
			ss[s[i]-'a']++;
			tt[t[i]-'a']++;
		}int difft=0,diffs=0;
		for(int i=0;i<26;i++)
		{
			if(tt[i]>0)difft++;
			if(ss[i]>0)diffs++;
		}
		int count=0;
		for(int i=0;i<26;i++)
		{
			if(ss[i]==true && tt[i]==true)
			{count++;
			}
			
		}
		int flag=0;
		int sss=0,ttt=0;
		for(int i=0;i<26;i++)
		{
			if(ss[i]>0 && tt[i]==0)sss++;
		}
	for(int i=0;i<26;i++)
		{
			if(ss[i]==0 && tt[i]>0)ttt++;
		}		
		for(int i=0;i<26;i++)
		{
			if(ss[i]>1 && tt[i]==0)
			{flag=1;break;
			}
		}
		if(count==diffs){cout<<"B"<<endl;
		continue;
		}
		else if((count==difft && count<diffs) || flag==1 || (sss>0 && ttt==0)){
			cout<<"A"<<endl;
			continue;
		}
		
		else cout<<"B"<<endl;
	}
}
