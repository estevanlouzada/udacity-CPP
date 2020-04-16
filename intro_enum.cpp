#include<iostream> // console output
using std::cout;

int main ()
{
    // create a enum with colors 
    enum class colors {white, green, blue, black};
    
    //create a color and set blue
    colors my_color_blue = colors::blue;

    // teste to see fi my car is red 
    if(my_color_blue == colors::blue)
    {
        cout << "a cor é azul mesmo "<<"\n";
    }else {
        cout << " a cor nao é azul "<<"\n";
    }

    /*
    example of directio of a car 
    */
   enum class direction {kUp, Kdown, kRight, kLeft};

    direction entry = direction::Kdown;
    switch(entry){
        case direction::Kdown: cout<<"vai pra baixo ";
        break;
        case direction::kLeft: cout<< "vai pra esquerda ";
        break;
        case direction::kRight: cout<<"vai para a direita"; 
        break;
        case direction::kUp: cout<<"vai prar cima ";
        break;

    }

}