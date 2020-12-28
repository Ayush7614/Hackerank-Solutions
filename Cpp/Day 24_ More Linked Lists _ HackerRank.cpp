
          Node* removeDuplicates(Node *head)
          {
             vector<int> s;
            if(head == NULL) return NULL;
            Node* n = head;
            Node* prev = head;
            while(n != NULL) {
             if(find(s.begin(),s.end(),n->data) != s.end()) 
                prev->next = n->next;
             else {
                s.push_back(n->data);
                prev = n;
             }
             n = n->next;
            }
            return head;
        }

