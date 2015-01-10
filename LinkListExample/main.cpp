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
    string WordOfInput;
    
    temp = new node;
    temp->x = "REAR";
    temp->prev = NULL;
    head = temp;
    tail = temp;
    num = num+1;
    
    
    while(WordOfInput!="1"){
        cout<<"Input : ";
        cin>>WordOfInput;
        if(WordOfInput!="1"){
        temp = new node;
        temp->x = WordOfInput;
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
        num =  num+1;
        }
        else{
            cout<<"end Node!!;"<<endl;
        }
    }
    
    int i;for(i=1;i<=num;i++){ // ปริ้น โหนด
        cout<<"Node "<<i<<" = " << head->x<<endl;
        head = head->next;
    }
    
    return 0;
}
