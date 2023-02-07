#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll unsigned long long
#define LD long double
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"


void print(vi &nums);
void print(vvi &nums);
vi cinvi(int n);

int solution(int n, vector<int> seq) {
    
    int a = seq[0];
    int b; 
    int res = 0;
    for(int i=1; i<n; i++) {
        b = seq[i] - a;
        // cout<<a<<" "<<b;
        vector<int>nums(n,0);
        for(int j=0; j<n; j++) {
            if(j==0) nums[j]=a;
            else if(j%2==0) nums[j] = nums[j-1]-b;
            else nums[j] = nums[j-1] + b;
        }
        int cnt=0;
        for(int k=0; k<n; k++) {
            if(nums[k] == seq[k])
                cnt++;
        }
        res = max(res, cnt);
    }
    return res;
}

void solve() {
    int n; cin>>n;
    vi seq = cinvi(n);
    int a = seq[0], b=seq[1]-seq[0];
    vi nums(n,0);
    fo(i,n) {
        if(i==0) nums[i]=a;
        else if(i%2==0) nums[i] = nums[i-1]-b;
        else nums[i] = nums[i-1] + b;
    }
    int ans = solution(n, seq); 
    cout<<ans<<'\n';
    return;
    int res = 0;
    fo(i,n) {
        if(nums[i] == seq[i]) res++;
    }
    cout<<res<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}


void print(vi &nums){
	fo(i,nums.size())cout<<nums[i]<<" ";
	cout<<"\n";
}

void print(vvi &nums) {
	fo(i,nums.size()) {
		fo(j,nums[0].size()) {
			cout << nums[i][j] << " ";
		}
		cout << "\n";
	}
}

vi cinvi(int n){
	vi nums;
	fo(i,n){
		int x; cin>>x;
		nums.pb(x);
	}
	return nums;
}