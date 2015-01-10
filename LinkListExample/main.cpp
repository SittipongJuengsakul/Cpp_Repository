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
    node *tail; //เก็บโหนดสุดท้ายของโหนด
    int num = 0;
    
    temp = new node;
    temp->x = "REAR";
    temp->prev = NULL;
    head = temp;
    tail = temp;
    num = num+1;
    
    temp = new node;
    temp->x = "CEAR";
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
    num =  num+1;
    
    temp = new node;
    temp->x = "XEAR";
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
    num =  num+1;
    tail->next = NULL;
    
    int i;for(i=1;i<=num;i++){
        cout<<"Node "<<i<<" = " << tail->x<<endl;
        tail = tail->prev;
    }
    
    return 0;
}

