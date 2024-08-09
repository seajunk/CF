#include<iostream>
#include<algorithm>
#define ll long long 
const ll N = 2e5 + 5;
using namespace std;


void solve(){
		ll n, k, in, d[N], mx;
		cin >> n >> k;
		fill(d, d + 2*k, 0);
		mx = -1;

		for(int i = 0; i < n; i++){
				cin >> in;
				mx = max(mx, in);
				d[in % (2*k)]++;
		}

		for(int i = 0; i < 2*k; i++){
				cout << d[i] << '\n';
		}
}

// 0 0 0 1 1 0 0 1 1 0 0 1 1 0 0
// 0 0 0 0 0 0 1 1 0 0 1 1 0 0 1
		
int main(){
		ll t;
		cin >> t;
		while(t--) solve();
}
