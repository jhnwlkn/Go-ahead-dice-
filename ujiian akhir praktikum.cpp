#include <ncurses.h>
#include <windows.h>
#include <stdlib.h>
#include <cstdlib>
#include <unistd.h>
#include <time.h>
#include <stdio.h>

#define KEY_SPACE 32

using namespace std;


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
	mvprintw(7,49,"  ................");
   	mvprintw(8,49,"=>|1| PLAY A GAME|");
   	mvprintw(9,49,"  ................");
   	
   	mvprintw(10,49,"  ................");
	mvprintw(11,49,"  |2| LEADERBOARD|");
    mvprintw(12,49,"  ................");
    
    mvprintw(13,49,"  ................");
    mvprintw(14,49,"  |3|    EXIT    |");
    mvprintw(15,49,"  ................");
}

void menu22(){
	mvprintw(7,49,"  ................");
   	mvprintw(8,49,"  |1| PLAY A GAME|");
   	mvprintw(9,49,"  ................");
	
	mvprintw(10,49,"  ................");
	mvprintw(11,49,"=>|2| LEADERBOARD|");
    mvprintw(12,49,"  ................");
    
    mvprintw(13,49,"  ................");
    mvprintw(14,49,"  |3|    EXIT    |");
    mvprintw(15,49,"  ................");
}

void menu33(){
	mvprintw(7,49,"  ................");
   	mvprintw(8,49,"  |1| PLAY A GAME|");
   	mvprintw(9,49,"  ................");
   	
   	mvprintw(10,49,"  ................");
	mvprintw(11,49,"  |2| LEADERBOARD|");
    mvprintw(12,49,"  ................");
    
	mvprintw(13,49,"  ................");
    mvprintw(14,49,"=>|3|    EXIT    |");
    mvprintw(15,49,"  ................");
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
    
   	mvprintw(5,51,"ULER LURUS GAME");
   	mvprintw(6,54,"MAIN MENU");

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
        		printw("game");
        	}
        	
        	else if (selection == 2 ){
	        	printw("leaderboard");
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

