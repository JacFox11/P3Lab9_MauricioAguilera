#include <time.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <bits/stdc++.h>
using namespace std;

#ifndef Combat_CPP
#define Combat_CPP

class Combat{
	private:
		int life;
		int oplife;
		int opmove;
	public:
		Combat(int l, int o){
			life=l;
			oplife=o;
		}
		
		void Battle(){
			int move;
			while (life>0 && oplife>0){
				system("cls");
				cout<<"Your Life: "<<life<<setw(15)<<"Opponent's Life: "<<oplife<<endl;
				cout<<"1. Rock"<<endl<<
				"2. Paper"<<endl<<
				"3. Scissors"<<endl<<
				"Choose your move: ";
				cin>>move;
				while (move<1 || move>3){
					cout<<"Invalid move, try again"<<endl;
					system("cls");
					cout<<"Your Life: "<<life<<setw(15)<<"Opponent's Life: "<<oplife<<endl;
					cout<<"1. Rock"<<endl<<
					"2. Paper"<<endl<<
					"3. Scissors"<<endl<<
					"Choose your move: ";
					cin>>move;
				}
				srand (time(NULL));
				opmove = (rand() % 3) + 1;
				if (move==opmove){
					if (move==1){
						
					}
				}
			}
		}
};

#endif
