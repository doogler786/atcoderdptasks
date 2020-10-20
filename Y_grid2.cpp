#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

int uniquePathsWithObstacles(vector<vector<int>>& hi) {
        //it's easy for me;
        int m=hi.size();
        int n=hi[0].size();
        if(hi[0][0] || hi[m-1][n-1])
            return 0;
        int dp[m][n];
        for(int i=0;i<n;i++)
        {
            if(hi[0][i]==1)
            {
                for(int j=i;j<n;j++)
                {
                    dp[0][j]=0;
            
                }
                break;
            }
            else
                dp[0][i]=1;
        }
        for(int i=0;i<m;i++)
        {
            if(hi[i][0]==1)
            {
                for(int j=i;j<m;j++)
                {
                    dp[j][0]=0;
                }
                break;
            }
            
            else
                dp[i][0]=1;
                
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(hi[i][j]==1)
                    dp[i][j]=0;
                else
                    dp[i][j]=(dp[i-1][j]%mod+dp[i][j-1]%mod)%mod;
            }
        }
        return dp[m-1][n-1]%mod;
        
    }

int main()
{
	int n, m;
	cin>>n>>m;
	int N;
	cin>>N;
	vector<vector<char>> hii(n, vector<char>(m, 0));
	while(N--)
	{
		int r, c;
		cin>>r>>c;
		
	}
	
	cout<<uniquePathsWithObstacles(hi)%mod<<endl;	

	return 0;
}