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
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define INF 0x3f3f3f3f
#define MOD 100000000
#define endl "\n"
#define ios {ios::sync_with_stdio(0);cin.tie(0);}
const int N=2e5+10;

void Solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'x' && 
            s[i + 1]== 'u' && 
            s[i + 2] == 'a' && 
            s[i + 3] == 'n') {
            s.insert(i, "a");
            i += 1;
        }
    }

    cout << s << endl;
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
