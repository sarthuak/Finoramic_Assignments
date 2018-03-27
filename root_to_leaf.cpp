void findans(vector< vector<int> >&ans,vector<int> con,TreeNode *A,int B)
{
    // vector<int>now = con;
    B = B - A->val;
    con.push_back(A->val);
    if(A->left==NULL && A->right==NULL && B==0)
        {
            ans.push_back(con);
            return;
            
        }
        
    if(A->left)
        findans(ans,con,A->left,B);
    
    if(A->right)
        findans(ans,con,A->right,B);
    
}

vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<vector <int> > ans;
    vector<int> yo;
    if(A==NULL)
        return ans;
    findans(ans,yo,A,B);
    
    return ans;
}
