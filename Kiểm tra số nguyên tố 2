#include<bits/stdc++.h>
using namespace std;
int const maxn=1e6;
bool nt[maxn+1];
void sieve(){
	memset(nt,true,sizeof(nt));
	nt[0]=nt[1]=false;
	for(int i=2;i<=sqrt(maxn+1);i++){
		for(int j=i*i;j<=maxn+1;j+=i){
			nt[j]=false;
		}
	}
}
int main(){
	sieve();
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		if(nt[n]) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
