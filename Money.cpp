#include <time.h>
#include <windows.h>
#include <process.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

#ifndef Money_CPP
#define Money_CPP
using namespace std;

class Money{
	private:
		bool vive;
		int money;
		bool combat;
	public:
		Money(){
			money=0;
		}
		
		void setVive(bool v){
			vive=v;
		}
		
		void stop(){
			vive=false;
		}
		
		int getMoney(){
			return money;
		}
		
		void setMoney(int m){
			money=money-m;
		}
		
		void setCombat(bool c){
			combat=c;
		}
		
		void run(){
			_beginthread(&Money::runner,0, static_cast<void*>(this));
		}
		
		static void runner(void* o){
			static_cast<Money*>(o)->runnerEstatico();
		}
		
		void runnerEstatico(){
			while (vive){
				Sleep(7000);
				if (!combat){
					money++;
					MessageBox(0,"+1 Money acquired", "Message",MB_OK);
				}
				if(!vive){
					_endthread();
				}
			}
		}
};

#endif
