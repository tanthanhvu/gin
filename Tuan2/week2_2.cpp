#include<iostream>
#include<math.h>

using namespace std;

void printAtoZ(){
        char c;
    for(c='A';c<='Z';c++){
        cout << c << " ";
    }
}

void checkprime(int n){
    int i=2,count=1;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0)
            count++;}
    if(count>=2 ){
        cout << n << " is not Prime number";

    }else{cout << n << " is Prime number";}
}

int ucln(int a, int b){
    int ucln;
    if(a>b){
        for (int i=b;i>=1;i--){
            if(a%i==0){
                ucln = i;
                break;
            }
        }
    }else{
        for (int i=a;i>=1;i--){
            if(b%i==0){
                ucln = i;
                break;
}}}
return ucln;}

int bcnn(int a, int b){
    int bcnn;
    bcnn = a*b/ucln(a,b);
    return bcnn;
}

void ak47(){
                                                                                                    
                                                                                                    
cout<<"                               `-::::::::::::::/:::::hoosyys+/////////::....````          :h+       \n";
cout<<"      `````` ````            `oysssssyyyyyyhhhhhhhyyydhhyhhhdyssssossssymddddddds`       -dy+       \n";
cout<<"    :soosssssooooooo+--://:oshhhhhhhhyyhhhhhhhhhhhhhdmdhyysssoosssyyhh+yddddddddddysssssshddds+`    \n";
cout<<"    /ysssssssssssooosys++s+yhhhhhhhhhhhhhhhhdhddddddddddyyyyhyyyhhhhhhydhyyyyyhdddhhhhhhhdddhh:`    \n";
cout<<"    +s+++++osyyyssosyyyyyyyhdmmdddddmdmmdddddyssssshyyyydhyoo++++++////-``````.`.:........-`        \n";
cout<<"    ohyyyhhyyyyhhhhddhyso+//:.`sdddmdso.`-ddsssssss:                                                \n";
cout<<"    ohhhhdddddyo+:-.          -dddmh`.::::.` :ssssss-                                               \n";
cout<<"     `+oo+o+`                `hddmd-          ossssss:                                              \n";
cout<<"                             /dddd+           `ssssyyy+`                                            \n";
cout<<"                              /shh.            `oyyyyyyy/.                                          \n";
cout<<"                                                 /yyyyyyyy/                                         \n";
cout<<"                                                  .oyyyyhs`                                         \n";
cout<<"                                                    .+yh+                                           \n";


}

void cayanhtuc(){ 
cout <<"                       `hm.                       \n";
cout <<"                        -h                        \n";
cout <<"      :                ymms                       \n";
cout <<"      :s`             -mmmm.                      \n";
cout <<"      `md/            ymmmm+              -`      \n";
cout <<"       ymmd+         `mmmmmo           -os.       \n";
cout <<"       -dmmmh/       -mmmmms        -sdmd         \n";
cout <<"        smmmmmy.     /mmmmmd      :hmmmd-         \n";
cout <<"        `ymmmmmd:    ommmmmd   `/dmmmmh.          \n";
cout <<"         `hmmmmmmo   +mmmmmh  :ymmmmmy`           \n";
cout <<"          `ymmmmmms` /mmmmmh /dmmmmmo             \n";
cout <<"-++/:-.`    /dmmmmmh--mmmmms:mmmmmd/              \n";
cout <<"  :hmmmmhs+- .smmmmmy-dmmmmhmmmmms.               \n";
cout <<"    :hmmmmmmds/+dmmmmyommmhdmmmd/    ..:/+++/::--.\n";
cout <<"      -sdmmmmmmmddmmmm+mmmommds.-/oymmmmmmmmmho:. \n";
cout <<"        `-sdmmmmmmmmddh+mshd+/smmmmmmmmmmhs:.     \n";
cout <<"           `-/+symmmmdyhmhysdmmmmmdhys/:          \n";
cout <<"          `-oydmmddmmmmmmmmmmdhss+:               \n";
cout <<"        -ommmmmmdhysohmmmodmmmmmmmmdh+:           \n";
cout <<"      /yhsoo/:.` `smmms-o+-hmmdoydmmmmmh+         \n";
cout <<"     `          -dho/-  -y  .+hd` .:://oss/`      \n";
cout <<"                +`       y`    /:                 \n";
cout <<"                         +:                       \n";
cout <<"                         -o                       \n";


}

int main(){
    int choice;
    begin:
    cout << "\nBan muon lam gi? \n1. In ky tu tu A den Z.\n2. Kiem tra so nguyen to.\n3. In cay sung AK47.\n4. In cay hoa anh tuc.\n5. Tim uoc chung lon nhat hoac boi chung nho nhat cua 2 so.\n6. Thoat chuong trinh!!!\n";
    cout << "Lua chon so ";
    cin >> choice;

    switch(choice){
        case 1: 
        printAtoZ();
        goto begin;
        case 2:
        float a;
        cout <<"Nhap so tu nhien a:\na = ";
        cin >> a;
        while(a/(int)a != 1){
            cout <<". Xin moi mhap lai, day khong phai so tu nhien\na = ";
            cin >> a;
            }
        checkprime((int)a);
        goto begin;
        case 3:
        ak47();
        goto begin;
        case 4:
        cayanhtuc();
        goto begin;    
        case 5:
        float b,c;
        cout <<"Nhap hai so tu nhien a,b:\n";
        cout << "c = "; cin >> c; cout << " ";
        cout << "b = "; cin >> b; cout << endl;
        while((c/(int)c != 1) || (b/(int)b != 1)){
            cout <<". Xin moi mhap lai, mot trong hai khong phai so tu nhien\n";
            cout << "c = "; cin >> c; 
            cout << "b = "; cin >> b; 
            }
        int x;
        What:
        cout << "Ban muon tim gi?\n1.UCLN\n2.BCNN\n";
        cin >> x ;
        if(x==1){
            cout << "\nUoc chung lon nhat cua c va b la " << ucln(c,b);
        }else if(x==2){
            cout << "\nBoi chung nho nhat cua c va b la " << bcnn(c,b);
        }else{cout << "Ban nhap sai cu phap, moi nhap lai!";
        goto What;
        }
        goto begin;
        case 6: 
        break;
        default:
        cout << "Ban nhap sai cu phap roi, moi nhap lai.";
        goto begin;




    }



}