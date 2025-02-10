#include "raylib.h"
#include "dice.hpp"
#include <iostream>
#include <string>

int main(void){
    
    //RAYLIB
    InitWindow(800, 600, "Dice Roller");
   
    Texture2D dice1 = LoadTexture("dice1.png");
    Texture2D dice2 = LoadTexture("dice2.png");
    Texture2D dice3 = LoadTexture("dice3.png");
    Texture2D dice4 = LoadTexture("dice4.png");
    Texture2D dice5 = LoadTexture("dice5.png");
    Texture2D dice6 = LoadTexture("dice6.png");

    SetTargetFPS(60);

    while (!WindowShouldClose()){

        if (IsKeyPressed(KEY_SPACE)){

            //Generates random number
            srand(time(0));
            int randomNum = rand() % 7;
    
            //Constructor object
            Dice object(randomNum);

            BeginDrawing();
            ClearBackground(BLUE);
            
            if (object.number == 1){
                DrawTexture(dice1, 100, 100, WHITE);
            }
            else if (object.number == 2){
                DrawTexture(dice2, 100, 100, WHITE);
            }
            else if (object.number == 3){
                DrawTexture(dice3, 100, 100, WHITE);
            }
            else if (object.number == 4){
                DrawTexture(dice4, 100, 100, WHITE);
            }
            else if (object.number == 5){
                DrawTexture(dice5, 100, 100, WHITE);
            }
            else if (object.number == 6){
                DrawTexture(dice6, 100, 100, WHITE);
            }
        }

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
