#include "linklist.h"

int main() {
    node *head = NULL;
    head = create_list(5);
    show_list(head);
    insert_data(head, 2, 10);
    show_list(head);
    delete_data(head, 2);
    show_list(head);
    return 0;
}