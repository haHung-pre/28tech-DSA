#include<bits/stdc++.h>
using namespace std;
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
using ll=long long;
ll hh[10];
int c=0;
void init(){
	for(int p=1;p<=32;p++){
		if(nt(p)){
			int tmp=(int)pow(2,p)-1;
			if(nt(tmp)){
				hh[c]=1ll*tmp*(int)pow(2,p-1);
				c++;
			}
		}
	}
}
int main(){
	init();
	int t;cin>>t;
	while(t--){
		ll n;cin>>n;
		int ok=0;
		for(int i=0;i<c;i++){
			if(n==hh[i]){
				ok=1;
				break;
			} 
		}
		if(ok==1) cout<<"YES\n";
		else cout<<"NO\n";
	}
}

