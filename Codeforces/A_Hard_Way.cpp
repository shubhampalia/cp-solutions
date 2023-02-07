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
    int x[3], y[3];
    fo(i,3) cin >> x[i] >> y[i];
    
    if(y[0] == y[1] && y[2] < y[0] ) {
        cout << abs(x[0] - x[1]);
    }
    else if (y[1] == y[2] && y[0] < y[1]) {
        cout << abs(x[1] - x[2]);
    }
    else if(y[0] == y[2] && y[1] < y[0]) {
        cout << abs(x[0] - x[2]);
    }
    
    else {
        cout << 0;
    }
    cout << "\n";
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