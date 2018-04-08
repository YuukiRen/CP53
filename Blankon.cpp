#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
     
    // Initializing base value to 1, i.e 2^0
    int base = 1;
     
    int len = num.length();
    for (int i=len-1;i>=0;i--)
    {
        if (num[i] == '1')        
            dec_value += base;
        base = base * 2;
    }
     
    return dec_value;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie();
	string kamus=" ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	long long int tc;
	string save;
	long long int start,end;
	long long int i,j,k;
	string in,out;
	int pri;
	cin>>tc;
	for(i=0;i<tc;i++){	
		cin>>in;
		k=0;
		save="";
		out="";
		for(j=0;j<in.length();j++){
			if(in[j]=='/'){
				pri=binaryToDecimal(save);
				out=out+kamus[pri];
				save="";
			}
			else{
				if(in[j]=='.'){
					save=save+"0";
					k++;
				}
				else if(in[j]=='-'){
					save=save+"1";
				}
				else if(in[j]=='#'){
					out=out+" ";
				}
			}
		}
		cout<<"Case #"<<i+1<<": ";
		cout<<out<<endl;

	}


	return 0;
}
