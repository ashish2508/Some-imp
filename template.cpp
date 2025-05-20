#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")


#include <bits/stdc++.h>
using namespace std;
using i64 = int64_t;
using u64 = unsigned long long;
using ll = long long;
using str=string;
using ld = long double;
using pi = pair<int, int>;
using vi= vector<int>;
using vvi = vector<vector<int>>;
using vc = vector<char>;
using vs = vector<string>;
using vb = vector<bool>;
using vll = vector<long long>;
using si=set<int>;
using mii=map<int,int>;
using mis=map<int,string>;
using msi=map<string,int>;
#define elif else if

#define  Em emplace
#define F first
#define fr front
#define S second
#define bk back
#define pb push_back
#define eb emplace_back
#define E emplace
#define I insert
#define MP make_pair
#define lb lower_bound
#define ub upper_bound
#define  pie 3.14159265358979
#define Kirito ios::sync_with_stdio(false); 
#define luv cin.tie(NULL); 
#define Chicks cout.tie(NULL);
#define nin int n; cin >> n;
#define nil ll n; cin >> n;
#define tit int t=1; cin >> t;
#define til ll t=1; cin >> t;
#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define sumv(arr) accumulate(all(arr),0LL)
#define rev(v) reverse(all(v));
#define mxe(v) *max_element(v.begin(), v.end()) // find max element in vector
#define mne(v) *min_element(v.begin(), v.end()) // find min element in vector
#define srt(v) sort(all(v)) // sort
// make sure to sort before applying unique // else only consecutive duplicates would be removed
#define unq(v) v.resize(distance(v.begin(), unique(all(v))));
#define Mod 1000000007ll
#define Emod 998244353ll
#define inf 1000000000000000009ll
#define log2(x) (64 - __builtin_clzll(x) - 1) // log2 in O(1) time

#define let(x) int x;cin>>x;
#define letc(x) char x;cin>>x;
#define lets(x) str x;cin>>x;
#define letl(x) ll x;cin>>x;
const int dx[4]{1, 0, -1, 0}, dy[4]{0, 1, 0, -1};  // for every grid problem!!
            
string alph="abcdefghijklmnopqrstuvwxyz";
// Utility Functions
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; } ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

// Debugging
#ifdef LOCAL
#define  debug(x) cerr << #x << " = " << x << endl;
#else
#define  debug(x)
#endif
//For Taking mod

 inline int power(int a, int b, int mod=static_cast<int>(inf)) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
inline int mminvprime(int a, int b) {return power(a, b - 2, b);}
inline int mod_add(int a, int b, int m=Mod) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
inline int mod_mul(int a, int b, int m=Mod) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
inline int mod_sub(int a, int b, int m=Mod) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
inline int mod_div(int a, int b, int m=Mod) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
// Bitwise Operations
ll setbit(ll x, ll pos) { return x | (1ll << pos); }//set the positon you want to 1 if its 0 then 1
ll resetbit(ll x, ll pos) { return x & ~(1ll << pos);} //set the positon you want to if its 1 then 0}
ll checkpowerof2(int x,int k){return x&((1<<k)-1);}

#define cntsetbit(mask) __builtin_popcountll(mask)  // used to count the no.1 in the binary of a number
#define checkbit(mask,bit) ((mask >> bit) & 1ll) // Checks the least significant bit (that is the position you want to check ) 0 ? 1
#define changebit(mask,bit) ((mask)^(1LL<<bit)) //xor each binary digit (1^1=0,0^0=0,1^0 or 0^1 =1 or you can say it flips it 0 to 1 and 1 to 0
#define F_subset(t, s) for (ll t = (s); t >= 0; t = (t == 0 ? -1 : (t - 1) & (s))) // provide subsets like 10(1010)'s subsets =1000,0010,0000 

// (0, 1, 2, 3, 4) -> (-1, 0, 1, 1, 2)
int topbit(int x) { return (x == 0 ? -1 : 31 - __builtin_clz(x)); }//used to find the first occurence of in a int binary number }
int topbit(ll x) { return (x == 0 ? -1 : 63 - __builtin_clzll(x)); } // same but for ll binary number

// (0, 1, 2, 3, 4) -> (-1, 0, 1, 0, 2)

int lowbit(int x) { return (x == 0 ? -1 : __builtin_ctz(x));} //finds the position of zero just before 1st occurence of 1  }
int lowbit(ll x) { return (x == 0 ? -1 : __builtin_ctzll(x)); }


const string ln="\n";
#define yes cout<<"YES"<<ln;
#define no cout<<"NO"<<ln;
#define br cout<<ln;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define reprev(i, a, b) for (int i = a; i >= b; --i)
#define fastloop(x, a) for (auto& x : a)


constexpr int Mx = 1000007; //1e5 + 7
int Arr[100007];

void tests()
{

}



signed main()
{
Kirito luv Chicks
 cout << fixed << setprecision(20);
    tit
while(t--){
        tests();
   } 
    return 0;
}
