#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma region DIRECTION
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#pragma endregion

#pragma region MAP_SIZE
#define MAP_WIDTH 10
#define MAP_HEIGHT 20 

#pragma endregion

#pragma region GAME_CONFIG

#define SCORE 100
#define DELAY 10

#pragma endregion


int map[MAP_HEIGHT][MAP_WIDTH] = { 0 };

void Title();

void GameInitializer();
void OnGame();
void GameOver();

void BlockCreator();
void Move(int key);

void SetScore();
void SaveScore();



int main(void) {
	Title();

}