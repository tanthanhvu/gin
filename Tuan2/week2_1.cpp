#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string data,line;
    int choice;
    int case1=0,case2=0;
    begin:
    cout << "What do you want? \n";
    cout <<"1. Create a new file." << endl;
    cout <<"2. Read file." << endl;
    cout <<"3. Delete file." << endl;
    cout <<"4. Update file." << endl;
    cout <<"5. Exit." << endl;
    cin >> choice;

    createfile:
    if(case1==1){
    ofstream file ("yourinfo.txt");
        if (file.is_open()){
        file << "Ready!!\n";
        file << "It was at this moment, you knew you f*cked up\n";
        cout << "Created a new file successfully\n";
        file.close();
    } else {
        cout << "Unable to open file";
    }
    case1=0;
    goto begin;}

    readfile:
    if(case2==1){
            fstream inputFile;
    inputFile.open("yourinfo.txt",ios::in);
    
    string line,data;
    while (!inputFile.eof())          // (1)
	{
		getline(inputFile, line); // (2)
		data += line + "\n";
	}
    inputFile.close();
    cout << "Data in file:\n";
    cout << data;
    case2=0;
    goto begin;
    }
    
    switch ( choice ) {
    case 1:
    case1=1;
    goto createfile; 
    break;
    case 2:
    case2=1;
    goto readfile;
    break;
    case 3:
    cout<<"We are updating!";
    break;
    case 4:
    cout << "We are updating!!";
    break;
    case 5:
    break;
    default:
    cout << "Khong the tim thay yeu cau cua ban\n";
    goto begin;
    


}
}



    


    
    

