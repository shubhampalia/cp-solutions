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
    int n; 
    cin>>n;
    int count=0;
    vi nums = cinvi(n);
    int a=nums[n-1];
    reverse(all(nums));
    fo(i,n) {
        if(nums[i] > a) {
            a = nums[i];
            count++;
        }
    }
    if(a==nums[n-1]) {
        cout<<count<<endl;
    }
	else{
        cout<<"-1"<<endl;
    }
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