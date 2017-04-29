#include<bits/stdc++.h>

using namespace std;
int max(int a, int b)
{
	 return (a > b)? a : b; 
}

int dp_knapsack(int wt[] , int val[] , int N,int W)
{
	if(N<=0 || W<=0)
		return 0;
	else if(wt[N-1] > W)
		return dp_knapsack(wt , val , N-1 , W);
	else
		max( (val[N-1]+dp_knapsack(wt , val , N-1 , W-wt[N-1])) , dp_knapsack(wt , val , N-1 , W));
}		

int knapsack(int wt[] , int val[] , int N,int W)
{
   int K[N+1][W+1];	
	for (int i = 0; i <= N; i++)
   {
       for (int w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
 
   return K[N][W];		
}

int main()
{
	int N;
	cin>>N;
	int wt[N],val[N];
	for(int i=0;i<N;i++)
	{
		cin>>wt[i]>>val[i];
	}
	int W;
	cin>>W;
	cout<<knapsack(wt , val , N , W)<<endl;
}
