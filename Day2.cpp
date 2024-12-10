#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <list>
#include <cctype>
using namespace std;

int main(){
    string fileText;
    ifstream MyReadFile("D:/Dokumenti/Code/AdventOfCode2024/Day2.txt");
    int isSafe = 0;
    while(getline(MyReadFile,fileText)){
        
        list<int> row;
        string number = "";
        for(int i = 0; i < fileText.size() ; ++i){
            
            if(isspace(fileText.at(i))){
                row.push_back(stoi(number));
                cout << number << " ";
                number = "";
            }else if((i+1) == fileText.size()){
                number = number + fileText.at(i);
                row.push_back(stoi(number));
                cout << number << " ";
                number = "";
            }
            else{
                number = number + fileText.at(i);
            }

        }
        bool decreasing = true;
        if (row.at(0) > row.at(1)){
            decreasing = true;
        }else if(row.at(0) < row.at(1)){
            decreasing = false;
        }else{
            continue;
        }
        for(int i = 1; i < row.size(); i++){
            if(decreasing){
                
            }else{

            }
        }
        cout << "\n";

    }
    MyReadFile.close();
}