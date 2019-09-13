#include <time.h>
#include <windows.h>
#include <process.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include "Money.cpp"
#include "Life.cpp"
#include "Combat.cpp"

#ifndef Encounter_CPP
#define Encounter_CPP
using namespace std;

class Encounter{
	private:
		bool vive;
		string texto;
		Money money;
		Life life;
		int level;
	public:
		Encounter(){
			money.setVive(true);
			money.run();
			life.setVive(true);
			life.run();
			level=1;
		}
		
		void setVive(bool v){
			vive=v;
		}
		
		void stop(){
			vive=false;
		}
		
		Life getLife(){
			return life;
		}
		
		Money getMoney(){
			return money;
		}
		
		int getLevel(){
			return level;
		}
		
		void run(){
			_beginthread(&Encounter::runner,0, static_cast<void*>(this));
			
		}
		
		static void runner(void* o){
			static_cast<Encounter*>(o)->runnerEstatico();
		}
		
		void runnerEstatico(){
			while (vive){
				Sleep(10000);
				int chance;
				srand (time(NULL));
				chance = rand() % 100 + 1;
				cout<<chance;
				if (life.getLife()>0){
					if (chance<=80){
						MessageBox(0,"A challenger approaches", "Warning",MB_OK);
						money.setCombat(true);
						life.setCombat(true); 
						Combat combat(life.getLife(), level);
						combat.Battle();
						life.setLife(combat.getLife());
						
					}else{
						money.setCombat(false);
						life.setCombat(false);
					}
				}else{
					cout<<"GAME OVER"<<endl;
					stop();
				}
				
				
				if(!vive){
					_endthread();
				}
			}
		}
};

#endif
