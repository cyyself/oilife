#include <bits/stdc++.h>
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	int ans = 0;
	while (1) {
		if (n >= m) {
			ans += n - m;
			break;
		}
		if (m & 1) m ++;
		else m = m >> 1;
		ans ++;
	}
	printf("%d\n",ans);
	return 0;
}