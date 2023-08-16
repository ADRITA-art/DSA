

/* Node is defined as
class Node {
    int data;
    Node next;
    Node(int d) {
        data = d;
        next = null;
    }
}*/

class Solution
{
    // Print elements of a linked list on console
    // head pointer input could be NULL as well
    // for empty list
    void display(Node head)
    {
        Node p=head;
        while(p!=null)
        {
            System.out.print(p.data+" ");
            p=p.next;
        }
    }
}
