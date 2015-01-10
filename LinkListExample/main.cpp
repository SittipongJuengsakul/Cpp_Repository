/* 
 * File:   main.cpp
 * Author: dImOndTH
 *
 * Created on 9 มกราคม 2558, 21:19 น.
 */

#include "hmain.h"
/*
 ทบทวนความจำเรื่อง Link list
 เพราะต้องใช้ในการทำโจทย์หลายข้อ
 */
int main(int argc, char** argv) {
    node *temp; //เก็บตำแหน่งของโหนดที่กำลังอยู่
    node *head; //เก็บตำแหน่งแรกของโหนด
    
    head = new node;
    head->next = 0;
    head->x = "REAR";
    temp = head;
    
    temp->next = new node;
    temp = temp->next;
    temp->next = 0;
    temp->x = "CEAR";
    
    cout <<"Value head is "<< head->x << endl;;
    cout <<"Value temp is "<< temp->x;
    return 0;
}

