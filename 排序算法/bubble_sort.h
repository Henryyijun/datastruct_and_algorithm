/*
  冒泡排序
*/

void bubble_sort(int *a, int len) {
    for (int i = 1; i < len; i++) {
        for (int j = 0;j < len - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}


void bubble_sort_op(int *a, int len) {
    for (int i = 1; i < len; i++) {
        int flag  = 0;
        for (int j = 0; j < len - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
}

