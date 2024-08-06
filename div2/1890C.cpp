#include<iostream>
#include<string>
#include<vector>
#define ll long long
using namespace std;

void solve(){
		ll n, l, r, e, o, c;
		vector<ll> ans;
		string s;
		cin >> n >> s;
		l = 0;
		r = n - 1;
		e = 0;
		o = 0;
		c = 0;

		for(int i = 0; i < n; i++){
				if(s[i] == '0') e++;
				else o++;
		}
		if(e != o){
				cout << -1 << '\n';
				return;
		}
		
		
		while(l < r){
				// 00110110
				if(s[l] == '0' && s[r] == '0'){
						s.insert(r + 1, "01");
						ans.push_back(r + 1);
						c++;
						r++;
						l++;
				}
				else if(s[l] == '1' && s[r] == '1'){
						s.insert(l, "01");
						ans.push_back(l);
						c++;
						l--;
						r--;
				}
				else{
						r--;
						l++;
				}
				
		}
				
		cout << c << '\n';
		for(int i = 0; i < ans.size(); i++){
				cout << ans[i] << ' ';
		}
}

int main(){
		ll t;
		cin >> t;
		while(t--) solve();
}
