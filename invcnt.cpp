#include <iostream>
#include <stdio.h>
#include <limits.h>
#include <algorithm>
using namespace std;
const int size = 1000000;
long long int array[size];
long long int merge(long long int a[], long long int beg, long long int mid,
    long long int end) {
    long long int inverse = 0;
    long long int lsize = (mid - beg) + 1;
    long long int rsize = (end - mid);
    long long int left[lsize + 1];
    long long int right[rsize + 1];
    long long int i;
    long long int j = beg;
    for (i = 0; i < lsize; ++i, ++j) {
        left[i] = a[j];
    }
    j = mid + 1;
    for (i = 0; i < rsize; ++i, ++j) {
        right[i] = a[j];
    }
    left[lsize] = LONG_LONG_MAX;
    right[rsize] = LONG_LONG_MAX;
    j = 0;
    i = 0;
    for (int k = beg; k <= end; ++k) {
       if (left[i] <= right[j]) {
            a[k] = left[i];
            ++i;
       } else {
            a[k] = right[j];
            inverse += (lsize - i);
            ++j;
      }
    }
   return inverse;
}

long long int merge_sort(long long int iArray[], long long int beg,
        long long int end) {
     if (beg < end) {
        long long int mid;
        long long int left = 0;
        long long int right = 0;
        long long int total = 0;
        mid = (beg + end) / 2;
        left = merge_sort(iArray, beg, mid);
        right = merge_sort(iArray, mid + 1, end);
        total = merge(iArray, beg, mid, end);
        return left + right + total;
     } else {
         return 0;
     }
}
