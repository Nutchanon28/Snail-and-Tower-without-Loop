// Snail & Tower
// หอยทากตัวหนึ่งต้องการปีนขึ้นเสาโทรที่มีความสูง H เมตร ในวันๆ หนึ่งหอยทากสามารถปีนขึ้นได้ A เมตร
//  อย่างไรก็ตามทุกคืนที่หอยทากนั้นหลับเขาก็จะไหลลงมา B เมตร อยากทราบว่าหอยทากนั้นต้องใช้เวลากี่วันในการปีนขึ้นไปบนยอดเสาโทร

// Specification
// Input
// บรรทัดแรกและบรรทัดเดียว จำนวนเต็ม 3 จำนวน แบ่งด้วยช่องว่าง: A, B, และ H (1 <= B < A <= H <= 1 000 000 000)
// Output
// บรรทัดแรกและบรรทัดเดียวแสดงจำนวนวันที่หอยทากใช้ในการปีนขึ้นไปบนยอดเสาโทร
// Sample Case
// Case 1
// 3 1 10

// 5

// Case 2
// 5 1 6

// 2

// Case 3
// 111 22 333333333

// 3745319

#include<stdio.h>
int main() {
    int A,B,H,per_day;
    scanf("%d %d %d",&A,&B,&H);

    if (!(1 <= B))
    {
        return 0;
    }
    if (!(B < A))
    {
        return 0;
    }
    if (!(A <= H))
    {
        return 0;
    }
    if (!(H <= 1000000000))
    {
        return 0;
    }

    int before_last_up = H - A;
    per_day = A - B;

    int days;
    if (before_last_up % per_day == 0)
    {
        days = before_last_up / per_day + 1;
    }else{
        days = before_last_up / per_day + 1 + 1;
    }
    
    // run time error??
    // int days = before_last_up % per_day == 0 ? before_last_up / per_day + 1 : before_last_up / per_day + 1 + 1;
    printf("%d", days);
    
    return 0;
}