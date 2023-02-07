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

void solve() {
    int n; cin >> n;
    int a[n];
    int sum = 0, left = 0, right = 0;
    fo(i,n) {
        cin >> a[i];
        sum += a[i];
        // cout << a[i] << " ";
    }
    if(n==1) {
        if(a[0] == 1) cout << 0 ;
        else cout << 1;
        cout << "\n";
        return;
    }
    int x = 0, t = 0;
    while(left <= right && right < n) {

        if(a[right] == 1) {
            x = max(x,t);
            t = 0;
            
            right++;
            left = right;
        }

        else {
            t++;
            right++;
        }
        // cout << t << " ";
    }
    cout << sum + x << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// int t; cin>>t;
	// while(t--){
	// 	solve();
	// }
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