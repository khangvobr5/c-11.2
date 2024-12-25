#include <stdio.h>
void inMang(int arr[], int size) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    inMang(arr, n);
    return 0;
}

