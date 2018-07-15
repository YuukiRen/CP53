#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void convertToBinary(unsigned long long int n)
{
    if (n / 2 != 0) {
        convertToBinary(n / 2);
    }
    cout<<n%2;
}
void Xor(unsigned long long int a, unsigned long long int b) {
 convertToBinary(a * (a & 1) ^ b * !(b & 1) ^ !!(((a ^ b) + 1) & 2));
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


	unsigned long long int n,m,an;
	cin>>n>>m;
	Xor(n,m);
	cout<<endl;

	return 0;	
}