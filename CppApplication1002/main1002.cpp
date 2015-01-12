/* 
 * File:   main1002.cpp
 * Author: dImOndTH
 *
 * Created on 10 มกราคม 2558, 18:58 น.
 */

#include "Header1002.h"

using namespace std;

/*
 โจทย์ 1002 : ROMAN
    นำเลขโรมันมาแทนเลขหน้าหนังสือที่เป็นตัวเลข แล้วส่งออกค่าว่าเลขโรมันตั้งแต่หน้าแรกจนถึงหน้าที่รับค่าเข้าไป  
 มีตัวโรมันทั้งหมดกี่ตัว 
 * : ซึ่งประกอบด้วยตัว  ‘i’ ‘v’ ‘x’ ‘l’ และ ‘c’ ซึ่งใช้แทนจำนวนเต็มค่ำ 1 5 10 50 และ 100 ตำมลำดับ
 * 
 * 
 * 
 อัลกอริทึ่ม
 1.รับเลขหน้าหนังสือจากคีย์บอร์ด(Standard Input) ซึ่งเป็นจำนวนเต็มบวก d :โจทย์กำหนด  1<=d<400
 2.สร้าง string TXT สำหรับเก็บตัวอักษรทั้งหมดที่ประมวลผลได้ เช่น รับค่าจากแป้นพิมพ์ 3 ซึ่งวนเก็บค่า คือ i+ii+iii 
 3.นำค่า TXT มาแยกออกทีละ ตัว เพื่อนำไปนับจำนวนตัวอักษร
 4.แสดงตัวอักษรที่ประมวลผลได้ออกทางหน้าจอทีละตัว เรียกจาก ‘i’ ‘v’ ‘x’ ‘l’ และ ‘c’ ตามลำดับ
 
 
 */
int main(int argc, char** argv) {
    string TXT; //text ที่ไช้เก็บข้อมูลทั้งหมด
    int page; //ไช้เก็บเลขหน้าจากคีย์บอร์ด
    int afterpage; //ไช้เก็บข้อมูลหลังเปลี่ยน
    int keepInPage; //เก็บค่าสำหรับเก็บแทน page
    int NumLoopAddTXT;
    int cleanPage; //เก็บค่าไว้ลดจำนวนหลัก
    int I=0,V=0,X=0,L=0,C=0,ii;//เก็บค่าก่อนนับ
    int sizeTXT;//นับจำนวน TXT
    const int i=1,v=5,x=10,l=50,c=100; // ประกาศค่าคงที่ เลขโรมัน กับ เลขอารบิก
    int conPage;//วนจนครบจำนวนหน้า
    cout << "You Want Page ? : " ;
    cin>>page;
    afterpage = page;
    for(afterpage;afterpage>0;afterpage--){
    page = afterpage;
    rePage:
    if(page>400){
        cout<<"Page is Faill please input 1 - 399"<<endl;
        exit(0);
    }
    
    else{
        if(page<10&&page>=1){ // หลักหน่วย
            keepInPage = page%10;
            if(keepInPage<=3){
                for(keepInPage;keepInPage>0;keepInPage--){
                    TXT = TXT + "i";
                }
            }
                else if(keepInPage==4){
                    TXT = TXT + "iv";
                }
                else if(keepInPage>=5&&keepInPage<9){
                    TXT = TXT + "v";
                    if(keepInPage>=6&&keepInPage<=8){
                        for(keepInPage;keepInPage>5;keepInPage--){
                        TXT = TXT+"i";
                        }
                    }
                }
                else if(keepInPage==9){
                    TXT = TXT + "ix";
                }
        }
        else if(page<100&&page>=10){ //หลักสิบ
            keepInPage = page/10;
            cleanPage = keepInPage*10;
            if(keepInPage<=3){
                for(keepInPage;keepInPage>0;keepInPage--){
                    TXT = TXT + "x";
                }
            }
                else if(keepInPage==4){
                    TXT = TXT + "il";
                }
                else if(keepInPage>=5){
                    TXT = TXT + "l";
                }      
        }
        
        else if(page>=100 && page<400){ //หลักร้อย
            keepInPage = page/100;
            cleanPage = keepInPage*100;
            for(keepInPage;keepInPage>0;keepInPage--){
                TXT = TXT+"c";
            }
            page = page-cleanPage;
        }  
      }
    }   
    
    //เริ่มคำนวนจำนวน
        sizeTXT = TXT.size();
        for(ii=0;ii<=sizeTXT;ii++){
            if(TXT[ii]=='i'){
                I = I+1;
            }
            else if(TXT[ii] == 'v'){
                V = V+1;
            }
            else if(TXT[ii] =='x'){
                X = X+1;
            }
            else if(TXT[ii] == 'l'){
                L = L+1;
            }
            else if(TXT[ii] == 'c'){
                C = C+1;
            }
        }
        cout << TXT<<endl;
        cout << I << " " << V << " " << X << " " << L << " " << C << endl;
    
    return 0;
}

