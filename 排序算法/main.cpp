#include "include.h"
using namespace std;

int main(int arg, char** argv) {
    int a[num] = {2, 1, 3, 1, 0};
    /*bubble_sort(a, num);
   
    bubble_sort_op(a, num);
    show_array(a, num);
    quick_sort(a, 0, num - 1);
    show_array(a, num);
    */
    shell_sort(a, num);
    show_array(a, num);

}