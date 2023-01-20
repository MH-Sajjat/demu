#include <bits/stdc++.h>
using namespace std;

typedef long long      ll;
typedef vector<int>    vi;
typedef vector<ll>     vll;
typedef pair<int, int> pii;
typedef pair<ll, ll>   pll;

const int N   = (int) 2e5 + 5;
const int MOD = (int) 1e9 + 7;
const int INF = (int) 1e9 + 9;

#define nl      '\n'
#define ff      first
#define ss      second
#define szof(x) (int) x.size()
#define all(x)  x.begin(), x.end()
bool check(int n)
{
  int ok = 1;
  for(int i = 2; i * i <= n; i++)
  {
    if(n % i == 0) return 0;
  }
  return 1;
}
int main() {
  //freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(false); cin.tie(0);
  int test = 1, tc = 0;
  while (test--) {
    int n, m;
    cin >> n >> m;
    int a[n];
    int sum = 0;
    for(int i = 0; i + 1 < n; i++) 
    {
      a[i] = i + 1;
      sum += i + 1;
    }
      int mx = m + 1;
    for(int i = n; i <= m; i++)
    {
      if(check(sum+i))
      {
        mx = i;
        a[n-1] = i;
        sum += i;
        break;
      }
    }
    if(mx > m)
    {
      cout << "impossible\n";
      return 0;
    }
    //cout << "sum: " << sum << endl;
    for(int i = 0; i < n; i++)
    {
      for(int j = i, c = 0; c < n; c++,j++)
      {
        cout << a[j%n] << " ";

      }
      cout << endl;
    }
  }
  return 0;
}
