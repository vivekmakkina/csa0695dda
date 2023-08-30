#include <stdio.h>
int main() {
    int numItems, maxWeight, totalWeight = 0,overloadedItemCount = 0,itemWeight;;
    printf("Enter the maximum weight of the container: ");
    scanf("%d", &maxWeight);
    printf("Enter the number of items: ");
    scanf("%d", &numItems);
    for (int i = 1; i <= numItems; i++) {
        printf("Enter the weight of item %d: ", i);
        scanf("%d", &itemWeight);
        totalWeight += itemWeight;
        if (totalWeight > maxWeight) {
            overloadedItemCount++;
            printf("Container is overloaded after adding item %d.\n", i);
        }
    }
    if (overloadedItemCount == 0) {
        printf("Container is not overloaded.\n");
    } else {
        printf("Container is loaded with %d items.\n", numItems-overloadedItemCount);
    }
}
