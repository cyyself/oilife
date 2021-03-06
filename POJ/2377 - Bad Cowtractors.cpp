#include <cstdio>
#include <algorithm>
using namespace std;
int f[1005];
int find(int x) {
	if (f[x] == x) return x;
	else {
		f[x] = find(f[x]);
		return f[x];
	}
}
void uni(int x,int y) {
	f[find(x)] = find(y);
}
struct edge {
	int u,v,w;
	friend bool operator < (const edge &a,const edge &b) {
		return a.w < b.w;
	}
}e[20005];
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++) f[i] = i;
	for (int i=0;i<m;i++) scanf("%d%d%d",&e[i].u,&e[i].v,&e[i].w);
	sort(e,e+m);
	int ans = 0;
	int cnt = 0;
	for (int i=m-1;i>=0;i--) {
		if (find(e[i].u) != find(e[i].v)) {
			uni(e[i].u,e[i].v);
			cnt ++;
			ans += e[i].w;
			if (cnt == n - 1) break;
		}
	}
	if (cnt == n - 1) printf("%d\n",ans);
	else printf("-1\n");
	return 0;
}
