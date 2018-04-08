#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie();
	vector <pair<long long int,long long int> > time;
	long long int sum,i,n,tc,j;
	cin>>tc; 
	int col=0,ans=0;
	long long int sum1,sum2,d1,m1,y1,hour1,min1,sec1,d2,m2,y2,hour2,min2,sec2;
	for(i=0;i<tc;i++){
		time.clear();
		col=0;
		ans=0;
		for(j=0;j<4;j++){
			cin>>d1>>m1>>y1>>hour1>>min1>>sec1;
			cin>>d2>>m2>>y2>>hour2>>min2>>sec2;
			sum1=0;
			sum2=0;
			sum1=(sec1)+(60*min1)+(3600*hour1)+(86400*d1)+(4320000*m1)+(86400000*y1);
			sum2=(sec2)+(60*min2)+(3600*hour2)+(86400*d2)+(4320000*m2)+(86400000*y2);
			time.push_back(make_pair(sum1,0));
			time.push_back(make_pair(sum2,1));
		}
		sort(time.begin(),time.end());

			
		for(j=0;j<time.size();j++){
			if(col==1 && time[j].second==1 ){
				ans=1;
				break;
			}
			if(time[j].second==1){
				col=1;
			}
			else if(time[j].second==0){
				col=0;
			}
		}
		if(ans==1){
			cout<<"Case #"<<i+1<<": COLLIDE\n";
		}
		else{
			cout<<"Case #"<<i+1<<": OK\n";
		}
	}	
	return 0;
}
