/* 
 * File:   main1000.cpp
 * Author: dImOndTH
 *
 * Created on 9 มกราคม 2558, 14:22 น.
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
    Exam 1000 : Word Chain
 *  ออกแบบโจทย์ : 
 *  1.รับค่า string 4 ตัวอักษร หลายๆชุด เพื่อนำมาเทียบโซ่คำ
 *  2.ตรวจหาค่าตำแหน่งเดียวกัน จาก string 2 ชุด
 *  3.ถ้ามีตัวอักษรตำแหน่งเดียวกันเป็นตัวอักษรเดียวกัน อย่างน้อย 2 ตำแหน่ง  : ทำซำเรื่อยๆ จากข้อ 2
 *  4.ถ้าตัวอักษรตำแหน่งเดียวกันเป็นตัวอักษรเดียวกัน น้อยกว่า 2 ตำแหน่ง : โซ่คำหยุด และ แสดงตัวอักษรนั้นบนหน้าจอ
 */
int EnterLineOne();
int EnterLineTwo();
int main(int argc, char** argv) {
    int L = EnterLineOne();
    if(L<3 || L>1000){
        cout << "Error L<3 and L>1000";
        return 0;     
    }
    int N = EnterLineTwo();
    if(N<1 || N>30000){
        cout << "Error N<1 and N>30000";
        return 0;
    }
    
    
    
    
    return 0;
}

int EnterLineOne(){
    int L;
    cout << "Enter Num of L (3<=L<=1000 : ";
    cin >> L;
    return L;
}
int EnterLineTwo(){
    int N;
    cout << "Enter Num of N (1<=N<=30000 : ";
    cin >> N;
    return N;
}