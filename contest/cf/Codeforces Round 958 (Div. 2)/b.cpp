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
#define MOD 100000007
#define endl "\n"
#define ios {ios::sync_with_stdio(0);cin.tie(0);}
const int N=2e5+10;

void Solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='1'){
            a += 1;
        }else{
            if (i == 0 || s[i - 1] == '1')
            {
                b += 1;
            }
        }
    }
    
    /*
    int index = 0;
    while (index < n)
    {
        if(s[index]=='1'){
            a += 1;
            index += 1;
        }else{
            while (index < n && s[index] == '0')
            {
                index += 1;
            }
            b += 1;
        }
    }
    */
    cout << ((a > b) ? "YES" : "NO") << endl;
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