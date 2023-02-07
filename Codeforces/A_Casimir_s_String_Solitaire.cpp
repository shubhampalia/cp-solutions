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

void solve() {
    string s;
    cin>>s;
    int n = s.size();
    unordered_map<char, int> count;
    for(int i=0; i<n; i++) {
        count[s[i]]++;
    }
    if(count['A'] > 0 && count['B'] >0 && count['A'] <= count['B']) {
        count['B']-=count['A'];
        count['A'] = 0;
    }
    if(count['C'] > 0 && count['B'] >0 && count['B'] <= count['C']) {
        count['C']-=count['B'];
        count['B'] = 0;
    }
    if(count['A'] == 0 && count['B']==0 && count['C'] == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
	int t;
    cin>>t;
    while(t--) {
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