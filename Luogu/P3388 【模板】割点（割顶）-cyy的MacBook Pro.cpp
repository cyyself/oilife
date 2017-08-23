#include <cstdio>
#include <algorithm>
using std::min;
int head[100005];
int next[200005];
int to[200005];
int dfn[100005];
int low[100005];
int subnet[100005];
int edgecnt = 0;
int dfscnt = 0;
int n,m;
void addedge(int u,int v) {
	edgecnt ++;
	next[edgecnt] = head[u];
	head[u] = edgecnt;
	to[edgecnt] = v;
}
void tarjan(int u,int r) {
	int son = 0;
	dfn[u] = low[u] = ++dfscnt;
	for (int edge=head[u];edge!=0;edge=next[edge]) {
		int v = to[edge];
		if (!dfn[v]) {
			tarjan(v,r);
			low[u]=min(low[u],low[v]);
            son ++;
			if ( (low[v] >= dfn[u] && u != r) || (u == r && son >= 2) ) subnet[u] ++;
		}
		low[u] = min(low[u],dfn[v]);
	}
}
int main() {
	scanf("%d%d",&n,&m);
	for (int i=1;i<=m;i++) {
		int u,v;
		scanf("%d%d",&u,&v);
		addedge(u,v);
		addedge(v,u);
	}
	for (int i=1;i<=n;i++) if (!dfn[i]) tarjan(i,i);
	int ans = 0;
	for (int i=1;i<=n;i++) if (subnet[i]) ans++;
	printf("%d\n",ans);
	for (int i=1;i<=n;i++) if (subnet[i]) printf("%d ",i);
	return 0;
}