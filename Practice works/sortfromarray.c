#include <stdio.h>

int main() {
    int a[100], even[100], odd[100];
    int n, i, j, temp;
    int e = 0, o = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0) {
            even[e] = a[i];
            e++;
        } else {
            odd[o] = a[i];
            o++;
        }
    }

    // Sort even elements
    for (i = 0; i < e; i++) {
        for (j = i + 1; j < e; j++) {
            if (even[i] > even[j]) {
                temp = even[i];
                even[i] = even[j];
                even[j] = temp;
            }
        }
    }

    // Sort odd elements
    for (i = 0; i < o; i++) {
        for (j = i + 1; j < o; j++) {
            if (odd[i] > odd[j]) {
                temp = odd[i];
                odd[i] = odd[j];
                odd[j] = temp;
            }
        }
    }

    printf("Sorted even elements: ");
    for (i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    printf("\nSorted odd elements: ");
    for (i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}