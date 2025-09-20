 #include <stdio.h>
int main()
 {
    int n;
    printf("give arrays size ");
    scanf("%d", &n);

    int arr[n];

    printf("arrays element:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("arrays in: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\nArray length is: %d\n", n);

    return 0;
}