
	void levelOrder(Node * root){
     
    if(root==NULL)
         return;

    queue<Node*> st;

    st.push(root);

    while(1)
    {
        int countNodes=st.size();

        if(countNodes==0)
            break;


        while(countNodes--)
        {
            Node* temp = st.front();
            cout<<temp->data<<" ";
            st.pop();

            if(temp->left)
                st.push(temp->left);

            
            if(temp->right)
                st.push(temp->right);
        }
    }
}

