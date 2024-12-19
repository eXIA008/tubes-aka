#include "header.h"

// Function to perform selection sort iteratively
void selectionIterative(Waktu date[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            // Find the index of the minimum element
            if ((date[min_idx].Y > date[j].Y ||
                (date[min_idx].Y == date[j].Y &&
                 (date[min_idx].M > date[j].M ||
                  (date[min_idx].M == date[j].M &&
                   date[min_idx].D > date[j].D))))) {
                min_idx = j;
            }
        }
        // Swapping
        Waktu temp = date[i];
        date[i] = date[min_idx];
        date[min_idx] = temp;
    }
}

// Function to find the index of the minimum element recursively
int findMinIndex(Waktu pas[], int start, int n, int currentMinIndex) {
    if (start >= n) {
        return currentMinIndex; // Base case: return the index of the minimum found
    }
    // Compare current element with the minimum found so far
    if ((pas[start].Y < pas[currentMinIndex].Y ||
        (pas[start].Y == pas[currentMinIndex].Y &&
         (pas[start].M < pas[currentMinIndex].M ||
          (pas[start].M == pas[currentMinIndex].M &&
           pas[start].D < pas[currentMinIndex].D))))) {
        currentMinIndex = start; // Update minimum index
    }
    // Recursive call to check the next element
    return findMinIndex(pas, start + 1, n, currentMinIndex);
}

// Function to perform selection sort recursively
void selectionRecursive(Waktu pas[], int start, int n) {
    if (start >= n - 1) {
        return; // Base case: if we reach the end of the array
    }
    // Find the index of the minimum element in the remaining unsorted array
    int minIndex = findMinIndex(pas, start + 1, n, start);
    // Swap the found minimum element with the first element of the unsorted part
    if (minIndex != start) {
        Waktu temp = pas[start];
        pas[start] = pas[minIndex];
        pas[minIndex] = temp;
    }
    // Recursive call for the next element
    selectionRecursive(pas, start + 1, n);
}
