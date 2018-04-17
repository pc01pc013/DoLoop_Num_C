#include <windows.h>
#include <wincon.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns, rows, a;
    while(1){
    	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    	columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    	rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    	for(a=0; a<columns; ++a){
    		printf("%d",(rand()%10)+1);
		}
	}
    return 0;
}
