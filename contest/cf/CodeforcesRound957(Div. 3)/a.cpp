#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<stack>
#include<queue>
#include<string>
#include<bitset>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define endl "\n"
#define ios {ios::sync_with_stdio(0);cin.tie(0);}
const int N=2e5+10;

#define LEN 3

void Solve()
{
    int a[LEN];
    for (int i = 0; i < LEN;i++)
        cin >> a[i];
    ll ans = 1;
    int cnt = 5;
    while(cnt--){
        sort(a, a + LEN);
        a[0]++;
    }
    for (int i = 0; i < LEN;i++)
        ans *= a[i];
    cout << ans << endl;
}

int main()
{
    ios 
    int t = 1;
    cin >> t;
    while(t--){
        Solve();
    }
    
    return 0;
}
