#include <time.h>
#include <windows.h>
#include <process.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

#ifndef Encounter_CPP
#define Encounter_CPP
using namespace std;

class Encounter{
	private:
		bool vive;
		string texto;
		bool combat;
	public:
		Encounter(){
		}
		
		void setVive(bool v){
			vive=v;
		}
		
		void stop(){
			vive=false;
		}
		
		bool getCombat(){
			return combat;
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
				if (chance<=80){
					MessageBox(0,"A challenger approaches", "Warning",MB_OK);
					combat=true;
				}else{
					combat=false;
				}
				
				
				if(!vive){
					_endthread();
				}
			}
		}
};

#endif
