#include<bits/stdc++.h>
#define x long long
using namespace std;
x nt(x n){
	if(n<2) return 0;
	for(x i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
void check(x n){
	for(x i=0;i<=n/2;i++){
		if(nt(i)&&nt(n-i)){
			cout<<i<<" "<<n-i<<endl;
		} 
	}
	return;
}
int main(){
	x t;cin>>t;
	while(t--){
		x n;cin>>n;
		check(n);
	}
}
