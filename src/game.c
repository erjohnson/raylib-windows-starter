#include <raylib.h>

static Color color_grey  = {176, 174, 167, 255};
static Color color_black = {48, 46, 39, 255};

int main(void)
{
    int screen_width  = 1920;
    int screen_height = 1080;

    InitWindow(screen_width, screen_height, "raylib-windows-starter");

    SetTargetFPS(60);

    int hw = screen_width / 2;
    int hh = screen_height / 2;

    while (!WindowShouldClose())
    {
        BeginDrawing();
        {
            ClearBackground(color_grey);

            DrawText("Hello window!", hw, hh, 20, color_black);
        }
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
