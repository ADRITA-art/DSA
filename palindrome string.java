

//User function Template for Java

class Solution {
    int isPalindrome(String S) {
        String s="";
        char ch=' ';
        for(int i=S.length()-1;i>=0;i--)
        {
            ch=S.charAt(i);
            s=s+ch;
        }
        if(s.equals(S)==true)
        return 1;
        else
        return 0;
    }
};
