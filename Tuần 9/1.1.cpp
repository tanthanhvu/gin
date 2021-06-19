#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;

char intToChar(int number)
{
    /*
    Convert int number to char
    Input: int number
    Output: char
    */
    return number + '0';
}

int charToInt(char characters)
{
    /*
    Reverse intToChar
    */
   return characters - '0';
}

void revision(string &numberA , string &numberB)
{

    unsigned int lenA = numberA.length();
    unsigned int lenB = numberB.length();
    if (lenA > lenB)
    {
        numberB.insert(0,lenA- lenB,'0');
    }
    else if(lenB > lenA)
    {
        numberA.insert(0, lenB-lenA, '0');
    }
}

string sum(string numberA, string numberB)
{
    /*
    Sum
    Input: 2 string numbers
    Output: Sum about it
    */
    string outputSum ;
    int _sum , memory = 0;
    revision(numberA, numberB);
    for(int i = numberA.length() - 1 ; i >= 0 ; i-- )
    {
        _sum = charToInt(numberA[i]) + charToInt(numberB[i]) + memory;
        memory = _sum/10;
        _sum = _sum%10;
        outputSum.insert(0, 1 , intToChar(_sum));
    }
    if (memory > 0 )
    {
        outputSum.insert(0 , 1 , intToChar(memory));
    }
    return outputSum;
}
int main ()
{
    char filePath[255];
    string number[100], _sum;
    int i = 0;
    cout<<"Enter your path: ";
    cin.getline(filePath, 255);
    ifstream fileInput(filePath);
    while(i < 100 && !fileInput.eof())
    {
        getline(fileInput, number[i]);
        i++;
    }
    for (int j = 0 ; j < i ; j ++)
    {
        _sum = sum(_sum, number[j]);
    }
    cout<<"Output: "<<_sum<<endl;
    getch();
} 