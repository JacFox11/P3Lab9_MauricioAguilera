#include "Encounter.cpp"
#include <CONIO.H>

int main(){
	Encounter encounter;
	encounter.setVive(true);
	encounter.run();
	char c=getch();
	encounter.stop();
	return 0;
}
