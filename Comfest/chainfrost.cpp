#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vi;


#define rep(i,a,n) for(ll i = a; i < n; i++) 
#define _set(arr, val) for(unsigned i = 0; i < (sizeof arr)/(sizeof arr[0]); i++) arr[i] = val;


ll solve(ll s, vector<pair<ll,ll> > adj[], ll K){
	ll ans = 0;
	ll prev = -1;
	while(K--){
		if(adj[s].empty())
			return ans;
		if(adj[s][0].second == prev){
			if(adj[s].size() < 2) return ans;
			ans += adj[s][1].first;
			prev = s;
			s = adj[s][1].second;
		}
		else {
			ans += adj[s][0].first;
			prev = s;
			s = adj[s][0].second;
		}
		
	}
	return ans;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll N,M,K,A;
	cin>>N>>M>>K>>A;
	vector<pair<ll,ll> > adj[N];
	for(ll i = 0; i < M; i++){
		ll a,b,c;
		cin>>a>>b>>c;
		adj[a].push_back({c,b});
		adj[b].push_back({c,a});
	}
	for(ll i = 0; i < N; i++)
		sort(adj[i].begin(), adj[i].end());
	cout<<solve(A,adj,K)<<endl;
	return 0;
}
