#include<bits/stdc++.h>
using namespace std;
int const maxn=1e7;
int nt[maxn];
int main(){
	memset(nt,true,sizeof(nt));
	nt[0]=nt[1]=false;
	for(int i=2;i<=sqrt(maxn);i++){
		if(nt[i]){
		for(int j=i*i;j<=maxn;j+=i){
			nt[j]=false;
		}
	}
	}
	int t;cin>>t;
	while(t--){
		int n;cin>>n;int c=0;
		for(int i=2;i<=sqrt(n);i++){
			if(nt[i]){
				c++;
		}
	}
	cout<<c<<endl;
	}
}
