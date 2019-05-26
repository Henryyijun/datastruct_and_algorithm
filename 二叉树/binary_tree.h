#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
typedef int TYPE;
struct tree_node {
    /* data */
    TYPE data;
    tree_node* left;
    tree_node* right;

    tree_node(TYPE data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

tree_node* create_tree_by_level(vector<TYPE> &array) {
    queue<tree_node*> nodes;
    
}