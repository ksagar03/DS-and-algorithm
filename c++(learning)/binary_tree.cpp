#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

void preorder(struct node* root)
{
    if(root==NULL)
    {
        return; 
    }
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);

    //  cout<<"NULL"<<endl;

}
void inorder(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);

    // cout<<"NULL"<<endl;

}
void postorder(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"->";

    // cout<<"NULL"<<endl;
}

int curr_pos(int ino[],int start,int end,int curr)
{
    for(int i=start;i<=end;i++)
    {
        if (ino[i]==curr)
        {
            return i;
        }
    }
 return -1;
}
// this function is used when we have postorder array and inorder array 
//  when postorder and preorder is given then we can't build  a tree 
node* buildtreepost(int post[],int ino[],int start,int end)
{
    static int idxy=11;

    if(start>end)
    {
        return NULL;
    }

    int curr= post[idxy];
    idxy--;
    node* root=new node(curr);
    int poss=curr_pos(ino,start,end,curr);

    if(start==end)
    {
        return root;
    }
    root->right=buildtreepost(post,ino,poss+1,end);
    root->left=buildtreepost(post,ino,start,poss-1);

    return root;


}
//this node buildtree is used when preorder and inorder arry is given
node* buildtree(int pre[],int ino[],int start,int end) 
{
    static int idx=0;
    if(start>end)
    {
        return NULL;
    }
    int curr=pre[idx];
    idx++;
    node* root=new node(curr);
    int pos=curr_pos(ino,start,end,curr);
    if(start==end)
    {
        return root;
    }
    root->left=buildtree(pre,ino,start,pos-1);
    root->right=buildtree(pre,ino,pos+1,end);

    return root;
}



// int main()
// {
//     int post[]={8,10,11,9,4,5,2,6,7,3,1};
//     int pre[]={1,2,4,8,9,10,11,5,3,6,7};
//     int ino[]={8,4,10,9,11,2,5,1,6,3,7};
//     node* xy=buildtree(pre,ino,0,11);
//     node* xyz=buildtreepost(post,ino,0,11);
//      postorder(xyz);
//     // inorder(xy);

//     return 0;




// }

// let us wirte a function to count total number of nodes in the binary tree

int count_nodes(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    // return count_nodes(root->left) +count_nodes(root->right)+1;// this command will will give total no of nodes 
    return count_nodes(root->left) +count_nodes(root->right)+root->data;// this command will will give sum of the data of total no of nodes 

}

//  now leat us find the kth level order
int sum_of_kth_level(node* root, int k)
{
    if(root==NULL)
    {
        return -1; // here we have given -1 because in root we have zero data.
    }
    queue<node*> Q;
    Q.push(root);
    Q.push(NULL);
    int level=0;
    int sum=0;
    while(!Q.empty())
    {
        node* current=Q.front();
        Q.pop();
    if (current!=NULL)
    {
        if(level==k)
        {
            sum+=current->data;
        }
        if(current->left!=NULL)
        {
            Q.push(current->left);
        }
        if(current->right!=NULL)
        {
            Q.push(current->right);
        }
        else if(!Q.empty())
        {
             Q.push(NULL);
                level++;   
        }
    }

    }
    return sum;
}

//  this function is levelorder treversal
void leveltraversal(node* head)
{
    if(head==NULL)
    {
        return;
    }
    queue<node*> q; 
    q.push(head);// this command will push first element address to queue(level 0)
    q.push(NULL);// this command is to determine the end level order
    while(!q.empty())
    {
        node* curr=q.front();
         q.pop();
        if (curr!=NULL)
        {
            cout<<curr->data<<",";
            if(curr->left!=NULL)
            {
                q.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                q.push(curr->right);
            }    
        }  
        else if(!q.empty())
        {
            q.push(NULL);
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
    // cout<<count_nodes(root);

//     preorder(root);
//      inorder(root);
//     postorder(root);
//  leveltraversal(root);
cout<<sum_of_kth_level(root, 1);
}
