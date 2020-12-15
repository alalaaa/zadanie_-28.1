#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;



long minPlik(string nazwa, int system)
{
    ifstream a;
    char* endptr;
    string l1, l2;
    long l, min;
    a.open(nazwa);
    bool 1min = true;

    if(a.good())
    while(!a.eof())
    {
        a>>l1 >> l2;
        l = strtol(l2.c_str(), &endptr, system);

        if(1min)    
        {
            min = l;
            1min = false;
        }
        else
        if(l < min)
        min = l;
    }

    a.close();
    return min;
}

int main(int argc, char** argv) 
{
    ofstream aOut;
    aOut.open("Wyniki.txt");

    aOut<<"1 plik min:"<<min1 <<"\n";
    aOut<<"2 plik min:"<<min2 <<"\n";
    aOut<<"3 plik min:"<<min3<<"\n";

    long min1 = minPlik("dane_systemy1.txt", 2);
    long min2 = minPlik("dane_systemy2.txt",4);
    long min3 = minPlik("dane_systemy3.txt",8);

    aOut.close();
    return 0;
}
