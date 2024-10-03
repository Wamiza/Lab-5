
#include <stdio.h>

int main() {
    int number, result;

    printf("Enter Number: ");
    scanf("%d", &number);
    
    
    int countOnes(int number) {
    if (number == 0) {
        return 0;
    }
    return (number % 2) + countOnes(number / 2);
   }


    result = countOnes(number);

    printf("Number of 1s in the Binary Representation of %d is: %d\n", number, result);

    return 0;
}
    