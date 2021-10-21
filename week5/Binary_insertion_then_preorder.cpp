/*
Use linked list concept to solve the problem, otherwise you will be disqualified from the contest.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node* newnode(int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

// int preorder(struct node* root, int n)
// {
//     int arr[n], i=0;
//     if(root==NULL){
//         return 0;
//     }
    
//     queue<node*> q;
//     q.push(root);
//     while(!q.empty()){
//         node *curr = q.front();
//         q.pop();
//         arr[i] = curr->data;
//         i++;
//         if(curr->left!=NULL){
//             q.push(curr->left);
//         }
//         if(curr->right!=NULL){
//             q.push(curr->right);
//         }
//     }
//     return arr;
    
// }

void printCurrentLevel(struct node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1) {
        printCurrentLevel(root->left, level - 1);
        printCurrentLevel(root->right, level - 1);
    }
}

void printLevelOrder(struct node* root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
        printCurrentLevel(root, i);
}
 

 
int height(struct node* node)
{
    if (node == NULL)
        return 0;
    else {
        int lheight = height(node->left);
        int rheight = height(node->right);
 
        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}


struct node* insert(struct node* root, int data)
{
    if(root==NULL){
        return newnode(data);
    }
    
    if((data)%4==0){
        root->left = insert(root->left, data);
    }
    else{
        root->right = insert(root->right, data);
    }
    return root;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,n, arr[100001], i,ans[100001];
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        // int mid = (n+1)/2;
        struct node* root = NULL;
        // newnode->data = arr[mid];
        // newnode->left = newnode->right = NULL;
        root = insert(root, arr[0]);
        for(int i=1;i<n;i++){
            insert(root, arr[i]);
        }
        
        printLevelOrder(root);
        printf("\n");
 
        // int ans = preorder(root, n);
        // for(i=0;i<n;i++){
        //     printf("%d\t", arr[i]);
        // }
        // printf("\n");
    }
    return 0;
}
