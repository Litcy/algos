#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

//void sort(auto& data);

void sortData(auto& data)
{
    for(int i =0; i< data.size(); i++)
    {
       for(int j=0; j<data.size(); j++)
       {
          if(data[j] > data[j+1])
          {
              swap(data[j], data[j+1]);
          }
       }
    }
}

int main()
{
string input;

vector<string> inputs;
ifstream infile{"top1Mweb"};
 while(infile>>input)//read an unknown number of inputs
    {
       inputs.push_back(input);
    }
cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;


sortData(inputs);

  

   
    return 0;
}
/*
void sort(string data)
{
   for(int i=0; i < data.size(); i++)
   {
      for(int j=0; j <data.size(); j++)
      {
        if(data[j] > data[j+1])
        {
           swap(data[j],data[j+1]);
        }
      }
   }
}   */
