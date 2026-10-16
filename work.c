#include <stdio.h>
#include <string.h>

//Q110: Write a program to take an integer array arr and an integer k as inputs. 
//The task is to find the maximum element in each subarray of size k moving from left to right. 
//print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the size of the subarray (k): ");
    scanf("%d", &k);
    
    if(k > n) {
        printf("k should be less than or equal to the size of the array.\n");
        return 1;
    }
    
    for(int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for(int j = 1; j < k; j++) {
            if(arr[i + j] > max) {
                max = arr[i + j];
            }
        }
        printf("%d ", max);
    }
    
    printf("\n");
    return 0;
}