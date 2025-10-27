#include<stdio.h>
struct node{
    int data;
    struct node *left, *right;
};
struct node* insert(struct node* root,int value){
    if(root==NULL){
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data=value;
        temp->left=temp->right=NULL;
        return temp;
    }
}
int main(){
    int choice, value;
    struct node* root = NULL;
    printf("BINARY SERACH TREE \n");
    printf("1.INSERTION \n");
    printf("2.SEARCHING \n");
    printf("3.INORDER TRAVERSAL \n");
    printf("4.PREORDER TRAVERSAL \n");
    printf("5.POSTORDER TRAVERSAL \n");
    printf("6.EXIT \n");
    printf("ENTER YOUR CHOICE: ");
    scanf("%d", &choice);
    switch (choice){
        case 1:
            printf("ENTER VALUE TO INSERT: ");
            scanf("%d", &value);
            root=insert(root, value);
            printf("%d INSERTED SUCCESSFULLY! \n", value);
            break;

    }
}

    