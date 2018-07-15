#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;


#define rep(i,a,n) for(int i = a; i < n; i++) 
#define _set(arr, val) for(unsigned i = 0; i < (sizeof arr)/(sizeof arr[0]); i++) arr[i] = val;
void convertToBinary(unsigned long long int n)
{
    if (n / 2 != 0) {
        convertToBinary(n / 2);
    }
    cout<<n%2;
}
unsigned long long f(unsigned long long x){
	if(x%4 == 0) return x;
	if(x%4 == 1) return 1;
	if(x%4 == 2) return x+1;
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long a,b;
	cin>>a>>b;
	unsigned long long ans = (f(b)^f(a-1));
	convertToBinary(ans);
	cout<<endl;
	return 0;
}