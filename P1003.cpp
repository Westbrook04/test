#include<cstdio>
#include<iostream>
using namespace std;
int a[10010],b[10010],x[10010],y[10010];
int n,sx,sy;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d %d %d %d",&a[i],&b[i],&x[i],&y[i]);
	}	
	scanf("%d %d",&sx,&sy);
	int ans=-1;
	for(int i=n;i>=1;i--)
	{
		if(sx>=a[i]&&sx<=a[i]+x[i]&&sy>=b[i]&&sy<=b[i]+y[i])
		{
			ans=i;
			break; 
		}
	}
	printf("%d\n",ans);
	return 0;
}
