#include <bits/stdc++.h>

using namespace std;

typedef struct node;
typedef node *tree;
struct node {
    int data;
    tree lchild, rchild;
};

tree bt;

void insert(tree &bt, int n) {
    if (bt) {
        if (n <= bt->data)
            insert(bt->lchild, n);
        else
            insert(bt->rchild, n);
    } else {
        bt = new node;
        bt->data = n;
        bt->lchild = bt->rchild = NULL;
    }
}

void preorder(tree bt) {
    if (bt) {
        cout << bt->data << " ";
        preorder(bt->lchild);
        preorder(bt->rchild);
    }
}

int main() {
    int i, n;
	freopen("bst.in","r",stdin);
	freopen("bst.out","w",stdout);
    while (scanf("%d", &n) != EOF) {
        insert(bt, n);
    }
    preorder(bt);
}