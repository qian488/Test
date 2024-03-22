#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<queue>
#include<string>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define endl "\n"
#define ios {ios::sync_with_stdio(0);cin.tie(0);}
const int N=1e6+10;


void Solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        int kk = ((n + 1) / 2);
        int med = a[kk];
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] < med) cnt++;
        }
        int ans = 0;
        int cnt_eq = count(a.begin(), a.end(), med);
        if (cnt < kk) ans = kk - cnt;

        if(cnt_eq%2==0) ans++;

        cout << ans << endl;
        
    }
    
}

int main()
{
    ios 
    Solve();
    //Codeforces Round 936 (Div. 2)
    //今晚是失败的一晚。。。
    return 0;
}