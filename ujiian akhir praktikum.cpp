#include <ncurses/ncurses.h>
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <cstdlib>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

using namespace std;

  int main(){
    
   	initscr();
   	
    WINDOW * win = newwin(20, 75, 3, 23);
	refresh();
	box(win, 0, 0);
    wrefresh(win);
    
   	start_color();
	init_pair(1,COLOR_BLACK,COLOR_YELLOW);

    
   	mvprintw(7,46,"=+=+=+=+=+ WELCOME +=+=+=+=+=\n");
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
   	mvprintw(9,55,"_");
   	refresh();
	Sleep(500);	
   	
   	mvprintw(9,56,"__");
   	refresh();
	Sleep(500);	

	
	mvprintw(9,57,"___");
   	refresh();
	Sleep(500);	
	
	mvprintw(9,58,"____");
   	refresh();
	Sleep(500);	
	
	mvprintw(9,59,"_____");
   	refresh();
	Sleep(500);	
	
	mvprintw(9,60,"______");
   	refresh();
	Sleep(500);	;
	
	mvprintw(9,61,"_______");
   	refresh();
	Sleep(500);	
   	attroff(COLOR_PAIR(1));
   	

   	
   	WINDOW * win2 = newwin(20, 75, 3, 23);
   	refresh();
	box(win2, 0, 0);
    wrefresh(win2);
    
   	mvprintw(5,51,"ULER LURUS GAME");
   	mvprintw(6,54,"MAIN MENU");

   	mvprintw(7,51,"................");
   	mvprintw(8,51,"|1| PLAY A GAME|");
   	mvprintw(9,51,"................");

   mvprintw(10,51,".................");
   mvprintw(11,51,"|2| LEADERBOARD|");
   mvprintw(12,51,"................");

   mvprintw(13,51,"................");
   mvprintw(14,51,"|3|    EXIT    |");
   mvprintw(15,51,"................");
   
   
        int nomor;
 
         mvprintw(17,48,"Choose An Option (1 - 3) = "); 
        mvscanw(17,75,"%d", &nomor);
 
 
        if (nomor == '1' ) {
            printw("play a game\n");
   
          }
         else if (nomor == '2' ) {
            printw("leaderboard");
          }
   
         else if(nomor==3){
            printw("\n== Program dihentikan==\n");
			exit(0);
   	      }
    
    
   	getch();
   	
   	endwin();
   	
    	
}

