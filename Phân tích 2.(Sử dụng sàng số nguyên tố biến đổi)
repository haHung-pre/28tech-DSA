#include<bits/stdc++.h>
using namespace std;
int const maxn=1e5;
int p[maxn+1];
void sieve2(){
	for(int i=1;i<maxn+1;i++){
		p[i]=i;
	}
	for(int i=2;i<=sqrt(maxn+1);i++){
		if(p[i]==i){
			for(int j=i*i;j<=maxn+1;j+=i){
				if(p[j]==j){
					p[j]=i;
				}
			}
		}
	}
}
void check(int n,int k){
	int b[maxn+1]={0};
	while(n!=1){
		b[p[n]]++;
		n/=p[n];
	}
	cout<<"#TC"<<k<<": ";
	for(int i=2;i<=maxn+1;i++){
		if(b[i]>0){
			cout<<i<<"("<<b[i]<<") ";
		}
	}
}
int main(){
	int t;cin>>t;
	sieve2();
	while(t--){
		for(int i=1;i<=t;i++) {
        int n;cin>>n;
        check(n,i);
		cout<<endl;
		}
	}
}
