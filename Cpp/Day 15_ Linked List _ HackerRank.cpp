

      Node* insert(Node *head,int data)
      {
          
          Node* new_node=new Node(data);
          Node* temp =head;
          
        if(head==NULL)
        {
            head=new_node;
        }
         else
         {

          while(temp->next!=NULL)
          {
            temp=temp->next;
          }

         temp->next=new_node;
         }
         return head;

      }

