#include <bits/stdc++.h>
using namespace std;
int mem[] = {0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,1,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,2,-1,-1,-1,-1,-1,-1,-1,-1,-1,1,0,-1,-1,-1,-1,-1,-1,3,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,4,2,-1,-1,-1,-1,-1,-1,-1,9,-1,1,0,-1,-1,-1,-1,-1,5,-1,-1,-1,-1,-1,-1,-1,-1,19,3,-1,-1,-1,-1,-1,-1,-1,6,-1,-1,-1,-1,-1,-1,-1,-1,29,-1,2,-1,-1,-1,-1,-1,-1,7,4,9,1,0,-1,-1,-1,-1,39,-1,-1,-1,-1,-1,-1,-1,-1,8,-1,-1,-1,-1,-1,-1,-1,-1,49,5,3,-1,-1,-1,-1,-1,-1,18,-1,19,9,-1,-1,-1,-1,-1,59,-1,8,2,-1,-1,-1,-1,-1,28,6,-1,-1,1,0,-1,-1,-1,69,-1,4,-1,-1,-1,-1,-1,-1,38,-1,29,8,-1,-1,-1,-1,-1,79,7,18,19,9,-1,-1,-1,-1,48,-1,7,3,-1,-1,-1,-1,-1,89,-1,5,-1,-1,-1,-1,-1,-1,58,17,39,7,2,-1,-1,-1,-1,189,-1,28,18,-1,1,0,-1,-1,68,-1,17,29,-1,-1,-1,-1,-1,289,27,6,4,7,9,-1,-1,-1,78,-1,49,6,-1,-1,-1,-1,-1,389,-1,38,17,-1,8,-1,-1,-1,88,37,27,28,3,-1,-1,-1,-1,489,-1,16,39,-1,7,-1,-1,-1,98,-1,59,5,-1,2,-1,-1,-1,589,47,48,16,5,6,1,0,-1,198,-1,37,27,-1,19,9,-1,-1,689,-1,26,38,-1,5,8,-1,-1,298,57,69,49,4,18,7,-1,-1,789,-1,58,15,-1,4,6,-1,-1,398,-1,47,26,-1,17,5,-1,-1,889,67,36,37,15,3,4,-1,-1,498,-1,79,48,-1,16,3,-1,-1,989,-1,68,59,-1,29,2,-1,-1,598,77,57,25,14,15,19,1,0,1989,-1,46,36,-1,28,18,-1,1,698,-1,89,47,-1,14,17,-1,2,2989,87,78,58,25,27,16,-1,3,798,-1,67,69,-1,13,15,-1,4,3989,-1,56,35,-1,26,14,-1,5,898,97,189,46,24,39,13,-1,6,4989,-1,88,57,-1,25,12,-1,7,998,-1,77,68,-1,38,29,-1,8,5989,197,66,79,35,24,28,11,9,1998,-1,289,45,-1,37,27,-1,10,6989,-1,188,56,-1,23,26,-1,11,2998,297,87,67,34,36,25,-1,12,7989,-1,76,78,-1,49,24,-1,13,3998,-1,389,89,-1,35,23,-1,14,8989,397,288,55,45,48,22,-1,15,4998,-1,187,66,-1,34,39,-1,16,9989,-1,86,77,-1,47,38,-1,17,5998,497,489,88,44,33,37,21,18,19989,-1,388,189,-1,46,36,-1,19,6998,-1,287,65,-1,59,35,-1,20,29989,597,96,76,55,45,34,-1,21,7998,-1,589,87,-1,58,33,-1,22,39989,-1,488,188,-1,44,32,-1,23,8998,697,387,289,54,57,49,-1,24,49989,-1,196,75,-1,43,48,-1,25,9998,-1,689,86,-1,56,47,-1,26,59989,797,588,187,65,69,46,31,27,19998,-1,487,288,-1,55,45,-1,28,69989,-1,296,389,-1,68,44,-1,29,29998,897,789,85,64,54,43,-1,30,79989,-1,688,186,-1,67,42,-1,31,39998,-1,587,287,-1,53,59,-1,32,89989,997,396,388,75,66,58,-1,33,49998,-1,889,489,-1,79,57,-1,34,99989,-1,788,95,-1,65,56,-1,35,59998,1997,687,286,74,78,55,41,36,199989,-1,496,387,-1,64,54,-1,37,69998,-1,989,488,-1,77,53,-1,38,299989,2997,888,589,85,63,52,-1,39,79998,-1,787,195,-1,76,69,-1,40,399989,-1,596,386,-1,89,68,-1,41,89998,3997,1989,487,84,75,67,-1,42,499989,-1,988,588,-1,88,66,-1,43,99998,-1,887,689,-1,74,65,-1,44,599989,4997,696,295,185,87,64,51,45,199998,-1,2989,486,-1,73,63,-1,46,699989,-1,1988,587,-1,86,62,-1,47,299998,5997,987,688,94,189,79,-1,48,799989,-1,796,789,-1,85,78,-1,49,399998,-1,3989,395,-1,188,77,-1,50,899989,6997,2988,586,285,84,76,-1,51,499998,-1,1987,687,-1,187,75,-1,52,999989,-1,896,788,-1,83,74,-1,53,599998,7997,4989,889,194,186,73,61,54,1999989,-1,3988,495,-1,289,72,-1,55,699998,-1,2987,686,-1,185,89,-1,56,2999989,8997,996,787,385,288,88,-1,57,799998,-1,5989,888,-1,184,87,-1,58,3999989,-1,4988,989,-1,287,86,-1,59,899998,9997,3987,595,294,93,85,-1,60,4999989,-1,1996,786,-1,286,84,-1,61,999998,-1,6989,887,-1,389,83,-1,62,5999989,19997,5988,988,485,285,82,71,63,1999998,-1,4987,1989,-1,388,189,-1,64,6999989,-1,2996,695,-1,284,188,-1,65,2999998,29997,7989,886,394,387,187,-1,66,7999989,-1,6988,987,-1,193,186,-1,67,3999998,-1,5987,1988,-1,386,185,-1,68,8999989,39997,3996,2989,585,489,184,-1,69,4999998,-1,8989,795,-1,385,183,-1,70,9999989,-1,7988,986,-1,488,92,-1,71,5999998,49997,6987,1987,494,384,289,81,72,19999989,-1,4996,2988,-1,487,288,-1,73,6999998,-1,9989,3989,-1,293,287,-1,74,29999989,59997,8988,895,685,486,286,-1,75,7999998,-1,7987,1986,-1,589,285,-1,76,39999989,-1,5996,2987,-1,485,284,-1,77,8999998,69997,19989,3988,594,588,283,-1,78,49999989,-1,9988,4989,-1,484,192,-1,79,9999998,-1,8987,995,-1,587,389,-1,80,59999989,79997,6996,2986,785,393,388,91,81,19999998,-1,29989,3987,-1,586,387,-1,82,69999989,-1,19988,4988,-1,689,386,-1,83,29999998,89997,9987,5989,694,585,385,-1,84,79999989,-1,7996,1995,-1,688,384,-1,85,39999998,-1,39989,3986,-1,584,383,-1,86,89999989,99997,29988,4987,885,687,292,-1,87,49999998,-1,19987,5988,-1,493,489,-1,88,99999989,-1,8996,6989,-1,686,488,-1,89,59999998,199997,49989,2995,794,789,487,191,90,199999989,-1,39988,4986,-1,685,486,-1,181,69999998,-1,29987,5987,-1,788,485,-1,182,299999989,299997,9996,6988,985,684,484,-1,183,79999998,-1,59989,7989,-1,787,483,-1,184,399999989,-1,49988,3995,-1,593,392,-1,185,89999998,399997,39987,5986,894,786,589,-1,186,499999989,-1,19996,6987,-1,889,588,-1,187,99999998,-1,69989,7988,-1,785,587,-1,188,599999989,499997,59988,8989,1985,888,586,291,189,199999998,-1,49987,4995,-1,784,585,-1,190,699999989,-1,29996,6986,-1,887,584,-1,281,299999998,599997,79989,7987,994,693,583,-1,282,799999989,-1,69988,8988,-1,886,492,-1,283,399999998,-1,59987,9989,-1,989,689,-1,284,899999989,699997,39996,5995,2985,885,688,-1,285};
int main() {
	int T;
	scanf("%d",&T);
	while (T --) {
		int n,k;
		scanf("%d%d",&n,&k);
		if (k == 0) {
			int rem = n;
			vector <int> ans;
			while (rem) {
				int d = min(9,rem);
				rem -= d;
				ans.push_back(d);
			}
			reverse(ans.begin(),ans.end());
			for (auto x:ans) printf("%d",x);
			printf("\n");
		}
		else {
			int pos = 9*(n-1) + k - 1;
			printf("%d\n",mem[pos]);
		}
	}
	return 0;
}
