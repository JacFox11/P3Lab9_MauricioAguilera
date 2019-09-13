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
		cin>>op;
		switch (op){
			case '1':{
				system("cls");
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
	
	encounter.stop();
	return 0;
}
