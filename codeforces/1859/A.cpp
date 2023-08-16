/* #include <bits/stdc++.h> */
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <iostream>

using namespace std;
/* using std::vector; */

#define fo(i, n) for (i = 0; i < n; i++)

#define ll long long
#define sz(x) (int)(x).size()
#define mp make_pair
typedef pair<ll, ll> pl;

#define pb push_back

//=======================

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

int main()
{
    ios_base::sync_with_stdio(0);
    setIO("");
    // if all numbers same, then output -1
    int t;
    cin >> t;
    int n;
    vector<int> b;
    vector<int> c;
    vector<int> a;
    for(int i = 0; i<t; i++){
        cin >> n;
        a.clear();
        for(int j = 0; j<n; j++){
            int temp = 0;
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());
        b.clear();
        c.clear();
        int j = 0;
        while(j<a.size() && a[j] == a[0]){
            b.push_back(a[j]);
            j++;
        }
        while(j<a.size()){
            c.push_back(a[j]);
            j++;
        }
        if(c.size()==0){
            cout << -1 << endl;
        }
        else{
            cout << b.size() << " " << c.size() << endl;
            for(auto x: b){
                cout << x << " ";
            }
            cout << endl;
            for(auto x: c){
                cout << x << " ";
            }
            cout << endl;
        }
    }
    
}