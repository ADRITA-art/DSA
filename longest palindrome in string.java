

class Solution{
    static String longestPalin(String S){// calculcharAting size of string
        String str="";
        if (n < 2)
            return S;
        int maxLength = 1,start=0;
        int low, high;
        for (int i = 0; i < n; i++) {
            low = i - 1;
            high = i + 1;
            while ( high < n && S.charAt(high) == S.charAt(i))                                   
                high++;
      
            while ( low >= 0 && S.charAt(low) == S.charAt(i))                
                low--;
      
            while (low >= 0 && high < n && S.charAt(low) == S.charAt(high) ){ 
                  low--;
                high++;
        }

        int length = high - low - 1;
        if (maxLength < length){
            maxLength = length;
            start=low+1;
        }
    }    
    
   str= S.substring(start, start + maxLength );
   return str;
    
      
 }
        
    }
