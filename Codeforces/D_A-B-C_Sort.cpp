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

bool solve() {
    int n; cin>>n;
    int a[n]; fo(i,n) cin>>a[i];
    for(int i=n-1; i>0; i-=2) {
        if(a[i] < a[i-1]) {
            swap(a[i], a[i-1]);
        }
    }
    int b[n];
    fo(i,n) b[i]=a[i];
    sort(b, b+n);
    fo(i,n) {
        if(a[i]!=b[i]) {
            return 0;
        }
    }
    return 1;

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--){
		if(solve()) yes;
        else no;
	}
    return 0;
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