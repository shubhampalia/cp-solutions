#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll unsigned long long
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";


void print(vi a);
vi cinvi(int n);

void print(vector<ll> &a) {
    for(auto x: a){
        cout << x << " ";
    }
    cout << "\n";
    return;
}

void solve(){
        ll n, k;
        cin >> n >> k;
        vector<ll> a(1, 1);
        k -= n;
        
        ll x = 2;
        
        for (int i = 2; i <= n; i++) {
            if (k < a.size()) {
                int val = a[a.size()- k- 1];
                a.push_back(val);
                break;
            }
            k -= a.size();
            a.push_back(x);
            x++;
        }

        while (a.size() < n) {
            a.push_back(a.back());
        }
        print(a);
        
        return;

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--){
		solve();
	}
}


void print(vi a){
	fo(i,a.size())cout<<a[i]<<" ";
	cout<<endl;
}

vi cinvi(int n){
	vi a;
	fo(i,n){
		int x; cin>>x;
		a.pb(x);
	}
	return a;
}