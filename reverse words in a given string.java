


class Solution 
{
    //Function to reverse words in a given string.
    String reverseWords(String S)
    {
        StringTokenizer ss=new StringTokenizer(S,".");
        int k=0;
        String g="";
        int n=ss.countTokens();
        String s[]=new String[100000];
        while(ss.hasMoreTokens())
        {
            s[k]=ss.nextToken();
            k++;
        }
        for(int i=n-1;i>=0;i--)
        {
            g=g+s[i]+".";
        }
        g=g.substring(0,g.length()-1);
        return g;
    }
}
