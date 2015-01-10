/* 
 * File:   main1000.cpp
 * Author: dImOndTH
 *
 * Created on 9 มกราคม 2558, 14:22 น.
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "hmain.h"

using namespace std;

/*
    Exam 1000 : Word Chain
 *  ออกแบบโจทย์ : 
 *  1.รับค่า string 4 ตัวอักษร หลายๆชุด เพื่อนำมาเทียบโซ่คำ
 *  2.ตรวจหาค่าตำแหน่งเดียวกัน จาก string 2 ชุด
 *  3.ถ้ามีตัวอักษรตำแหน่งเดียวกันเป็นตัวอักษรเดียวกัน อย่างน้อย 2 ตำแหน่ง  : ทำซำเรื่อยๆ จากข้อ 2
 *  4.ถ้าตัวอักษรตำแหน่งเดียวกันเป็นตัวอักษรเดียวกัน น้อยกว่า 2 ตำแหน่ง : โซ่คำหยุด และ แสดงตัวอักษรนั้นบนหน้าจอ
 */
int main(int argc, char** argv) {
    node *head;
    node *temp;
    int N;//รับค่า จำนวนของค่าที่รับ
    int L;//รับค่า จำนวนของ String ที่รับ
    string Word;
    int numLinkList = 0;
    
    cout << " L input : ";
    cin>>L;
    if(L<3 || L>1000){
        cout<<"Error : please Input  3 - 1000"<<endl;
        return 0;
    }
    cout << " N input L ";
    cin>>N;
    if(N<1 || N>30000){
        cout<<"Error : please Input  1 - 30000"<<endl;
        return 0;
    }
    if(numLinkList ==0){
        cout<<"Please Input A to Z in Upper Case is "<<L<<" Charactor  : ";
        cin>>Word;
        temp = new node;
        temp->dataWord = Word;
        head = temp;
        numLinkList = numLinkList+1;
    }
    return 0;
}