#include "Encounter.cpp"

#include <CONIO.H>

int main(){
	Encounter encounter;
	encounter.setVive(true);
	encounter.run();
	char op='0';
	while (op!='3'){
		system("cls");
		cout<<"...:::MAIN MENU:::..."<<endl;
		cout<<"1. Show parameters"<<endl<<
		"2. Get +1 Life (1 money)"<<endl<<
		"3. Exit"<<endl<<
		"Choose an option: ";
		op=getch();
		cout<<endl;
		switch (op){
			case '1':{
				cout<<"Life: "<<encounter.getLife().getLife()<<endl;
				cout<<"Money: "<<encounter.getMoney().getMoney()<<endl;
				cout<<"Level: "<<encounter.getLevel()<<endl;
				system("pause");
				break;
			}
			case '2':{
				
				break;
			}
			case '3':{
				
				break;
			}
			default:{
				
				break;
			}
		}
	}
	encounter.getLife().stop();
	encounter.getMoney().stop();
	encounter.stop();
	return 0;
}
