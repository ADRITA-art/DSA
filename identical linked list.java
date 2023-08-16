class Solution {
    
    //Function to check whether two linked lists are identical or not.
    public boolean isIdentical (Node head1, Node head2){
        Node p=head1;
        Node k=head2;
        int l=1,m=1;
        while(p!=null)
        {
            l++;
            p=p.next;
        }
        while(k!=null)
        {
            m++;
            k=k.next;
        }
        p=head1;
        k=head2;
        if(l==m)
        {
        while((p!=null)&&(k!=null))
        {
            if(p.data==k.data)
            {
                p=p.next;
                k=k.next;
            }
            else
            return false;
        }
        
        return true;
        }
        else
        return false;
        
    }
}
