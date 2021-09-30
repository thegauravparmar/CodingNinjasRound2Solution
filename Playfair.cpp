#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/trie_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")

#define int long long
#define ll long long
#define all(v) v.begin(), v.end()
#define intvect vector<int>
#define pii pair<int, int>
#define mii map<int, int>
#define fo(i, n) for (int i = 0; i < n; ++i)
#define Fo(i, k, n) for (int i = k; i < n; ++i)
#define ld long double
#define deb(x) cout << #x << " " << x << '\n';
#define pb push_back
#define pob pop_back
#define lcm(a, b) (a / __gcd(a, b) * b)
#define F first
#define S second
#define ull unsigned long long

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    indexed_set;

const ll mod = 1e9 + 7;
const ll N = (ll)5e6 + 5;

void vjudge() {
#ifndef RTE
    if (fopen("input.txt", "r")) {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

#define lcm(a, b) (a / __gcd(a, b) * b)

int ctr = 0;
void get(int a, int b, int c) {
    ++ctr;
    cout << "A" << ctr << " = " << a << ", "
         << "B" << ctr << " = " << b << ", "
         << "B" << ctr << " = " << c << "\n";
    if (a == b) {
        //cout << "Step: " << ctr << "\n";
        //cout << "Condition when both of them are same:\n\n";
        //cout << "Hence the GCD of given two numbers is (Cn * An):";
        cout << "GCD =  " << a * c << "\n";
    } else if (!(a & 1) and !(b & 1)) {
        //cout << "Step: " << ctr << "\n";

        //cout << "Condition when both of them even:\n";
        get(a / 2, b / 2, c * 2);
    } else if (a & 1 and b % 2 == 0) {
        //cout << "Step: " << ctr << "\n";

        //cout << "Condition when A is odd and B is even:\n";
        get(a, b / 2, c);
    } else if (b & 1 and a % 2 == 0) {
        //cout << "Step: " << ctr << "\n";

        //cout << "Condition when A is even and B is odd:\n";
        get(a / 2, b, c);
    } else {
        //cout << "Step: " << ctr << "\n";

        //cout << "Condition when both of them odd:\n";
        get(abs(a - b), min(a, b), c);
    }
}
void solve(int _) {
    cout << "Initial Values:\n";
    get(704, 3046, 1);
    //vector<vector<char>> keyMatrix{
    //    {'M', 'O', 'N', 'A', 'R', 'C'},
    //    {'H', 'Y', 'B', 'D', 'E', 'F'},
    //    {'G', 'I', 'J', 'K', 'L', 'P'},
    //    {'Q', 'S', 'T', 'U', 'V', 'W'},
    //    {'X', 'Z', '0', '1', '2', '3'},
    //    {'4', '5', '6', '7', '8', '9'}};
    //for (auto x : keyMatrix) {
    //    for (auto y : x) cout << y << " ";
    //    cout << "\n";
    //}
}

int32_t main() {
    vjudge();
    int t = 1;
    //cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}
