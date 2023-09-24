// // Harshil Bambhroliya®
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
string pi1 = "314159265358979323846264338327";
#define mod (int)(1e9+7)
#define pi 2*asin(1)
// Big two primes
#define X 1001100011100001111ll
#define all(a) a.begin(),a.end()
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
#define int long long
#define ld long double
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define ll long long
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define tc(t) int t; cin >> t; while (t--)
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
#define vpp vector<pair<int,int>>
#define ii pair<int, int>
#define vii vector<ii>
#define sz(s) s.size()
#define bits(n) __builtin_popcount(n)
#define _USE_MATH_DEFINES
#define takein(arr,n) for(int i=0; i<n; i++){cin>>arr[i];}
#define p(x) cout<<x<<endl
#define re return
#define mod1 998244353
#define fr(i,a,b) for(int i = a;i < b;i++)
const int MAXN = (int)((1e5) + 100);
void __print(int x)
{
	cerr << x;
}
void __print(unsigned x)
{
	cerr << x;
}
void __print(unsigned long x)
{
	cerr << x;
}
void __print(unsigned long long x)
{
	cerr << x;
}
void __print(float x)
{
	cerr << x;
}
void __print(double x)
{
	cerr << x;
}
void __print(long double x)
{
	cerr << x;
}
void __print(char x)
{
	cerr << '\'' << x << '\'';
}
void __print(const char *x)
{
	cerr << '\"' << x << '\"';
}
void __print(const string &x)
{
	cerr << '\"' << x << '\"';
}
void __print(bool x)
{
	cerr << (x ? "true" : "false");
}

template<typename T, typename V>
void __print(const pair<T, V> &x)
{
	cerr << '{';
	__print(x.first);
	cerr << ',';
	__print(x.second);
	cerr << '}';
}
template<typename T>
void __print(const T &x)
{
	int f = 0;
	cerr << '{';
	for (auto &i : x) cerr << (f++ ? "," : ""), __print(i);
	cerr << "}";
}
void _print()
{
	cerr << "]\n";
}
template <typename T, typename... V>
void _print(T t, V... v)
{
	__print(t);
	if (sizeof...(v)) cerr << ", ";
	_print(v...);
}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC, typename typD> istream &operator>>(istream &cin, pair<typC, typD> &a)
{
	return cin >> a.first >> a.second;
}
template<typename typC> istream &operator>>(istream &cin, vector<typC> &a)
{
	for (auto &x : a) cin >> x;
	return cin;
}
template<typename typC, typename typD> ostream &operator<<(ostream &cout, const pair<typC, typD> &a)
{
	return cout << a.first << ' ' << a.second;
}
template<typename typC, typename typD> ostream &operator<<(ostream &cout, const vector<pair<typC, typD>> &a)
{
	for (auto &x : a) cout << x << '\n';
	return cout;
}
template<typename typC> ostream &operator<<(ostream &cout, const vector<typC> &a)
{
	int n = a.size();
	if (!n) return cout;
	cout << a[0];
	for (int i = 1; i < n; i++) cout << ' ' << a[i];
	return cout;
}
// ===================================END Of the input module ==========================================

int gcd(int a, int b) //Ecluid Algo
{
	if (a == 0) return b;
	return gcd(b % a, a);
}
int lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}
int max(int a, int b)
{
	if (a > b) return a;
	else return b;
}
int min(int a, int b)
{
	if (a < b) return a;
	else return b;
}
int smallestPositiveDivisor(int n)
{
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0) return i;
	}
	return 0;
}
int smallestPositiveDivisor1(int n, int a)
{
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0 and i != a) return i;
	}
	return 0;
}
int get_hash(string s)
{
	int h = 0;
	for (auto i : s)
	{
		h = (h * 31 + (i - 'a' + 1)) % mod;
	}
	return h;
}
int binpow(int base, int x)
{
	int ans = 1;
	while (x > 0)
	{
		if (x & 1)
		{
			x--;
			ans = (ans % mod * base % mod) % mod;
		}
		else
		{
			base = (base % mod * base % mod) % mod;
			x /= 2;
		}
	}
	return ans;
}
int mod_inverse(int a, int m)
{
	return binpow(a, m - 2);
}

int N1 = 1e6 + 1;
int spf[(int)(1e6 + 1)];
void Spf()   //Smallest Prime Factor and Check if it is prime or not
{
	for (int i = 2; i <= N1; i++) spf[i] = i;
	for (int i = 2; i * i <= N1; i++)
	{
		if (spf[i] != i) continue;
		for (int j = i * i; j <= N1; j += i)
		{
			if (spf[j] == j) spf[j] = i;
		}
	}
}
//finding the ncr
int fact[(int)(1e6 + 1)];
int modinv[(int)(1e6 + 1)];

void facto() //o(nlog(mod))
{
	fact[0] = 1;
	for1(i, N1)
	{
		fact[i] = (fact[i - 1] * i) % mod;
		modinv[i] = binpow(fact[i], mod - 2);

	}
}

int ncr(int n, int r)
{
	if (n == r) return 1;
	if (r > n) return 0;
	int numo = fact[n];
	int denoinv = (modinv[r] * modinv[n - r]) % mod;
	return (numo * denoinv) % mod;
}

// standard input and output template
template<typename... T>
void in(T &... args)
{
	((cin >> args), ...);
}

template<typename... T>
void out(T &&... args)
{
	((cout << args << " "), ...);
}

template<typename... T>
void outl(T &&... args)
{
	((cout << args << endl), ...);
}

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; //find_by_order,order_of_key
bool isPrime(int n)
{
	if (n <= 1)
		return false;

	// Check from 2 to square root of n
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;

	return true;
}
int cbrt(int x)
{
	int lo = 1, hi = min(2000000ll, x);
	while (hi - lo > 1)
	{
		int mid = (lo + hi) / 2;
		if (mid * mid * mid < x)
		{
			lo = mid;
		}
		else hi = mid;
	}
	if (hi * hi * hi <= x) return hi;
	else return lo;
}

const int dx[4] = { -1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
int XX[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int YY[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
const int N = (int)(5 * 1e5 + 10);
const int maxsize = N;
//vector<int>adj[N];
int fen[10];


// Function to update any index
void update(int ind, int val)
{
	for (int i = ind; i < maxsize; i += i & -i)
		fen[i] += val;
}

//ternary search
void getTer()
{
	auto f = [](double x) -> double
	{
		return -x * x + 2 * x + 4;
	};
	const double EPS = 1e-9;
	double l = 0, r = 1e9;
	while (r - l > EPS)
	{
		double m1 = l + (r - l) / 3;
		double m2 = r - (r - l) / 3;
		if (f(m1) < f(m2)) l = m1;
		else r = m2;
	}
	p(l);
}

// Function to get the prefix sum or suffix sum
int sum(int ind)
{
	int ans = 0;
	for (int i = ind; i > 0 ; i -= i & -i)
		ans += fen[i];

	return ans;
}

int getMinElements(vector<int> arr, int k)
{
	//sort(all(arr));
	int n = arr.size();
	int l = 0, r = n - 1, cnt = 0;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (arr[mid] <= k)
		{
			cnt = mid + 1;
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}
	return cnt;
}
int getDivisors(int n)
{
	int cnt = 0;
	for (int i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			cnt++;
			n /= i;
		}
	}
	if (n > 1) cnt++;
	return cnt;
}

bool check_perfect_cube(int x)
{
	int tmp = cbrt(x);
	while (tmp * tmp * tmp > x)
	{
		tmp--;
	}
	while (tmp * tmp * tmp < x)
	{
		tmp++;
	}
	if (tmp * tmp * tmp == x)
	{
		return true;
	}
	return false;
}
void do1(int &t, int &mini)
{
	t++;
	mini = min(mini, t);
}
int getMaxElements(vector<int> arr, int k)
{
	//sort(all(arr), greater<int>());
	int n = arr.size();
	int l = 0, r = n - 1, cnt = 0;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (arr[mid] >= k)
		{
			cnt = mid + 1;
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}
	return cnt;
}

/*
											Main code:)
---------------------------------------------------------------------------------------------------------
*/

void solve()
{

}

signed main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	fio;

	//Spf();
	//facto();
	srand(time(NULL));

	int t = 1;
	cin >> t;
	while (t--)
	{
		//cout << "test-> " << t << endl;
		solve();
	}
}
