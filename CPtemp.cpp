// Harshil Bambhroliya®

#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
//const double pi = 3.141592653589793238;
#define mod (int) 998244353
#define MOD (int) 1e9+7
#define pi 2*asin(1)
// Big two primes
#define X 1001100011100001111ll
#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
#define tc(t) int t; cin >> t; while (t--)
#define int long long
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define ll long long
#define pb push_back
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rr return 0
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define inf (int)(1e18)
#define ini(a, i) memset(a, i, sizeof(a))
#define vi vector<int>
#define fi first
#define se second
#define endl "\n"
#define ii pair<int, int>
#define vii vector<ii>
#define sz(s) s.size()
#define bits(n) __builtin_popcount(n)
#define _USE_MATH_DEFINES

const int MAXN = (int)((1e5) + 100);
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
int max(int a, int b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}


// standard input and output template
template<typename... T>
void in(T&... args) {
    ((cin >> args), ...);
}

template<typename... T>
void out(T&&... args) {
    ((cout << args << " "), ...);
}

template<typename... T>
void outl(T&&... args) {
    ((cout << args << endl), ...);
}

//typedef tree<pii, null_type, less<pii>, rb_tree_tag, tree_order_statistics_node_update> Set;
bool isPrime(int N) { for (int i = 2; i * i <= N; ++i) {if (N % i == 0) return false;} return true;}
int cbrt(int x) { int lo = 1, hi = min(2000000ll, x); while (hi - lo > 1) {int mid = (lo + hi) / 2; if (mid * mid * mid < x) {lo = mid;} else hi = mid;} if (hi * hi * hi <= x) return hi; else return lo;}
const int dx[4] = { -1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
int XX[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int YY[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
const int N = (int)(5 * 1e5 + 10);
const int maxsize = N;
vector<int>adj[N];
int fen[maxsize];


// Function to update any index
void update(int ind, int val)
{
    for (int i = ind; i < maxsize; i += i & -i)
        fen[i] += val;
}

// Function to get the prefix sum or suffix sum
int sum(int ind)
{
    int ans = 0;
    for (int i = ind; i > 0 ; i -= i & -i)
        ans += fen[i];

    return ans;
}


/*
                                            Main code:)
---------------------------------------------------------------------------------------------------------
*/

void solve() {

}


signed main() {
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    fio;

    srand(time(NULL));
    tc(t) {
        solve();
    }
}

