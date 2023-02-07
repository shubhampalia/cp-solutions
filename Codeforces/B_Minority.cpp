#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll unsigned long long
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl


void print(vi nums);
vi cinvi(int n);

void solve(){
    string s; cin>>s;
    int c0=0, c1=0;
    int n=s.size();
    fo(i,n) {
        if(s[i] == '0') c0++;
        else c1++;
    }
    if(c0==c1) cout<<c0-1;
    else cout<<min(c0,c1);
    cout<<"\n";

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}


void print(vi nums){
	fo(i,nums.size())cout<<nums[i]<<" ";
	cout<<endl;
}

vi cinvi(int n){
	vi nums;
	fo(i,n){
		int x; cin>>x;
		nums.pb(x);
	}
	return nums;
}