  //Storing the Node
   vector<int>res;
   // Need An queue here
   queue<Node*>q;
   if(root==NULL) return res;
   q.push(root);
   while(!q.empty()){
       Node*temp=q.front();
       q.pop();
       while(temp!=NULL){
           if(temp->left!=NULL) 
           {
               q.push(temp->left);
           }
           res.push_back(temp->data);
           temp=temp->right;
       }
   }
   return res;
