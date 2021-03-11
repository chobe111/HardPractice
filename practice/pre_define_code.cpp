//
// Created by myungki cho on 3/12/21.
//
#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using str = string;
using pi = pair<int, int>;
using pl = pair<ll, ll>;

using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<ld>;
using vpi = vector<vpi>;
using vpl = vector<pl>;


#define mp make_pair
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define ft front
#define bk back
#define pb push_back
#define eb emplace_back
#define pf push_front

#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))
#define each(a,x) for (auto& a: x)

#define tcT template<class T
//loops
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)

const db PI = acos((db)-1);

template<class T> using pqg = priority_queue<T,vector<T>,greater<T>>;
template<class T> using pq = priority_queue<T,vector<T>>;

ll cdiv(ll a, ll b) { return a/b+((a^b)>0&&a%b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a/b-((a^b)<0&&a%b); } // divide a by b rounded down

tcT> using V = vector<T>;
tcT> using PR = pair<T,T>;
