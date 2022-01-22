#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int len) {
    int i, j, key, time = 0;
    for (i = 1; i != len && time < 5; ++i) {
        key = arr[i];
        j = i - 1;
        if ((j >= 0) && (arr[j] > key))time++;
        while ((j >= 0) && (arr[j] > key)) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    if (time == 5) {
        for (i = 0; i < len; i++) {
            printf("%d", arr[i]);
            if (i != len - 1)printf(" ");
        }
    }
    else printf("-1");
}
int main() {
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        int input = 0;
        int a[100] = { 0 }, len;
        for (len = 0; input != -1; len++) {
            cin >> input;
            if (input == -1)break;
            a[len] = input;
            //b[len]=input;
        }
        insertion_sort(a, len);
        if (i != n - 1)printf("\n");
    }
    return 0;
}