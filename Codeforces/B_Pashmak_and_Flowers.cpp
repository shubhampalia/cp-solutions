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

ll factorial(ll n) {
    ll res=1;
    while(n>1) {
        res*=n;
        n--;
    }
    return res;
}

int main(){
	ll n;
	cin>>n;
    vector<long long> nums;
    for(ll i=0; i<n; i++) {
        ll x;
        cin>>x;
        nums.pb(x);
    }
	sort(nums.begin(), nums.end());
    unordered_map<ll,ll> count;
    ll maxDiff = nums[n-1] -  nums[0];
    int ways=0;
    if(maxDiff == 0) {
        ways = factorial(n)/2;
    }
    else {
            for(ll i =0; i<n; i++) {
                count[nums[i]]++;
            }
            
            for(ll i =0; i<n; i++) {
                ll temp = nums[i] + maxDiff;
                auto p = count.find(temp);
                if(p!= count.end()) {
                    ways+=p->second;
                }
            }
    }
    cout<<maxDiff<<" "<<ways<<endl;
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