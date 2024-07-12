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
int main(){
	x n;cin>>n;
	if(nt(n)) cout<<"YES\n";
	else cout<<"NO\n";
}
