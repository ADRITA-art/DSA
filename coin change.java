

// User function Template for Java

class Solution {
    public long count(int coins[], int N, int sum) {
        int n = coins.length;
 
        long T[][] = new long[n + 1][sum + 1];
 
        for (int i = 0; i <= n; i++) {
            T[i][0] = 1;
        }
 
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= sum; j++)
            {
                if (coins[i - 1] > j) {
                    T[i][j] = T[i - 1][j];
                }
                else {
                    T[i][j] = T[i - 1][j] + T[i][j - coins[i - 1]];
                }
            }
        }
 
        return T[n][sum];
            }
    }
