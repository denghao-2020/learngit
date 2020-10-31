#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream fin;
fin.open("data.txt",ios::in);
int sum=0,str;
while(fin>>str)
fin>>str;
sum+=str;
fin.close();
fstream fout("result.txt",ios::out);
fout<<sum;
fout.close();
return 0;
 } 
