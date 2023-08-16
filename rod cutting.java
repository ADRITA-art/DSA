

class Solution{
    public int cutRod(int price[], int n) {
       int[] T = new int[n + 1];
 
       
        for (int i = 1; i <= n; i++)
        {
            
            for (int j = 1; j <= i; j++) {
                T[i] = Integer.max(T[i], price[j - 1] + T[i - j]);
            }
        }
 
        
        return T[n];
    }
}
