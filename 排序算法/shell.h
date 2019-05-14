void shell_sort(int* a, int len) {
    int gap = 4;
    while (gap > 0) {
        for (int i = gap; i < len; i++)  {
            int temp = a[i];
            int j;
            for ( j = i - gap; j >= 0 && temp < a[j]; j -= gap) {
                    a[j + gap] = a[j]; 
            }
            a[j + gap] = temp;
        }
        gap /= 2;
    }
}