

//User function Template for Java

class Solution{
    int longestCommonSubstr(String S1, String S2, int n, int m){
int LCStuff[][] = new int[n + 1][m+ 1];
       
        int mx = 0;

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (i == 0 || j == 0)
                    LCStuff[i][j] = 0;
                else if (S1.charAt(i - 1) == S2.charAt(j-1))
                {
                    LCStuff[i][j]
                        = LCStuff[i - 1][j - 1] + 1;
                    mx = Integer.max(mx,
                                         LCStuff[i][j]);
                }
                else
                    LCStuff[i][j] = 0;
            }
        }
        return mx;
    }
    }
