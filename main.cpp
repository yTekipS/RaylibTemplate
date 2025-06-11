#include "raylib.h"

int main(void)
{
    //* DEFINING SCREEN SIZE
    const int screenWidth = 800;
    const int screenHeight = 450;
    //* INITIALAIZING WINDOW
    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);  //* SETTING TARGETED AMOUNT OF FPS        

    //* MAIN GAME LOOP
    while (!WindowShouldClose())  
    {
        //* UPDATE
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        //* DRAW
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    CloseWindow();        //* CLOSE WINDOW AND OPENGL CONTEXT

    return 0;
}
