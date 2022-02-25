#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
		int kuota[4][2]={{2,20.000},
		{4,40.000},
		{6,80.000},
		{12,100.000}};
		
			for (int b=0;b<4;b++){
				for (int k=0;k<2;k++){
					cout<<kuota[b][k]<<" ";
			
				}
				cout <<endl;
			}
		getch();
		
}
