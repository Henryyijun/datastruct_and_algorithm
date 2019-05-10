#include <iostream>
typedef int TYPE;

struct node {
    /* data */
    TYPE data;
    node* next;
    node (TYPE d) {
        data = d;
        next = NULL;
    }
};

node* create_list(int len) {
    /*
        创建长度为len的单链表
        尾插法
        返回链表头节点
    */
    node* head = new node(0);
    node * tail = head;
    for (int i = 0; i < len; i++) {
        TYPE new_data;
        std::cin >> new_data;
        node *p = new node(new_data);
        tail->next = p;
        tail = tail->next;
    }
    tail->next = NULL;
    return head;
}

node* create_list1(int len) {
    /*
        创建长度为len的单链表
        头插法
        返回链表头节点
    */
    node* head = new node(0);
    for (int i = 0; i < len; i++) {
        TYPE new_data;
        std::cin >> new_data;
        node *p = new node(new_data);
        p->next = head->next;
        head->next = p;
    }
    return head;
    
}
void show_list(node* head) {
    node* p = head->next;
    while (p != NULL) {
        std::cout << p->data << " ";
        p = p->next;
    }
    std::cout << std::endl;
}

bool insert_data(node* head, int index, TYPE value) {
    /*
        在链表索引位置为index的地方插入value
    */
    node* p = head;
    int i = 0;
    for (; p != NULL && i < index; i++, p = p->next);
    node* pnew = new node(value);
    pnew->next = p->next;
    p->next = pnew;
    return true;
}

bool delete_data(node* head, int index) {
    node *p = head;
    int i = 0;
    for (; p != NULL && i < index; i++, p = p->next);
    node *d = p->next;
    p->next = p->next->next;
    delete d;
    return true;
}

void reverse_list(node* &head) {
    node* dummy = head;
    if (head->next->next == NULL) return;
    node* pre = dummy->next;
    node* cur = pre->next;
    while (cur != NULL) {
        pre->next = cur->next;
        cur->next = dummy->next;
        dummy->next = cur;
        cur = pre->next;
    }
}

void sort_list(node *head, int len) {

}