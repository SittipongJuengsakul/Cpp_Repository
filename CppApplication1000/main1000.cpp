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
string EnterEverLine();
int WordChain(string ,string);
int main(int argc, char** argv) {
    string WordA;
    string WordB;
    int WordChainCount;
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
    WordA = EnterEverLine();
    
    CycleN:WordB = EnterEverLine();
    WordChainCount = WordChain(WordA,WordB);
    
    
    if(WordChainCount>=2){
        cout<< "CC = :" << WordChainCount;
        WordChainCount = 0;
        WordA = WordB;
        goto CycleN;
    }
    else{
        cout<<"End Of Chain Word : "+WordB;
        cout<< "CC = :" << WordChainCount;
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
string EnterEverLine(){
    string Word;
    cout << "Enter Word 4 character : ";
    cin >> Word;
    return Word;
}
int WordChain(string WordA,string WordB){
    int IndexOfWord;
    int KeepChainLeg = 0;
    int CycleOfString = 0;
    
    for(CycleOfString=0;CycleOfString<=3;CycleOfString++){
        if(WordA[CycleOfString]==WordB[CycleOfString]){
            KeepChainLeg = KeepChainLeg+1;
        }
    }
    return KeepChainLeg;
}