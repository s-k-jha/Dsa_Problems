#include <vector>
#include <queue>
#include <iostream>
using namespace std;
template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(T data)
    {
        this->data = data;
    }

    ~TreeNode()
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
    }
};
TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter root data: ";
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (!pendingNodes.empty())
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int numChildren;
        cout << "Enter the number of children of " << front->data << ": ";
        cin >> numChildren;
        for (int i = 0; i < numChildren; i++)
        {
            int childData;
            cout << "Enter child " << i + 1 << " of " << front->data << ": ";
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

void printLevelWise(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<TreeNode<int> *> pending;
    pending.push(root);
    while (!pending.empty())
    {
        TreeNode<int> *front = pending.front();
        pending.pop();
        cout << front->data << ":";
        for (int i = 0; i < front->children.size(); i++)
        {
            cout << front->children[i]->data << " ";
            if (i != front->children.size() - 1)
            {
                cout << ",";
            }
            pending.push(front->children[i]);
        }
        cout << endl;
    }
}
int sumOfNodes(TreeNode<int>*root){
    if(root==NULL){
        return 0;
    }
    int sum=root->data;
    for(int i=0;i<root->children.size();i++){
        sum+=sumOfNodes(root->children[i]);
        
    }
    cout<<"sum is:"<<sum;
    // cout<<"sum is :"<< sum;
}

TreeNode<int>*maxDataNode(TreeNode <int> *root){
    if(root==NULL){
        return root;
    }
    TreeNode<int>*maximum=root;
    for(int i=0;i<root->children.size();i++){
        TreeNode<int>*temp=maxDataNode(root->children[i]);
        if(temp->data>maximum->data){
            maximum=temp;
        }
    }
    cout<<"maximum"<<maximum<<endl;
}

int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    cout << "Printing tree level-wise:" << endl;
    printLevelWise(root);
    sumOfNodes(root);
    TreeNode<int>* result = maxDataNode(root);
    cout<<result;
    return 0;
}