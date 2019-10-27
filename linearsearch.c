  
#include <stdio.h> //header_file
  int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) //loop
        if (arr[i] == x) //decision_making
            return i; 
    return -1; 
} 
  
int main(void) //main
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = search(arr, n, x); 
    (result == -1) ? printf("Element is not present in array") 
                   : printf("Element is present at index %d", 
                            result); 
    return 0; 
} 
//end
