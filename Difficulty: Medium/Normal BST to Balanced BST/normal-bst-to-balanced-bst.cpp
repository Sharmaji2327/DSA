/*Structure of the Node of the BST is as
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {

  public:
 void dfsInorder(Node* root,vector<int>&nums){
      if(root==NULL)return;
      dfsInorder(root->left,nums);
      nums.push_back(root->data);
      dfsInorder(root->right,nums);
  }
  Node *buildbst(int start,int end,vector<int>&nums){
      if(start>end)return NULL;
      int mid=start+(end-start)/2;
      Node*root=new Node(nums[mid]);
    root->left=  buildbst(start,mid-1,nums);
     root->right= buildbst(mid+1,end,nums);
      return root;
  }
    Node* balanceBST(Node* root) {
        // Code here
        vector<int>nums;
        dfsInorder(root,nums);
        return buildbst(0,nums.size()-1,nums);
        
    }
};