

class Solution{

    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long maxSubarraySum(int arr[], int n){
        
        long maxSum = Integer.MIN_VALUE;
        long Sum = 0;

        for (int i = 0; i < n; i++) {
            Sum += arr[i];

            if (Sum > maxSum) {
            maxSum = Sum;
            }

            if (Sum < 0) {
            Sum = 0;
            }
        }

        return maxSum;
    }

        
    }
    
