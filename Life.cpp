#include <time.h>
#include <windows.h>
#include <process.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

#ifndef Life_CPP
#define Life_CPP
using namespace std;

class Life{
	private:
		bool vive;
		int life;
		int max;
		bool combat;
	public:
		Life(){
			life=1;
			max=3;
		}
		
		void setVive(bool v){
			vive=v;
		}
		
		void stop(){
			vive=false;
		}
		
		int getLife(){
			return life;
		}
		
		void setLife(int l){
			life=l;
		}
		
		void setCombat(bool c){
			combat=c;
		}
		
		void Winner(){
			max++;
		}
		
		void run(){
			_beginthread(&Life::runner,0, static_cast<void*>(this));
		}
		
		static void runner(void* o){
			static_cast<Life*>(o)->runnerEstatico();
		}
		
		void runnerEstatico(){
			while (vive){
				Sleep(6000);
				if (!combat && life<max){
					life++;
					MessageBox(0,"+1 Life recovered", "Message",MB_OK);
				}
				if(!vive){
					_endthread();
				}
			}
		}
};

#endif
