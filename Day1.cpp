#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    
    int row1[1000];
    int row2[1000];
    int row = 0;

    string fileText;
    ifstream MyReadFile("D:/Dokumenti/Code/AdventOfCode2024/day1.txt");
    while(getline(MyReadFile,fileText)){
        string num1 = "";
        string num2 = "";
        for(int i = 0; i<fileText.size();++i){
            if (i < 5){
                num1 = num1 + fileText.at(i);
            }
            else if (i > 7){
                num2 = num2 + fileText.at(i);
            }
        }
        row1[row] = stoi(num1);
        row2[row] = stoi(num2);
        row++;   
    }
    bool sorted = false;
    while(!sorted){
        sorted = true;
        for(int i = 0; i < 999; i++){
            
            if(row1[i] > row1[i+1]){
                int change = row1[i];
                row1[i] = row1[i+1];
                row1[i+1] = change;
                sorted = false;
            }
            else{
                
            }
            if(row2[i] > row2[i+1]){
                int change = row2[i];
                row2[i] = row2[i+1];
                row2[i+1] = change;
                sorted = false;
            }
        }
    }
    int answer = 0;
    for(int i = 0; i < 1000; i++){
        answer = answer + abs((row1[i] - row2[i]));
    }
    cout << answer << "\n";
    int similarity_score = 0;
    for(int i = 0 ; i<1000;i++){
        int counter = 0;
        for(int j = 0; j < 1000; j++){
            if(row1[i] == row2[j]){
                counter++;
            }
        }
        similarity_score = similarity_score + (row1[i]*counter);
    }
    cout << similarity_score;
    MyReadFile.close();

}