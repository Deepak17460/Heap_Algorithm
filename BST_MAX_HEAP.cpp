class Solution{
    void Inorder(vector<int>&Stor,Node* root){
        if(root==NULL){
            return ;
        }
            
        Inorder(Stor,root->left);
        Stor.push_back(root->data);
        Inorder(Stor,root->right);
        
    }
    
    void Postorder(vector<int>&Stor,Node*root,int &i){
        if(root==NULL){
            return ;
        }
            Postorder(Stor,root->left,i);
            Postorder(Stor,root->right,i);
            root->data=Stor[i++];
        
    }
  public:
    void convertToMaxHeapUtil(Node* root)
    {
        vector<int>Stor;
        // Using Inorder traversal
        Inorder(Stor,root);
        int ind=0;
        Postorder(Stor,root,ind);
    }    
};
