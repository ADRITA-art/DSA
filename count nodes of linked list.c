int getCount(struct Node* head)
    {
        struct Node *p=head;
        int k=1;
        while(p->next!=NULL)
        {
            k++;
            p=p->next;
        }
        return k;
        
    }
