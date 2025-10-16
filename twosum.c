#include <stdio.h>
#include <stdlib.h> // For malloc

// Function to find two numbers that sum to the target
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Allocate memory for the result array (to store two indices)
    int* result = (int*)malloc(2 * sizeof(int));
    if (result == NULL) {
        // Handle memory allocation failure
        *returnSize = 0;
        return NULL;
    }

    // Iterate through the array with the first pointer 'i'
    for (int i = 0; i < numsSize; i++) {
        // Iterate through the remaining part of the array with the second pointer 'j'
        // 'j' starts from 'i + 1' to avoid using the same element twice
        for (int j = i + 1; j < numsSize; j++) {
            // Check if the sum of the current pair equals the target
            if (nums[i] + nums[j] == target) {
                // If found, store the indices in the result array
                result[0] = i;
                result[1] = j;
                // Set the returnSize to indicate that two indices are returned
                *returnSize = 2;
                return result; // Return the result array
            }
        }
    }

    // If no such pair is found, set returnSize to 0 and free allocated memory
    *returnSize = 0;
    free(result);
    return NULL; // Return NULL to indicate no solution
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize; // To store the size of the returned array

    int* indices = twoSum(nums, numsSize, target, &returnSize);

    if (indices != NULL) {
        printf("Indices of the two numbers are: %d and %d\n", indices[0], indices[1]);
        free(indices); // Free the dynamically allocated memory
    } else {
        printf("No two numbers found that sum to the target.\n");
    }

    // Another example
    int nums2[] = {3, 2, 4};
    int target2 = 6;
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    
    indices = twoSum(nums2, numsSize2, target2, &returnSize);

    if (indices != NULL) {
        printf("Indices of the two numbers are: %d and %d\n", indices[0], indices[1]);
        free(indices);
    } else {
        printf("No two numbers found that sum to the target.\n");
    }

    return 0;
}