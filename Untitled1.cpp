#include<bits/stdc++.h>
#define x long long
using namespace std;
x const maxn=1e7;
x nt[maxn];
int main(){
	memset(nt,true,sizeof(nt));
	nt[0]=nt[1]=0;
	for(x i=2;i<=sqrt(maxn);i++){
		if(nt[i]){
			for(x j=i*i;j<=maxn;j+=i){
				nt[j]=0;
			}
		}
	}
	x t;cin>>t;
	while(t--){
		x a,b;cin>>a>>b;if(a>b) swap(a,b);
		vector<x>v;
		for(x i=a;i<=sqrt(b);i++){
			if(nt[i]){
			v.push_back(i*i); 
		}
		}
		cout<<v.size()<<endl;
}
}


