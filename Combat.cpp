#include <time.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <CONIO.H>
#include <bits/stdc++.h>
#include "Move.cpp"
using namespace std;

#ifndef Combat_CPP
#define Combat_CPP

class Combat{
	private:
		int life;
		int oplife;
		Move* opmove;
		Move* move;
	public:
		Combat(int l, int o){
			life=l;
			oplife=o;
		}
		
		int getLife(){
			return life;
		}
		
		void Battle(){
			char ch;
			int n;
			while (life>0 && oplife>0){
				system("cls");
				cout<<"Your Life: "<<life<<setw(15)<<"Opponent's Life: "<<oplife<<endl;
				cout<<"1. Rock"<<endl<<
				"2. Paper"<<endl<<
				"3. Scissors"<<endl<<
				"Choose your move: ";
				cin>>n;
				while (n<1 || n>3){
					cout<<"Invalid move, try again"<<endl;
					system("cls");
					cout<<"Your Life: "<<life<<setw(15)<<"Opponent's Life: "<<oplife<<endl;
					cout<<"1. Rock"<<endl<<
					"2. Paper"<<endl<<
					"3. Scissors"<<endl<<
					"Choose your move: ";
					cin>>n;
				}
				srand (time(NULL));
				int temp;
				temp = (rand() % 3) + 1;
				move=new Move(n);
				opmove= new Move(temp);
				cout<<move->getType()<<" vs "<<opmove->getType()<<endl;
				if (move->getNum()==opmove->getNum()){
					cout<<"A tie, nothing happens"<<endl;
				}
				if (move->getNum()==1){
					if (opmove->getNum()==2){
						cout<<"Opponent comes on top, you lose a life point"<<endl;
						life--;
					}
					if (opmove->getNum()==3){
						cout<<"Nice! opponent loses a life point"<<endl;
						oplife--;
					}
				}
				if (move->getNum()==2){
					if (opmove->getNum()==3){
						cout<<"Opponent comes on top, you lose a life point"<<endl;
						life--;
					}
					if (opmove->getNum()==1){
						cout<<"Nice! opponent loses a life point"<<endl;
						oplife--;
					}
				}
				if (move->getNum()==3){
					if (opmove->getNum()==1){
						cout<<"Opponent comes on top, you lose a life point"<<endl;
						life--;
					}
					if (opmove->getNum()==2){
						cout<<"Nice! opponent loses a life point"<<endl;
						oplife--;
					}
				}
				system("pause");
			}
			if (opmove->getNum()==0){
				cout<<"VICTORY!"<<endl;
				system("pause");
			}
		}
};

#endif
