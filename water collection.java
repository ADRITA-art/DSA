class Solution {
    int maxWater(int arr[], int n) {
        // code here
        int l=0,h=n-1;
        int maxleft=0,maxright=0;
        int total =0;
        
        while(l<=h){
            if(arr[l]<=arr[h]){
                if(arr[l]<maxleft)
                total += maxleft-arr[l];
                else
                maxleft = arr[l];
                l++;
            }else{
                if(arr[h]<maxright)
                total += maxright - arr[h];
                else
                maxright = arr[h];
                h--;
            }
        }
        return total;
    
    }
}
