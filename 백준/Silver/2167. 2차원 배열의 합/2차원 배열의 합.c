#include <stdio.h>
int main() {
	int n,m,k;
	int arr[301][301];
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	scanf("%d",&k);
	for(int idx=0;idx<k;idx++){
		int i,j,x,y;
		int result = 0;
		scanf("%d %d %d %d",&i,&j,&x,&y);
		for(int a=i-1;a<x;a++){
			for(int b=j-1;b<y;b++){
				result += arr[a][b];
			}
		}
		printf("%d\n",result);
	}
}
