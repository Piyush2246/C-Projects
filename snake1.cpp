#include <iostream>
#include <conio.h>
#include <ctime>
#include <windows.h>  // For Sleep()

using namespace std;

bool gameover;
const int width = 40;
const int height = 25;
int x, y, fruitx, fruity, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

void setup() {
    gameover = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    srand(time(0));  // Seed the random number generator
    fruitx = rand() % width;
    fruity = rand() % height;
    score = 0;
}

void draw() {
    system("cls");  // Clear the console

    // Print the top boundary
    for (int i = 0; i < width + 2; i++) {
        cout << "#";
    }
    cout << endl;

    // Print the game field
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0)  // Left boundary
                cout << "#";
            if (i == y && j == x)  // Snake's head
                cout << "O";
            else if (i == fruity && j == fruitx)  // Fruit
                cout << "F";
            else
                cout << " ";  // Empty space

            if (j == width - 1)  // Right boundary
                cout << "#";
        }
        cout << endl;
    }

    // Print the bottom boundary
    for (int i = 0; i < width + 2; i++) {
        cout << "#";
    }
    cout << endl;

    // Print the score
    cout << "Score: " << score << endl;
}

void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'w':
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'x':
                gameover = true;
                break;
        }
    }
}

void logic() {
    int prevX = x, prevY = y;
    int prev2X, prev2Y;
    // Move the snake based on the direction
    switch (dir) {
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
    }

    // Handle boundary collision
    if (x >= width || x < 0 || y >= height || y < 0)
        gameover = true;

    // Handle fruit collision
    if (x == fruitx && y == fruity) {
        score += 10;
        fruitx = rand() % width;
        fruity = rand() % height;
    }
}

int main() {
    setup();
    while (!gameover) {
        draw();
        input();
        logic();
        Sleep(120);  // Sleep for 100 milliseconds
    }
    return 0;
}
