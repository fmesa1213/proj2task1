/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 2 Task A
I wrote a program that reads a text file called dna.txt that contains one DNA strand per line
*/


#include <dna.txt>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

char DNAbase_to_mRNAbase(char dna){

if(toupper(dna)=='A') 
return 'U';

else if(toupper(dna)=='T') 
return 'A';

else if(toupper(dna)=='C') 
return 'G';

else if(toupper(dna)=='G')
return 'C';

else
return ' ';
}

string DNA_to_mRNA(string input){
string output="";

for(int i = 0; i < input.size(); ++i) {
output=output+DNAbase_to_mRNAbase(input[i]);
}
return output;
}

int main(){
ifstream fin("dna.txt");
string strand;
if (fin.fail()) {
cerr << "File cannot be read, opened, or does not exist.\n";
exit(1);
}
while(getline(fin, strand)) {
cout << DNA_to_mRNA(strand) << endl; 
}
fin.close();
return 0;
}
