#include <time.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <bits/stdc++.h>
using namespace std;

#include <time.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <bits/stdc++.h>
using namespace std;

#ifndef Move_CPP
#define Move_CPP

class Move{
	private:
		int num;
		string type;
	public:
		Move(int n){
			num=n;
			setType();
		}
		
		int getNum(){
			return num;
		}
		
		string getType(){
			return type;
		}
		
		void setType(){
			if (num==1){
				type="Rock";
			}else{
				if(num==2){
					type="Paper";
				}else{
					type="Scissors";
				}
			}
		}
		
		~Move(){}
};

#endif
