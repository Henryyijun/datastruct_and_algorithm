
void quick_sort(int* a, int l, int r) {
    int pivot = a[l];
    int left = l, right = r;
    if (l >= r) {
        return;
    }
    while (left < right) {
       
        while (left < right && (a[right] >= pivot)) {
            right--;
        }
        a[left] = a[right];
         while (left < right && (a[left] <= pivot)) {
            left++;
        }
        a[right] = a[left];
        
      
    }
    a[left] = pivot;
   
    quick_sort(a, l, left - 1);
    quick_sort(a, left + 1, r);

}