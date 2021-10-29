#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
//  this function is used to calculate the hight of the binary tree 
int cal_hight_of_the_tree(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lefthight=cal_hight_of_the_tree(root->left);
    int righthight=cal_hight_of_the_tree(root->right);

    return max(lefthight,righthight)+1;
}

// now let us write the function to calculate the diameter of the tree i.e logest distance between two nodes
int cal_diameter(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lefthight=cal_hight_of_the_tree(root->left);
    int righthight=cal_hight_of_the_tree(root->right);
    int curent_diameter=lefthight+righthight+1;
    int diameterleft=cal_diameter(root->left);
    int diameterright=cal_diameter(root->right);

    return max(curent_diameter,max(diameterleft,diameterright));
} 
// this function is optimized version of the cal_diameter, its time complexity O(n)
int cal_diameter2(node* root,int *hight)
{ 
    if(root==NULL)
    {
        *hight=0;
        return 0;
    }
    int lh=0;
    int rh=0;
    int diameterleft=cal_diameter2(root->left,&lh);
    int diameterright=cal_diameter2(root->right,&rh);
    int curent_diameter=lh+rh+1;
    *hight= max(lh,rh)+1;
    return max(curent_diameter,max(diameterleft,diameterright));
}
// now let us try pirnt the right view of the binary tree(for more information see book)
void rightview(node* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node*> q;
    q.push(root);
    while (!q.empty())
    {
        int n;
        n=q.size();
        for(int i=0;i<n;i++)
        {
            node* curr=q.front();
            q.pop();

            if(i==n-1)
            {
                cout<<curr->data<<"->";
            }
            if(curr->left!=NULL)
            {
                q.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                q.push(curr->right);
            }
        }
    }
    

}



//  now let us write the fun to print left view of the binary tree

void leftview(node* root)
{
    if(root==NULL)
    {
        return;
    }

    // now we will create the queue to store the data of the binary tree
    queue<node*> q;
    q.push(root);
    // now we will create loop to treverse the binary tree

    while(!q.empty())
    {
        // next we create variable n in which we will store total no of variable 
        int n=q.size();
        //next we will start adding the value to the queue  
        for(int i=1;i<=n;i++)
        {
            node* current=q.front(); // here we are storing the first values into the 'current' 
            q.pop();// next we are poping the values from the queue
        
            if(i==1)
            {
                cout<<current->data<<"->";
            }
            if (current->left!=NULL)
            {
                q.push(current->left);
            }
            if(current->right!=NULL)
            {
                q.push(current->right);
            }

        }
    }
}

int main()
{
    struct node* root;
    root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->right->left->left=new node(8);

    cout<<cal_hight_of_the_tree(root)<<endl;
    cout<<cal_diameter(root)<<endl; // the time complexity of this function is O(n^2)
    // -> which is not good time complexity
    int hight =0;
    cout<<cal_diameter2(root, &hight)<<endl;

     rightview(root);
    cout<<endl;
    leftview(root);

}