#include "arvore.h"

int main() {
    Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Árvore em ordem: ");
    inorderTraversal(root);
    printf("\n");

    int searchValue = 666;
    Node* result = search(root, searchValue);
    if (result != NULL) {
        printf("%d encontrado na árvore.\n", searchValue);
    } else {
        printf("%d não encontrado na árvore.\n", searchValue);
    }

    return 0;
}
