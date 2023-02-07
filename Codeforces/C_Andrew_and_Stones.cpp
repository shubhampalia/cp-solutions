#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll long long
#define ULL unsigned long long
#define LD long double
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"


void print(vi &nums);
void print(vvi &nums);
vi cinvi(int n);

// void solve(void){
//     ll n,ou = 0,now,ans = 0,f = 0;
//     cin >> n;
//     for(int i = 1;i <= n;i++){
//         cin >> now;
//         if(i != 1 && i != n) {
//             if(now % 2 == 0) ou++;
//             else if(now > 1) f = 1;
//             ans += (now + 1) / 2;
//         }
//     }
//     if(!f && !ou) cout << "-1\n";
//     else if(n == 3 && !ou) cout << "-1\n";
//     else cout << ans << '\n';
// }

ll solve() {
    ll n; cin >> n;
    ll ans = 0, f1 = 0, evens = 0;
    fo(i,n) {
        ll now; cin >> now;
        if(i != 0 && i != n-1) {
            if(now % 2 == 0) evens++;
            else if (now > 1) f1 = 1;
            ans += (now+1)/2;
        }
        
    }

    if(!f1 && !evens) return -1;
    else if(n==3 && !evens) return -1;
    else return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--){
		cout << solve() << "\n";
        
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