#include<bits/stdc++.h>
#define x long long
using namespace std;
x mot(x n){
	if(n<2) return 0;
	for(x i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
x hai(x n){
	x s=0;x ok=1;
	while(n>0){ //25723
		s=n%10;
	if(!mot(s)){
		ok=0;
		break;
	}
	n/=10;
	}
	return ok;
}
x ba(x n){
	x ss=0;x ok=1;
	while(n>0){
		ss+=n%10;
		n/=10;
	}
		if(!mot(ss))ok=0;
	return ok;
}
int main(){
	x t;cin>>t;
	while(t--){
		x a,b;cin>>a>>b;x c=0;
		for(x i=a;i<=b;i++){
			if(mot(i)&&hai(i)&&ba(i)){
				c++;
			}
		}
		cout<<c<<endl;
	}
}
