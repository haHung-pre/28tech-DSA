#include<bits/stdc++.h>
#define x long long
using namespace std;
x const maxn=1e7;
int nt[maxn];
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
	x n;cin>>n;
	for(x i=2;i<=n;i++){
		if(nt[i]) cout<<i<<" "; 
	}
}
