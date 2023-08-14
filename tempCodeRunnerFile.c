#include <stdio.h>
void commaprint(int number) {
    if (number < 1000) {
        printf("%d", number);
        return;
    }
    commaprint(number / 1000);
    printf(",%03d", number % 1000);
}
int main() {
    char id[10];
    float timework;
    float money;
    printf("Test case: \n");
    printf("Input the Employees ID (Max. 10 chars):\n");
    scanf("%s", &id);
    printf("Input the working hrs:\n");
    scanf("%f", &timework);
    printf("Salary amount/hr:\n");
    scanf("%f", &money);
    float sum;
    sum = timework * money;
    printf("Output: \n");
    printf("Expected Output:\nEmployees ID = %s\n", id);
    printf("Salary = U$ ");
    commaprint((int)sum);
    printf(".%02d", (int)(sum * 100) % 100);

    return 0;
}
