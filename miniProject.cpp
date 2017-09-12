#include<iostream>
#include<conio.h>
#include<fstream>
#include <time.h>
using namespace std;
int main ()
{
	clock_t begin, end;
     double cpu_time_used;

	fstream a,b;
	begin = clock();
	char ch;
	a.open("1GB_FILE.txt");
	b.open("copy_1GB_FILE.txt");

	while (!a.eof())
		{
		a.get(ch);
		b<<ch;
		}
	end = clock();
	cpu_time_used = ((double)(end - begin)) / CLOCKS_PER_SEC;
	cout<<"\nContents copied to 1GB_FILE.txt"<<endl;
	cout<<"\nCopy Time: "<<cpu_time_used;
	a.close();
	b.close();

//-------------------------------------------------------------------------------------

	begin = clock();
	a.open("2GB_FILE.txt");
	b.open("copy_2GB_FILE.txt");
	while (!a.eof())
		{
		a.get(ch);
		b<<ch;
		}
	end = clock();
	cpu_time_used = ((double)(end - begin)) / CLOCKS_PER_SEC;
	cout<<"\nContents copied to 2GB_FILE.txt"<<endl;
	cout<<"\nCopy Time: "<<cpu_time_used;
	a.close();
	b.close();

//-------------------------------------------------------------------------------------

    begin = clock();
	a.open("3GB_FILE.txt");
	b.open("copy_3GB_FILE.txt");

	while (!a.eof())
		{
		a.get(ch);
		b<<ch;
		}
	end = clock();
	cpu_time_used = ((double)(end - begin)) / CLOCKS_PER_SEC;
	cout<<"\nContents copied to 3GB_FILE.txt"<<endl;
	cout<<"\nCopy Time: "<<cpu_time_used;
	a.close();
	b.close();

//-------------------------------------------------------------------------------------

    begin = clock();
	a.open("4GB_FILE.txt");
	b.open("copy_4GB_FILE.txt");
	while (!a.eof())
		{
		a.get(ch);
		b<<ch;
		}
	end = clock();
	cpu_time_used = ((double)(end - begin)) / CLOCKS_PER_SEC;
	cout<<"\nContents copied to 4GB_FILE.txt"<<endl;
	cout<<"\nCopy Time: "<<cpu_time_used;
	a.close();
	b.close();

//-------------------------------------------------------------------------------------

    begin = clock();
	a.open("5GB_FILE.txt");
	b.open("copy_5GB_FILE.txt");

	while (!a.eof())
		{
		a.get(ch);
		b<<ch;
		}
	end = clock();
	cpu_time_used = ((double)(end - begin)) / CLOCKS_PER_SEC;
	cout<<"\nContents copied to 5GB_FILE.txt"<<endl;
	cout<<"\nCopy Time: "<<cpu_time_used;
	a.close();
	b.close();

//-------------------------------------------------------------------------------------
	return 0;
}
