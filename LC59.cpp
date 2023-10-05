

/*
ÂİĞı¾ØÕó¾ØÕó
*/ 
#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;//Ãû¿Õ¼ä 
vector<vector<int> > generateMatrix(int n) 
{
	vector<vector<int>     > mat(n, vector<int>(n));
	 int l = 0, r = n - 1, t = 0, b = n - 1;
        int num = 1, tar = n * n;
        while(num <= tar){
            for(int i = l; i <= r; i++) mat[t][i] = num++; // left to right.
            t++;
            for(int i = t; i <= b; i++) mat[i][r] = num++; // top to bottom.
            r--;
            for(int i = r; i >= l; i--) mat[b][i] = num++; // right to left.
            b--;
            for(int i = b; i >= t; i--) mat[i][l] = num++; // bottom to top.
            l++;
        }
        return mat;
}
int main()
{
	int n;
	scanf("%d",&n);
	vector<vector<int> > a=generateMatrix(n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
 } 
