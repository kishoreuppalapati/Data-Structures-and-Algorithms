void delete_Beg() {
    struct node *toDelete;
    if(head == NULL) {
        printf("List is already empty.");
    }
    else {
        toDelete = head;
        head = head->next;
        printf("\nData deleted = %d\n", toDelete->data);
        free(toDelete);

        printf("Deleted ffrom list.");
    }
}
