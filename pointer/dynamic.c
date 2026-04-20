/*
1.malloc()
void* malloc(size_t size);
    Purpose: Allocates uninitialized memory
    Parameter: Number of bytes to allocate
    Returns: Pointer to allocated memory or NULL if fails
    Example: int *p = (int*)malloc(5 * sizeof(int));

2. calloc()
void* calloc(size_t num, size_t size);
    Purpose: Allocates and zero-initializes memory
    Parameters: Number of elements and size of each element
    Returns: Pointer to allocated memory or NULL if fails
    Example: int *p = (int*)calloc(5, sizeof(int));

3. realloc()
void* realloc(void* ptr, size_t new_size);
    Purpose: Resizes previously allocated memory
    Parameters: Pointer to old memory and new size in bytes
    Returns: Pointer to reallocated memory (may be different) or NULL if fails
    Example: int *p = (int*)realloc(old_ptr, 10 * sizeof(int));
4. free()
void free(void* ptr);
    Purpose: Deallocates previously allocated memory
    Parameter: Pointer to memory to free
    Returns: Nothing
    Example: free(ptr); ptr = NULL;
points to remember:
    Always check return value of allocation functions for NULL
    Always free dynamically allocated memory when no longer needed
    Set pointers to NULL after freeing to prevent dangling pointers
    Don't free memory twice (undefined behavior)
    realloc with size 0 is equivalent to free (but use free for clarity)
    free(NULL) is safe and does nothing

*/
#include <stdio.h>
#include <stdlib.h>  // Required for malloc(), calloc(), realloc(), free()

int main() {
    // ==================== malloc() ====================
    // Syntax: void* malloc(size_t size);
    // Allocates 'size' bytes of uninitialized memory
    // Returns pointer to allocated memory or NULL if fails
    
    printf("=== malloc() Demonstration ===\n");
    int *ptr_malloc;
    
    // Allocate memory for 3 integers
    ptr_malloc = (int*)malloc(3 * sizeof(int));   
    if (ptr_malloc == NULL) {
        printf("malloc failed!\n");
        return 1;
    }
    
    // Memory contains garbage values (uninitialized)
    printf("malloc: Memory allocated but values are garbage:\n");
    for (int i = 0; i < 3; i++) {
        printf("ptr_malloc[%d] = %d (garbage value)\n", i, ptr_malloc[i]);
    }
    
    // Assign values
    for (int i = 0; i < 3; i++) {
        ptr_malloc[i] = (i + 1) * 10;
    }
    
    printf("After assignment:\n");
    for (int i = 0; i < 3; i++) {
        printf("ptr_malloc[%d] = %d\n", i, ptr_malloc[i]);
    }
    printf("\n");
    
    // ==================== calloc() ====================
    // Syntax: void* calloc(size_t num, size_t size);
    // Allocates memory for 'num' elements each of 'size' bytes
    // Initializes all bytes to zero
    // Returns pointer to allocated memory or NULL if fails
    
    printf("=== calloc() Demonstration ===\n");
    int *ptr_calloc;
    
    // Allocate memory for 3 integers and initialize to 0
    ptr_calloc = (int*)calloc(3, sizeof(int));
    
    if (ptr_calloc == NULL) {
        printf("calloc failed!\n");
        free(ptr_malloc);
        return 1;
    }
    
    // Memory is zero-initialized
    printf("calloc: Memory allocated and zero-initialized:\n");
    for (int i = 0; i < 3; i++) {
        printf("ptr_calloc[%d] = %d (zero-initialized)\n", i, ptr_calloc[i]);
    }
    
    // Assign new values
    for (int i = 0; i < 3; i++) {
        ptr_calloc[i] = (i + 1) * 20;
    }
    
    printf("After assignment:\n");
    for (int i = 0; i < 3; i++) {
        printf("ptr_calloc[%d] = %d\n", i, ptr_calloc[i]);
    }
    printf("\n");
    
    // ==================== realloc() ====================
    // Syntax: void* realloc(void* ptr, size_t new_size);
    // Resizes previously allocated memory block
    // Preserves existing data up to minimum of old and new size
    // Returns pointer to reallocated memory (may be different location)
    // If new_size is 0 and ptr is not NULL, equivalent to free(ptr)
    
    printf("=== realloc() Demonstration ===\n");
    
    // First, allocate memory for 2 integers using malloc
    int *ptr_realloc = (int*)malloc(2 * sizeof(int));
    
    if (ptr_realloc == NULL) {
        printf("Initial allocation failed!\n");
        free(ptr_malloc);
        free(ptr_calloc);
        return 1;
    }
    
    // Initialize values
    ptr_realloc[0] = 100;
    ptr_realloc[1] = 200;
    
    printf("Original allocation (2 elements):\n");
    for (int i = 0; i < 2; i++) {
        printf("ptr_realloc[%d] = %d\n", i, ptr_realloc[i]);
    }
    
    // Resize to hold 4 integers (expand)
    int *temp = (int*)realloc(ptr_realloc, 4 * sizeof(int));
    
    if (temp == NULL) {
        printf("realloc failed!\n");
        free(ptr_realloc);  // Free original memory
        free(ptr_malloc);
        free(ptr_calloc);
        return 1;
    }
    
    ptr_realloc = temp;  // Update pointer to new memory location
    
    // Original data is preserved, new elements contain garbage
    printf("\nAfter realloc to 4 elements (expanded):\n");
    printf("First 2 elements preserved, next 2 are garbage:\n");
    for (int i = 0; i < 4; i++) {
        printf("ptr_realloc[%d] = %d\n", i, ptr_realloc[i]);
    }
    
    // Initialize new elements
    ptr_realloc[2] = 300;
    ptr_realloc[3] = 400;
    
    printf("\nAfter initializing new elements:\n");
    for (int i = 0; i < 4; i++) {
        printf("ptr_realloc[%d] = %d\n", i, ptr_realloc[i]);
    }
    
    // Shrink the memory block to 3 elements
    temp = (int*)realloc(ptr_realloc, 3 * sizeof(int));
    
    if (temp == NULL) {
        printf("realloc shrink failed!\n");
        // Original ptr_realloc is still valid
    } else {
        ptr_realloc = temp;
        printf("\nAfter shrinking to 3 elements:\n");
        printf("First 3 elements preserved, 4th element lost:\n");
        for (int i = 0; i < 3; i++) {
            printf("ptr_realloc[%d] = %d\n", i, ptr_realloc[i]);
        }
    }
    printf("\n");
    
    // ==================== free() ====================
    // Syntax: void free(void* ptr);
    // Deallocates memory previously allocated by malloc, calloc, or realloc
    // Does nothing if ptr is NULL
    // After free, pointer becomes dangling (should be set to NULL)
    
    printf("=== free() Demonstration ===\n");
    
    printf("Freeing all allocated memory:\n");
    
    // Free malloc'd memory
    free(ptr_malloc);
    ptr_malloc = NULL;  // Set to NULL to avoid dangling pointer
    printf("✓ malloc memory freed\n");
    
    // Free calloc'd memory
    free(ptr_calloc);
    ptr_calloc = NULL;
    printf("✓ calloc memory freed\n");
    
    // Free realloc'd memory
    free(ptr_realloc);
    ptr_realloc = NULL;
    printf("✓ realloc memory freed\n");
    
    // Demonstrating free with NULL (does nothing)
    printf("Calling free with NULL pointer (safe operation):\n");
    free(NULL);  // This is safe, does nothing
    printf("✓ free(NULL) executed - no effect\n");
    
    printf("\nAll memory freed and pointers set to NULL\n");
    
    return 0;
}