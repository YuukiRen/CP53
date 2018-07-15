#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


ll solve(ll n,ll m){
	ll ans = 0;
	if(n>2 and m>2){
		ans = ans + 4+((n-2))+((m-2));	
	}
	else if(n<=1 or m<=1){
		ans = ans + n*m;
	}
	else if(n==2 and m==2){
		ans = ans + 4;
	}
	else if(n==2){
		ans = ans + 4+((m-2));
	}
	else if(m==2){
		ans = ans + 4+((n-2));
	}
	return ans;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll n,m,an;
	cin>>n>>m;
	an = solve(n,m);
	cout<<an<<endl;

	return 0;	
}