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

deque<int> input(int n) {
    deque<int> deq;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        deq.pb(x);
    }
    return deq;
}

void solve(){
    int n;
    cin>>n;
    deque<int> deq = input(n);
    
    deque<int> res;
    int val = deq.front();
    deq.pop_front();
    res.pb(val);
    for(int i=1; i<n; i++) {
        int check = res.front();
        val = deq.front();
        deq.pop_front();
        if(val < check) {
            res.push_front(val);
        }
        else {
            res.pb(val);
        }
    }
    for(int i=0; i<n; i++) {
        cout<<res.at(i)<<" ";
    }
    cout<<endl;
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