// #######################
        // linked list
// #########################
//  linked list is linear data structure which stores the list of the values 
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;                                 // defining the class for the linked list 
    node(int val){
        data= val;
        next=NULL; 
    }
};

void add_value_to_the_front(node* &head, int val)
{
    node* n= new node(val);
    n->next=head; // here address of the variable is stored in the next 
    head=n; // address of the new variable will be stored in head 
}

void add_value_to_the_last(node* &head, int val)
{
    node* n= new node(val);

    if (head == NULL)
    {
        head=n;
        return;
    }
    node* temp=head; 
    while(temp->next!= NULL)            // '->' this symbol is called member access operator. 
    {                                   // this symbol is used when ever we define pointer to class 
        temp=temp->next;        
    }
    temp->next=n;
}

// bool search(node* head ,int k) // this function is used to search the value in the list 
// {
//     node* temp=head; 
//     while(temp!=NULL)
//     {
//         if(temp->data==k)
//         {
//             return 1;
//         }
//         temp=temp->next;
//     }
//     return 0;

// }
// void delete_at_head(node* &head)
// {
//     node* todelete=head;
//     head=head->next;
//     delete todelete;
// }
// void deletion(node* &head,int val)
// {
//     if(head==NULL) // this condition is when we have no values entered
//     {               
//         return;
//     }
//     if(head->next==NULL) // this case is applicable when we have only one value and head->next will be NULL  
//     {
//         delete_at_head(head);
//         return;
//     }
//     node* temp=head;
//     while(temp->next->data!=val)// this function can delete only n+1th address but it can't delete first term
//     {                           // therefore we need to create new function to delete first term
//         temp=temp->next;
//     }
//     node* todeletes=temp->next; //  to delete the value 
//     temp->next=temp->next->next; //to store the address  of n+1 term  
//     delete todeletes;
// }

// /*
//  #########################################################
//          reverse a linklist function
//  #########################################################
//  there are two method
//   1. Iterative 
//   2. Recursive  
// Iterative
// Idea: We will keep three-pointers, for the previous, current, and next node.
// Hint: We have to connect current->next to the previous node, and then
// move to the next node
// */

// node* reverse_by_iterative(node* &head)
// {
//     node* privious=NULL;
//     node* current=head;
//     node* nextptr;
//     while(current!=NULL)
//     {
//         nextptr=current->next;
//         current->next=privious;
//         privious=current;
//         current=nextptr;
//     }
//     return privious;
// }
// node* reverse_by_recursive(node* &head)
// {
//     //base case
//     if(head==NULL || head->next==NULL)
//     {
//         return head;
//     }
//     node* newhead=reverse_by_recursive(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return newhead;
// }

// // ########################################################################################

// /*
//              to reverse k nodes in the linked list 
// example 1->2->3->4->5->6->NULL
//         2->1->4->3->6->5->NULL

// */
// node* reverse_k_nodes(node* &head,int k)
// {
//     node* previous=NULL;
//     node* current=head;
//     node* nextptr;
//     int count=0;
//     while(current!=NULL && count<k )
//     {
//         nextptr=current->next;
//         current->next=previous;
//         previous=current;
//         current=nextptr;
//         count++;
//     }
//     if(nextptr!=NULL)
//     {
//         head->next= reverse_k_nodes(nextptr, k);
//     }
//     return previous;
// }
// // first we need to create an input which has a cycle in it
// void makecycle(node* &head, int pos) 
// {
//     node* temp=head;
//     node* startnode;
//     int count=0;
//     while(temp->next!=NULL)
//     {
//         if(count==pos)
//         {
//             startnode=temp;
//         }
//         temp=temp->next;
//         count++;
//     }
//     temp->next=startnode;
// } 
// // --------------------------------------------&&&&&&&&&&&&&&&&&&&------------------------------------------------
// /*  CYCLE DETECTION IN THE LINKED LIST 
// Floyd’s cycle detection
// Also know as hare and tortoise method, and slow and fast pointer method.
// Idea: Slow and pointers are initially at the start. Slow takes one step. Fast takes
// two-step at a time*/
// bool detect_cycle(node* head)
// {
//     node* slow=head;
//     node* fast=head;
//     while(fast!=NULL && fast->next!=NULL)
//     {
//         slow=slow->next;
//         fast=fast->next->next;
//         if(slow==fast)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }

// // let us try to remove this cycle (written in the book)
// void removecycle(node* &head)
// {
//     node* slow=head;
//     node* fast=head;
//     // if we use only while condition then both slow and fast are at the same position 
//     // therefore we use do while 
//     do
//     {
//         slow=slow->next;
//         fast=fast->next->next;
//     } while (slow!=fast);
//     slow=head;
//     while(slow->next!= fast->next )
//     {
//         slow=slow->next;
//         fast=fast->next;
//     }
//     fast->next=NULL; 
// }


void display(node* head)
{
    node* temp= head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;;
}

// // int main()
// // {
//     node* head=NULL;
//     add_value_to_the_last(head,1);
//     add_value_to_the_last(head,2);
//     add_value_to_the_last(head,3);
//     add_value_to_the_last(head,4);
//     add_value_to_the_last(head,5);
//     add_value_to_the_last(head,6);
//     add_value_to_the_last(head,9);
//     display(head);
    
//     // add_value_to_the_front(head, 23);
//     // display(head);
//     // cout<<search(head,3)<<endl;
    
//     // deletion(head,3);
//     // display(head);
    
//     // deletion(head,23); // this function will not work
    
//     // delete_at_head(head);
//     // display(head);

//     //  to get reverse of the linked list 
    
//     //node* hi=reverse_by_iterative(head);
//     // display(hi); 
    
//     //  node* hy=reverse_by_recursive(head);
//     // display(hy); 
    
    
//     // node* newnode=reverse_k_nodes(head,2); // to reverse k nodes in the linked list 
//     // display(newnode);
    
//     // makecycle(head, 3);
//     // cout<<detect_cycle(head)<<endl;
//     // removecycle(head);
//     // cout<<detect_cycle(head);



// // }
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                                    doubly linked list 
 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
 */
// class dnode
// {
//     public:
//     int data;
//     dnode* next;
//     dnode* prev;
//     dnode(int val)
//     {
//         data= val;
//         next=NULL;
//         prev=NULL;
//     }
// };
// void insert_at_head(dnode* &head,int val)
// {
//    dnode* n=new dnode(val);
//     n->next=head;
//     if(head!=NULL) // this condition activates when we have only one value in the linklist 
//     {
//     head->prev=n; 
//     }
//     head=n;
// }

// void insert_at_tail(dnode* &head, int val)
// {
//     if(head==NULL)
//     {
//         insert_at_head(head,val);
//         return;
//     }
    
//     dnode* n=new dnode(val);
//     dnode* temp=head;

//     while(temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=n;
//     n=temp->prev;
// }
//  void delete_the_head(dnode* &head)
//  {
//      dnode* todelete=head;
//      head=head->next;
//      head->prev=NULL;

//      delete todelete;
//  }
// //  to delete the value in the list
// void ddelete(dnode* &head,int pos)
// {
//     if(pos==1)
//     {
//         delete_the_head(head);
//     }
//     dnode* temp=head;
//     int count=1; // here we delete the values of the current position
//     while(temp->next!=NULL && count!=pos)  
//     {
//         temp=temp->next;
//         count++;
//     }
//     temp->prev->next=temp->next;
//     if(temp->next!=NULL)
//     {
//     temp->next->prev=temp->prev;
//     }
//     delete temp;
// }

// void display1(dnode* head)
// {
//     dnode* temp= head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }

//     cout<<"NULL"<<endl;;
// }
// int main()
// {
//     dnode* head=NULL;
//     insert_at_tail(head,1);
//     insert_at_tail(head,2);
//     insert_at_tail(head,3);
//     insert_at_tail(head,4);
//     insert_at_tail(head,5);
//     insert_at_tail(head,6);
//      display1(head);
//     ddelete(head,3);
//     display1(head);


// }
// ########################################################################
                    // append last k-nodes at the starting of the list 
// ########################################################################
// to append k nodes we need to find the length of linked list 
// int length(node* head){
// int l=0;
// while(head!=NULL)
// {
//     head= head->next;
//     l++;
// }
// return l;
// } 

// node* kappend(node* &head, int k)
// {
//     node* newtail;
//     node* newhead;
//     node* tail=head;
//     int l=length(head);
//     int count=1;
//     k=k%l;// when k is bigger than k at that time it will be useful 
//     while(tail->next!=NULL)
//     {
//         if(count==l-k)
//         {
//             newtail=tail;
//         }
//         if(count==l-k+1)
//         {
//             newhead=tail;
//         }
//         tail=tail->next;
//         count++;
//     }
//     newtail->next=NULL;
//     tail->next=head;

//     return newhead;
// }
// void add_value_to_the_last(node* &head, int val)
// {
//     node* n= new node(val);

//     if (head == NULL)
//     {
//         head=n;
//         return;
//     }
//     node* temp=head; 
//     while(temp->next!= NULL)            // '->' this symbol is called member access operator. 
//     {                                   // this symbol is used when ever we define pointer to class 
//         temp=temp->next;        
//     }
//     temp->next=n;
// }

// void display(node* head)
// {
//     node* temp= head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }

//     cout<<"NULL"<<endl;;
// }


// int main()
// {
//     node* head=NULL;
//     int arr[]={1,2,3,4,5,6};
//     for(int i=0;i<6;i++)
//     {
//     add_value_to_the_last(head,arr[i]);
//     }
//     display(head);
//     node* hi=kappend(head,4);
//     display(hi);
// }

// to find the intersection point of the two linked list
// int intersection(node* head1,node* head2)
// {
//     int l1=length(head1);
//     int l2=length(head2);
//     node* ptr1;
//     node* ptr2;
//     int d=0;
//     if(l1>l2)
//     {
//         d=l1-l2;
//         ptr1=head1;
//         ptr2=head2;
//     }
//     else 
//     {
//         d=l2-l1;
//         ptr1=head2;
//         ptr2=head1;
//     }
//     while(d)
//     {
//         ptr1=ptr1->next;
//         if(ptr1==NULL)
//         {
//             return -1;
//         }
//         d--;
//     }
//     while(ptr1!=NULL,ptr2!=NULL)
//     {
//         if(ptr1==ptr2)
//         {
//             return ptr1->data;
//         }
//             return -1;
//     }

// }
//                           //here we need to create the linked list in such a way that the linked list 
//                           //   will be joinind at the node at some point 
                        
// // merging two sorted linked list 
// node* merge(node* &head1, node* &head2)
// {
//     node* ptr1=head1;
//     node* ptr2=head2;
//     node* dummynode=new node(-1);
//     node* ptr3=dummynode;
//     while(ptr1!=NULL && ptr2!=NULL)
//     {
//         if(ptr1->data > ptr2->data)
//         {
//           ptr3->next=ptr2;
//           ptr2=ptr2->next; 
//         }

//         else
//         {
//             ptr3->next=ptr1;
//             ptr1=ptr1->next;
//         }
//         ptr3=ptr3->next;
//     }
//     while(ptr1!=NULL)      // if any one of the linked list has com to an end(null) then the values 
//                             // of the other linked list needs to be printed at the last of the ptr3  
//     {
//         ptr3->next=ptr1;
//         ptr1=ptr1->next;
//         ptr3=ptr3->next;
//     }
//     while(ptr2!=NULL)
//     {
//         ptr3->next=ptr2;
//         ptr2=ptr2->next;
//         ptr3=ptr3->next;
//     }
//     return dummynode->next;
// }

// //  same problem with recursive method 

// node* mergerecursive(node* &head1,node* &head2)
// {
//     node* ans;
//     // base condition
//     if(head1==NULL)
//     {
//         return head2;
//     }
//     else if(head2==NULL)
//     {
//         return head1;
//     }
//     if (head1->data>head2->data)
//     {
//         ans=head1;
//         ans->next=mergerecursive(head1,head2->next);
//     }
//     else
//     {
//           ans=head2;
//         ans->next=mergerecursive(head1->next,head2);
//     }

//     return ans;

// }
 
//  int main()
//  {  node* head1=NULL;
//     node* head2=NULL;
//      int arr1[]={2,5,8};
//      int arr2[]={1,3,6,9,10};
//      for(int i=0;i<3;i++)
//      {
//      add_value_to_the_last(head1,arr1[i]);
//      }
//      for(int i=0;i<5;i++)
//      {
//      add_value_to_the_last(head2,arr2[i]);
//      }
//     display(head1);
//     display(head2);
//     // node* x1= merge(head1,head2);
//     node* x2= mergerecursive(head1,head2);

//     display(x2);
    
//  }
/*##################################################################################
                        circular linked list
in this tail be will connected to the head(address of head will be stored in the tail) 
************************************************************************************
*/ 
// class cnode
// {
//     public:
//     int data;
//     cnode* next;
//     cnode(int val)
//     {
//         data=val;
//         next=NULL;
//     }
     
// };
// void insert_at_head(cnode* &head,int val)
// {  cnode* n1 =new cnode(val);
//     cnode* temp=head;
//     while(temp->next!=head)
//     {
//         temp=temp->next;
//     }
//     temp->next=n1;
//     n1->next=head;
//     head=n1;
// }
// void insert_at_tail(cnode* &head,int val)
// {
//     cnode* n1 =new cnode(val);
//     if(head==NULL)
//     {
//      insert_at_head(head,val);   
//     }
//     cnode* temp=head;
    
//     while(temp->next!=head)
//     {
//         temp=temp->next;
//     }
//     temp->next=n1;
//     n1->next=head;
// }

// void display (cnode* head)
// {
//     cnode* temp=head; 
//  do
//  {
//      cout<<temp->data<<"->";
//      temp=temp->next;
//  } while (temp!=head);
//  cout<<"NULL"<<endl;
    
// }

// int main()
// {
//     cnode* head=NULL;
//     int a[]={1,2,3,4,5};
//     for(int i=0;i<5;i++)
//     {
//         insert_at_tail(head,a[i]);
//     }
//     display(head);
// }

//  to put position nodes after odd position nodes

void evenafterodd(node* &head)
{
    node* odd=head;
    node* even=head->next;
    node* starteven=even;

    while(odd->next!=NULL && even->next!=NULL)
    {
        odd->next=even->next;
        odd =odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=starteven;
    if(odd->next==NULL)
    {
        even->next=NULL;
    }

}
int main()
{
    node* head=NULL;
    int a[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++)
    {
        add_value_to_the_last(head,a[i]);
    }
    display(head);
    evenafterodd(head);
    display(head);
    
}