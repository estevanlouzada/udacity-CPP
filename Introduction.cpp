/*
**************************************************************************
* author : Estevan Louzada Souza 
* course : C ++ from udacity
* from quarentine 16/04/2020
**************************************************************************

*/

#include<iostream> // console log 
#include<stdlib.h>
#include<vector> // vetores 
#include<fstream> // arquivos para stream 
#include<sstream> //string de stream 

using std::cout;
using std::ifstream;
using std::string;
using std::vector;
using std::istringstream;

enum class State {KEmpty, Kobstacle};
/*
recebe matrix printa na tela 
*/
void printboard(vector<vector<int>> vctr)
{
         for (size_t i = 0; i < vctr.size(); i++)
         {   
            for (size_t j = 0; j <  vctr[i].size(); j++)
            {
                cout<< vctr[i][j];
            }
            cout<<"\n";  
         }    
}
/*
 leitura de string 
*/
vector<State> ParseString(string line)
{
    istringstream sline(line);
    int n;
    char c;
    vector<State> row;
    // enquanto sair interiro seguido char e char igual ','
    while(sline >> n >> c && c == ','){
        if(n == 0 )
        row.push_back(State::KEmpty);
        else row.push_back(State::Kobstacle);
    }
    return row;
}
/*
@param caminho do arquivo 
escreve no console o arquivo
*/
void ReadBoardFile (string path)
{
    ifstream meuArquivo(path); // file load on meuArquivo
    vector<vector<State>> board {}; // object vector of vectorsState 
    if(meuArquivo)
    {
        string line;
        while (getline(meuArquivo, line )){
          vector<State> row =  ParseString(line);
           board.push_back(row);
        }
       
    }
}


int main ()
{
    ReadBoardFile("1.board.txt");
    return 0;
}