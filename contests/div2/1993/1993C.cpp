#include<iostream>
#define ll long long
const ll N = 2e5 + 5;
using namespace std;

void solve(){
  ll n, k, a[N], mx;
  cin >> n >> k;
  mx = -1;
  for(int i = 0; i < n; i++){
    cin >> a[i];
    mx = max(mx, a[i]);
  } 

  // n = 4, k = 4
  // a = 1 4 6 10
  //
  // 1 2 3 4 5 6 7 8
  //
  // 1 1 1 1 0 0 0 0
  // 0 0 0 1 1 1 1 0
  // 1 0 0 0 0 1 1 1
  // 0 1 1 1 1 0 0 0
  //
//d= 1 1 0 1 0 1 0 0 // the count of canonical starting points of each a[i].

}

int main(){
  ll t; 
  cin >> t;
  while(t--) solve();
}
