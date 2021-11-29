#include <ncurses/ncurses.h>
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <cstdlib>
#include <unistd.h>
#include <time.h>
#include <stdio.h>

#define KEY_SPACE 32

using namespace std;

void leaderboard(){
	int arr[5] = {13, 19, 20, 4, 10};
	bool swapped;
	int indexOfUnsorted = 4;
	string name[5] = {"player 1", "player 2", "player 3", "player 4", "Komputer"};
	
	do{
		swapped = false;
		for(int n = 0;n < indexOfUnsorted;n++){
			if(arr[n + 1] > arr[n]){
				int temp = arr[n + 1];
				arr[n + 1] = arr[n];
				arr[n] = temp;
				swapped = true;
			}
		}
		indexOfUnsorted--;
	}while(swapped);
	for (int n = 0; n < 5; n++){
		cout << name[n] << " - " << arr[n] << endl;
	}
}

void game(){
	int a = 1, b = 3, x, c = 2, d = 3, y;
	
	WINDOW * win = newwin(20, 75, 3, 23);
	refresh();
	box(win, 0, 0);
    wrefresh(win);
	
	keypad(stdscr,TRUE);
	srand(time(NULL));
	x = (rand()%12)+1;
	y = (rand()%12)+1;
	mvprintw(4, 24, "Press space for spin dice!");
	mvprintw(8, 24, "P1");
	mvprintw(11, 24, "P2");
	mvprintw(a, b, ".");
	mvprintw(c, d, ",");
	
	mvprintw(7, 70, "|F|");
	mvprintw(8, 70, "|I|");
	mvprintw(9, 70, "|N|");
	mvprintw(10, 70, "|I|");
	mvprintw(11, 70, "|S|");
	mvprintw(12, 70, "|H|");
	
	while( b == 74 && d == 74){
		char dice = getch();
		if(dice == KEY_SPACE){
			b += x;
			for(int i = 28 ; i <= b ; i++){
				refresh();
				wclear(win);
				Sleep(500);
				mvprintw(a, i, ".");
			}                    
			
		char dice = getch();
		if(dice == KEY_SPACE){
			d += y;
			for(int i = 28 ; i <= d ; i++){
				refresh();
				wclear(win);
				Sleep(500);
				mvprintw(c, i, ",");
			}
		}		
		}
	}
	printw("WINNER")	;
}

void menu(){
	mvprintw(7,51,"................");
   	mvprintw(8,51,"|1| PLAY A GAME|");
   	mvprintw(9,51,"................");
   	
   	mvprintw(10,51,"................");
	mvprintw(11,51,"|2| LEADERBOARD|");
    mvprintw(12,51,"................");
    
    mvprintw(13,51,"................");
    mvprintw(14,51,"|3|    EXIT    |");
    mvprintw(15,51,"................");
}

void menu11(){
	mvprintw(7,48,"   ................");
   	mvprintw(8,48,"=> |1| PLAY A GAME|");
   	mvprintw(9,48,"   ................");
   	
   	mvprintw(10,48,"   ................");
	mvprintw(11,48,"   |2| LEADERBOARD|");
    mvprintw(12,48,"   ................");
    
    mvprintw(13,48,"   ................");
    mvprintw(14,48,"   |3|    EXIT    |");
    mvprintw(15,48,"   ................");
}

void menu22(){
	mvprintw(7,48,"   ................");
   	mvprintw(8,48,"   |1| PLAY A GAME|");
   	mvprintw(9,48,"   ................");
	
	mvprintw(10,48,"   ................");
	mvprintw(11,48,"=> |2| LEADERBOARD|");
    mvprintw(12,48,"   ................");
    
    mvprintw(13,48,"   ................");
    mvprintw(14,48,"   |3|    EXIT    |");
    mvprintw(15,48,"   ................");
}

void menu33(){
	mvprintw(7,48,"   ................");
   	mvprintw(8,48,"   |1| PLAY A GAME|");
   	mvprintw(9,48,"   ................");
   	
   	mvprintw(10,48,"   ................");
	mvprintw(11,48,"   |2| LEADERBOARD|");
    mvprintw(12,48,"   ................");
    
	mvprintw(13,48,"   ................");
    mvprintw(14,48,"=> |3|    EXIT    |");
    mvprintw(15,48,"   ................");
}

int main(){
    
   	initscr();
   	
   	curs_set(0);
   	
    WINDOW * win = newwin(20, 75, 3, 23);
	refresh();
	box(win, 0, 0);
    wrefresh(win);
    
   	start_color();
	init_pair(1,COLOR_BLACK,COLOR_YELLOW);

    
   	mvprintw(7,46,"=+=+=+=+=+ WELCOME +=+=+=+=+=");
   	mvprintw(8,48,"  [Press Any Key to Start]"    );
   	refresh();
	Sleep(3000);	
   	getch();
   	
    
    WINDOW * win1 = newwin(20, 75, 3, 23);
   	refresh();
	box(win1, 0, 0);
    wrefresh(win1);
    
    mvprintw(10,56,"Loading...");
    
   	attron(COLOR_PAIR(1));
   	
   	for (int i = 1; i <= 12; i++){
   		mvprintw(9,54+i, "_");
   		refresh();
		Sleep(200);
	}
	   
   	attroff(COLOR_PAIR(1));
   	
   	WINDOW * win2 = newwin(20, 75, 3, 23);
   	refresh();
	box(win2, 0, 0);
    wrefresh(win2);
    
   	mvprintw(5,52,"GO-AHEAD DICE!");
   	mvprintw(6,55,"MAIN MENU");

   	menu();

//#define KEY_UP 72
//#define KEY_DOWN 80

	char pilihan;
   	int selection = 2;

	for(int i=0; ; ){
		
		noecho();
		
		pilihan = getch();
		
		if(pilihan == 72 && (selection >= 2 && selection <=3)){
			selection--;
		}
	
		if(pilihan == 80 && (selection >= 1 && selection <=2)){
			selection++;
		}
		if(pilihan == '\n'){
			if (selection == 1 ){
				clear();
        		game();
        	}
        	
        	else if (selection == 2 ){
        		clear();
	        	leaderboard();
	    	}
	    	
	    	else if(selection == 3){
        		printw("\n== Program dihentikan==\n");
				exit(0);
			}
		}
		
		if(selection==1){
			menu11();		
		}
		
		if(selection==2){
			menu22();
		}
		
		if(selection==3){
			menu33();		
		}
	}
    
    
   	getch();
   	
   	endwin();
   	
    	
}
