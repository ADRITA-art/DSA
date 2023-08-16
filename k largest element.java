

class Solution {
    int[] kLargest(int[] arr, int n, int k) {
       
        int[] A = new int[k];
        PriorityQueue<Integer> q = new PriorityQueue<>(Collections.reverseOrder());
        for(int i=0; i<n; i++){
            q.add(arr[i]);
        }
        for(int i=0; i<k; i++){
            A[i] = q.poll();
        }
        return A;
    }
}
