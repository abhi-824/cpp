#include<bits/stdc++.h>

using namespace std;

#define fi(n) for(int i=0;i<n;i++)
#define fr(n) for(int i=n-1;i>=0;i--)
#define chlo(i,a,n) for(int i=a;i<n;i++)
#define vi vector<int>
#define vs vector<string>
#define int long long int
#define all(a) (a).begin(),(a).end()
#define pb push_back
#define setbits(x) __builtin_popcountll(x)
#define zerbits(x) __builtinctzll(x)
#define mod 1000000007
#define inf 1e18
#define W(x) int x;cin>>x;while(x--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define mp make_pair
#define INT_SIZE 32
#define pair pair<int,int>

void aeh()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("aana.txt", "r", stdin);
	freopen("jaana.txt", "w", stdout);
#endif
}


bool vis[(int)1e5 + 2];
vi a[(int)1e5 + 1];
void dfs(int v)
{
	vis[v] = 1;
	// cout << v << "->";
	for (int child : a[v])
	{
		if (vis[child] == 0)
			dfs(child);
	}
}
void bfs(int v)
{
	vis[v] = 1;

}
int32_t main()
{
	aeh();
	int n; cin >> n;
	int m; cin >> m;
	while (m--) {
		int ar, b; cin >> ar >> b;
		a[ar].pb(b);
		a[b].pb(ar);
	}
	int cnt = 0;
	int x; cin >> x;
	dfs(x);
	for (int i = 1; i <= n; i++)
	{

		if (vis[i] == 0) {
			cnt++;
		}
	}
	cout << cnt << endl;
}