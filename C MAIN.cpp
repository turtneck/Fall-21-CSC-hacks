// Jonah Belback
// HACKATHON
// 10/25/21
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
#include <cmath>
#include <memory>

using namespace std;
//going to do TOTALLY LEGAL THINGS
//by having the matlab image txt be converted into a c array
//and making a TOTALLY REAL library .h file
//so i can load in data into arduino

//WILL HAVE TO MANUALLY PUT IT IN THE ZIP FILE
//SORRY I SUCK
int main()
{
	//options is hardcoded
	// 0 = image
	// 1 = video (WIP??)
	
	int option = 0;
	//ifstream file("img_text_file.txt");
	
	FILE *file;
	file = fopen("img_text_file.txt","r");
	
	if(option == 0)
	{
		//making array with values-------------
		int readin[8][8];
		
		for(int i=0;i<8;i++)
		{   fscanf(file,"%d %d %d %d %d %d %d %d"
			,&readin[i][0]
			,&readin[i][1]
			,&readin[i][2]
			,&readin[i][3]
			,&readin[i][4]
			,&readin[i][5]
			,&readin[i][6]
			,&readin[i][7]);   }
					//UGLY BUT WORKS AHHAHAHAHAHHA
		
		//making fake library------------------
		ofstream libr("imgT_data.h");
		
		libr
		<<"#ifndef imgT_data_h\n"
		<<"#define imgT_data_h\n\n"
		<<"class imgT_data {\n"
		<<"\tprivate:\n"
		<<"\t  int data[8][8] = {\n";
		
		for(int i=0;i<8;i++)
		{
			libr << "\t\t{";
			for(int j=0;j<8;j++)
			{
				libr
				<<setw(6)
				<< readin[i][j]
				<<",\t"; 
			}
			libr << "},\n";
		}
		libr << "\t\t};" <<endl;
				//private array is done
				//now public call fucntion
		libr
		<<"\n\tpublic:"
		<<"\n\t  int getarr(int a, int b){return data[a][b];}";
		
			//close class
		libr
		<<"\n\n};"
		<<"\n\n#endif"
		<<endl;
		
			//close files
		libr.close();
		fclose(file);
	}
	

}
