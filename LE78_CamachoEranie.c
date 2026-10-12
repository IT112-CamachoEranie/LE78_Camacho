#include <stdio.h>
#include <ctype.h>

int main() {
    // --- Part 1: Finding the Largest Element in an Array ---
    int n;
    
    printf("Enter number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }
    
    int array[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    // Assume the first element is the largest initially
    int largest = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }
    
    printf("The largest element in the array is: %d\n\n", largest);
    
    // Clear the input buffer before reading the string
    while (getchar() != '\n');
    
    // --- Part 2: Counting the Number of Vowels in a String ---
    char str[256];
    int vowelCount = 0;
    
    printf("Enter a string: ");
    // Read the full line including spaces
    fgets(str, sizeof(str), stdin);
    
    // Iterate through the string until the null terminator
    for (int i = 0; str[i] != '\0'; i++) {
        // Convert to lowercase to handle both upper and lowercase vowels
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }
    
    printf("The number of vowels in the string is: %d\n", vowelCount);
    
    return 0;
}
