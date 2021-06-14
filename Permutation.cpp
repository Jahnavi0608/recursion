#include<iostream>
#include<bits\stdc++.h>
using namespace std;
void PrintPermutation(int n,string s,string ss,int vis[])
{
 if(s.size()==ss.size())
 {
 	cout<<ss<<"\n";
 }
 for(int i=0;i<n;i++)
 {
 	if(vis[i]==0)
 	{
 		vis[i]=1;
 		PrintPermutation(n,s,ss+s[i],vis);
 		vis[i]=0;
	 }
 }
}
int main()
{
	cout<<"Enter size";
	int n;
	cin>>n;
	cout<<"Enter string   ";
	string s;
	cin>>s;
	string ss="";
	int vis[n];
	for(int i=0;i<n;i++)
	{
		vis[i]=0;
	}
	PrintPermutation(n,s,ss,vis);

}

/*
Enter size 3
Enter string   abc
abc
acb
bac
bca
cab
cba
*/
