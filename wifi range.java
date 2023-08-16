class Solution 
{ 
    boolean wifiRange(int N, String S, int X) 
    { 
        int ran=0;
        for(int i=0;i<N;i++)
        {
            if(S.charAt(i)=='1')
            ran=X;
            else
            ran=ran-1;
            if(ran<-X)
            return false;
        }
        if(ran<0)
        return false;
        else
        return true;
    }
} 
