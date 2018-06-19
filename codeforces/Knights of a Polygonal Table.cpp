#include <bits/stdc++.h>
using namespace std;
long long int  ans[100005];
int p[100005],c[100005];
int main ()
{
	int n, k,i,j;
	while(cin>>n>>k){
	for( i = 0; i < n; i++) {
		cin>>p[i];
	}
	for( i = 0; i < n; i++) {
		cin>>c[i];
	}

	priority_queue <int> q;
	for( i = 0; i < n; i++) {

		vector <int> v;
		ans[j] = c[j];
		//cout<<"ans: "<<ans[id]<<" j: "<<id<<endl;
		while(!q.empty() && v.size() < k) {
			int x = q.top();
			q.pop();
			ans[j] += x;
			//v.emplace_back(x);
			v.push_back(x);
		}
		for(auto l : v) {
			q.push(l);
			//cout<<"v: "<<l<<endl;
		}
		q.push(c[j]);
	}

	for( i = 0; i < n; i++) {
		cout<<ans[i]<<" ";
	}
        cout<<endl;
	}
	return 0;
}
