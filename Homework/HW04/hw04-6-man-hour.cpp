/*
    เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด
    (ผลลัพธ์ของ Salary จะต้องอยู่ในรูปแบบ Decimal Number เท่านั้น เช่น 374,000)

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0342
        Input the working hrs: 
            8
        Salary amount/hr: 
            15000
    Output:
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120,000.00

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0000500349
        Input the working hrs: 
            11
        Salary amount/hr: 
            34000
    Output:
        Expected Output:
        Employees ID = 0000500349
        Salary = U$ 374,000.00
*/
#include <stdio.h>

void commaprint(int number) {
    if (number < 1000) {
        printf("%d", number) ;
        return ;
    }
    commaprint(number / 1000) ; 
    printf(",%03d", number % 1000) ;
}
int main() {
    char id[10] ;
    float hr ;
    float amhr ;
    //กรอกรหัสประจำตัวพนักงาน
    printf("Test case: \n") ;
    printf("Input the Employees ID (Max. 10 chars):\n") ;
    scanf("%s", &id) ;
    //กรอกจำนวนชั่วโมงที่ทำงาน
    printf("Input the working hrs:\n") ;
    scanf("%f", &hr);
    //กรอกรายได้ต่อชั่วโมง 
    printf("Salary amount/hr:\n") ;
    scanf("%f", &amhr) ;
     //คำนวนsalary
    float salary;
    salary = hr * amhr ;
    printf("Output: \n") ;
    printf("Expected Output:\nEmployees ID = %s\n", id) ;
    printf("Salary = U$ ") ;
    commaprint((int)salary) ;
    printf(".%02d", (int)(salary * 100) % 100) ;

    return 0 ;
}