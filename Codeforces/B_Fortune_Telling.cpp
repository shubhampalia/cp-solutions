#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll unsigned long long
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"


ll MOD = 10E15;
void print(vi nums);
vi cinvi(int n);

void solve(){
    ll n,x,y; cin>>n>>x>>y;
    
    ll sum=0;
    fo(i,n) {
        ll num; cin>>num;
        sum ^= num;
    }
    sum^=x;
    if(sum%2 == y%2) cout<<"Alice";
    else cout<<"Bob";
    cout<<"\n";
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