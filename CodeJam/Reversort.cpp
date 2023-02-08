#include <bits/stdc++.h>
using namespace std;


#define ll unsigned long long
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl
void print(vi &a);
void print(vvi &a);


int solve() {
    int n; cin >> n;
    vi L;
    for(int i=0; i<n; i++) {
        int num; cin >> num;
        L.pb(num);
    }
    int cost = 0;

    for(int i=0; i<n-1; i++) {

        int m = *min_element(L.begin() + i, L.end());

        auto j = find(L.begin(), L.end(), m);

        reverse(L.begin()+i, j+1);

        cost += distance(L.begin(), j) - i + 1;

    }
    return cost;
}


int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    for(int c=1; c <= t; c++) {
        cout << "Case #" << c << ": " << solve() << "\n";
    }
    return 0;
}




void print(vi &a) {
    for(int x: a) cout << x << " ";
    cout << endl;
}
void print(vvi &a) {
    for(int i=0; i<a.size(); i++) {
        for(int j=0; j<a[0].size(); j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}