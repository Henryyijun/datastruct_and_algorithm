#include <iostream>
#include "bubble_sort.h"
#include "quick_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"

void show_array(int *a, int len) {
    for (int i = 0; i < len; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}
const int num = 5;