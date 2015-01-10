/* 
 * File:   main1000.cpp
 * Author: dImOndTH
 *
 * Created on 9 มกราคม 2558, 14:22 น.
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <ctype.h> //isupper();
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
string InputWordToNode(int L); //ประกาศฟังก์ชั่น  ** ไช้ Input ค่าตัวอักษร จากแป้นพิมพ์
int main(int argc, char** argv) {
    node *head;
    node *temp;
    node *NewNode;
    int N=0;//รับค่า จำนวนของค่าที่รับ
    int L=0;//รับค่า จำนวนของ String ที่รับ
    string WordResult; //ค่าของ String ที่รับจากฟังก์ชั่น
    int numLinkList = 0;
    int i,j;
    int NumTrue = 0;
    
    cout << " L input : ";
    cin>>L;
    if(L<3 || L>1000){
        cout<<"Error : please Input  3 - 1000"<<endl;
        return 0;
    }
    cout << " N input : ";
    cin>>N;
    if(N<1 || N>30000){
        cout<<"Error : please Input  1 - 30000"<<endl;
        return 0;
    }
    while(N!=0){
        if(numLinkList==0){ // นี่คือ Head Node  
            WordResult = InputWordToNode(L);
            NewNode = new node;
            NewNode->dataWord = WordResult;
            head = NewNode;
            temp = NewNode;
            numLinkList = numLinkList+1;
            N--;
        }
        else{//นี่คือ Node สุดท้าย มีค่าเท่ากับ N
            WordResult = InputWordToNode(L);
            NewNode = new node;
            NewNode->dataWord = WordResult;
            temp->next = NewNode;
            temp = temp->next;
            numLinkList = numLinkList+1;
            N--;
        }
    }
    
    for(i=1;i<=numLinkList-1;i++){
        NumTrue = 0;
        for(j=0;j<L;j++){
            //cout<<head->dataWord[j]<< " = " << head->next->dataWord[j];
            if(head->dataWord[j] == head->next->dataWord[j]){
                //cout<<"!TRUE"<<endl;
                NumTrue = NumTrue+1;
            }
            else{
                //cout<<"!False"<<endl;
            }
        }
        if(NumTrue>=2){
            head = head->next;
        }
        else{
            cout<<head->dataWord<<endl;
            exit(0);
        }
        
    }
    
    return 0;
}

string InputWordToNode(int KeepL){
     string Word;
     int i=0;
     char c;
     InputWord:cout<<"Please Input A to Z in Upper Case is "<<KeepL<<" Charactor  : ";
     cin>>Word;
     if(Word.length()!=KeepL){
         cout<<"Please Input "<<KeepL<< " Character!!!  Input Again. "<<endl;
         exit(0);
     }
     while(Word[i]){
        c=Word[i];
        if (isupper(c)){  
        }
        else{
            cout<<"Faill : Input UpperCase Only. !!!! Input Again ";
            exit(0);
        }
        i++;
    }
     return Word;
}