    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL or ( root->right==NULL && root->left==NULL))//空节点或者子节点
            return 0;
        if(root->left!=NULL && root->left->right==NULL && root->left->left==NULL/* && (root->right==NULL or root->right->left==NULL)*/) {
        //只要判断是左叶子就好了,右边的东西递归下去
            return root->left->val + sumOfLeftLeaves(root->right);//用心感受这里的+ sumOfLeftLeaves(root->right)
        }        
        return sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
        
    }
