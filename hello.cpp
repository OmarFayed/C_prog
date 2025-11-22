#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <stdio.h>
#include <bitset>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <string.h>
#include <string>
#include <iostream>
#include <stack>
#include <ctype.h>
#include <algorithm>
#include <deque>
#include <numeric>
#include <functional>
#include <math.h>
#include <stdlib.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> vec64;
typedef vector<int> vec32;
typedef vector<vector<int> > vvec32;
typedef vector<vector<ll> > vvec64;
typedef vector<vector<p64> > vvecp64;
typedef vector<p64> vecp64;
typedef vector<p32> vecp32;
ll MOD = 998244353;
double eps = 1e-12;
#define ln "\n"
#define space " "
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}
int lcm(int a, int b)
{
	return ((a / gcd(a, b)) * b);
}
int isprime(ll number)
{
	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int freqarr[101];
void solve()
{
	cout << "Hello, World!" << ln;
	return;
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	fast_cin();
	//int t;
	//cin >> t;
	//while (t--) solve();
	solve();
	return 0;
}