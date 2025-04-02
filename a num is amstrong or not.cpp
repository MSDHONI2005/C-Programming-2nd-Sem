#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, sum = 0, n = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    for (temp = num; temp; temp /= 10) n++;
    for (temp = num; temp; temp /= 10) sum += pow(temp % 10, n);
    
    printf(sum == num ? "%d is an Armstrong number.\n" : "%d is not an Armstrong number.\n", num);
    return 0;
}
