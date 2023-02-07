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
	vi nums = cinvi(6);
    if( (nums[0] == nums[2] || nums[0] == nums[3] ) && (nums[1] == nums[2] || nums[1] == nums[3] ) ) {
        
        cout<<"1"<<endl;
        
    }
    else if( (nums[0] == nums[4] || nums[0] == nums[5]) && (nums[1] == nums[4] || nums[1] == nums[5] ) ) {
        cout<<"2"<<endl;

    }
    else{
        cout<<"0"<<endl;
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