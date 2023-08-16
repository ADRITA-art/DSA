

class Solution{
    
    // arr: input array
    // n: size of array
    // Function to find the trapped water between the blocks.
    static long trappingWater(int arr[], int n) { 
       long res = 0;
 if (n == 0) {
   return 0;
 }
 int[] leftMax = new int[n];

 int[] rightMax = new int[n];

 leftMax[0] = arr[0];

 for (int i = 1; i < leftMax.length; i++) {
   leftMax[i] = Math.max(leftMax[i - 1], arr[i]);
 }

 rightMax[arr.length - 1] =arr[arr.length - 1];

 for (int j = rightMax.length - 2; j >= 0; j--) {
   rightMax[j] = Math.max(rightMax[j + 1], arr[j]);
 }
 for (int x = 0; x < arr.length; x++) {
   res += Math.min(leftMax[x], rightMax[x]) - arr[x];
 }
 return res;
}
    } 

