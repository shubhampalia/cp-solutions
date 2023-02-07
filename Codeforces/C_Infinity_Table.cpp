#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vvi vector<vector<int>>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll long long
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl
// #define itr(it, a) = for(auto it = a.begin(); it != a.end(); it++)
void print(vvi dp);
void print(vi nums);
vi cinvi(int n);

void solve(){
    ll k, r, c;
    cin>>k;
    ll grid = ceil(pow(k,0.5));
    ll dis = ceil( (pow(grid,2) + pow(grid-1, 2))/2 );
    if(k == dis) {
        r=grid;
        c= grid;
    }
    else if(k<dis) {
        c = grid;
        r = grid - (dis - k);
    }
    else {
        r = grid;
        c = grid - (k-dis);
    }
    cout<<r<<" "<<c<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}


void print(vi nums){
	fo(i,nums.size()){
		cout<<nums[i]<<" ";
	}
	cout<<endl;
}

void print(vvi dp)
{
    fo(i,dp.size()){
        fo(j,dp[0].size()){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}

vi cinvi(int n){
	vi nums;
	fo(i,n){
		int x;
		cin>>x;
		nums.pb(x);
	}
	return nums;
}