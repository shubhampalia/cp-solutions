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


void print(vi nums);
vi cinvi(int n);

bool sortcol(vector<int>& v1, vector<int>& v2)
{
    return v1[0] < v2[0];
}

int solve() {
    int n; cin >> n;
    vvi mat;
    fo(i,n) {
        vi t;
        fo(j,2) {
            int x; cin >> x;
            t.pb(x);
        }
        mat.pb(t);
    }

    sort(mat.begin(), mat.end(), sortcol);
    fo(i,n-1) {
        if(mat[i][0] < mat[i+1][0] && mat[i][1] > mat[i+1][1]) return 1;
    }
    // fo(i,n) {
    //     fo(j,2) cout << mat[i][j] << " " ;
    //     cout << "\n";
    // }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// int t; cin>>t;
	// while(t--){
	// 	solve();
	// }
    if(solve()) cout << "Happy Alex";
    else cout << "Poor Alex";
    cout << "\n";
    return 0;
}


void print(vi nums){
	fo(i,nums.size())cout<<nums[i]<<" ";
	cout<<"\n";
}

vi cinvi(int n){
	vi nums;
	fo(i,n){
		int x; cin>>x;
		nums.pb(x);
	}
	return nums;
}