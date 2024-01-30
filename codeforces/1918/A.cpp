#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <queue>

using namespace std;

#define fo(i, n) for (i = 0; i < n; i++)

#define ll long long
#define sz(x) (int)(x).size()
#define mp make_pair
typedef pair<ll, ll> pl;

#define pb push_back

/*/---------------------------IO(Debugging)----------------------/*/
template<class T> istream& operator >> (istream &is, vector<T>& V) {
    for(auto &e : V)
        is >> e;
    return is;
}

template<typename CharT, typename Traits, typename T>
ostream& _containerprint(std::basic_ostream<CharT, Traits> &out, T const &val) {
    return (out << val << " ");
}
template<typename CharT, typename Traits, typename T1, typename T2>
ostream& _containerprint(std::basic_ostream<CharT, Traits> &out, pair<T1, T2> const &val) {
    return (out << "(" << val.first << "," << val.second << ") ");
}
template<typename CharT, typename Traits, template<typename, typename...> class TT, typename... Args>
ostream& operator << (std::basic_ostream<CharT, Traits> &out, TT<Args...> const &cont) {
    out << "[ ";
    for(auto&& elem : cont) _containerprint(out, elem);
    return (out << "]");
}
template<class L, class R> ostream& operator << (ostream& out, pair<L, R> const &val){
    return (out << "(" << val.first << "," << val.second << ") ");
}
template<class P, class Q = vector<P>, class R = less<P> > ostream& operator << (ostream& out, priority_queue<P, Q, R> const& M){
    static priority_queue<P, Q, R> U;
    U = M;
    out << "{ ";
    while(!U.empty())
        out << U.top() << " ", U.pop();
    return (out << "}");
}
template<class P> ostream& operator << (ostream& out, queue<P> const& M){
    static queue<P> U;
    U = M;
    out << "{ ";
    while(!U.empty())
        out << U.front() << " ", U.pop();
    return (out << "}");
}

/*/-----------------------------Code begins----------------------------------/*/


void setIO(string name = "")
{ // name is nonempty for USACO file I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0); // see Fast Input & Output
    // alternatively, cin.tie(0)->sync_with_stdio(0);
    if (sz(name))
    {
    freopen((name + ".in").c_str(), "r", stdin); // see Input & Output
    freopen((name + ".out").c_str(), "w", stdout);
    }
}

const int MAXA = 5000006;
bool prime[MAXA];

void gen_primes() {
    fill(prime, prime+MAXA, true);
    prime[0] = 0;
    // prime[1] = 1 for our purposes
    for (int i = 4; i < MAXA; i += 2) {
        prime[i] = 0;
    }

    for (int p = 3; p*p < MAXA; p += 2) {
        if (!prime[p]) continue;
        for (int x = p*p; x < MAXA; x += p) {
            prime[x] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    setIO("");
    //get input
    ll t, n, m;
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> n >> m;
        cout << (m/2)*n << endl;
    }
    //m/2 (floor) * n
    
    /* freopen(("filename"), "r", stdin); */
    /* genprimes(1e5); */
    /* printf("%lli",x); */
}