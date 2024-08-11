#pragma once
#include<SFMl/Graphics.hpp>
#include "Bird.h"
#include<vector>
#include"Pipe.h"
#include<random>
class Game
{

public:
	Game(sf::RenderWindow&);
	sf::RenderWindow& win;
	
	void startGameLoop();

private:
	sf::Texture bg_texture,ground_texture;
	sf::Sprite bg_sprite,group_sprite1,ground_sprite2;
	Bird bird;
	bool is_enter_pressed, run_game,start_monitoring;

	const int move_speed = 270;


	void draw();

	void moveGround(sf::Time&);

	void doProcrssing(sf::Time& dt);
	void checkCollisions();
	void restartGame();
	void checkScore();
	std::string tostring(int);
	int score;
	int pipe_counter, pipe_spawn_time;
	std::vector<Pipe> pipes;
	std::random_device rd;
	std::uniform_int_distribution<int> dist{ 250,550 };
	sf::Font font;
	sf::Text restart_text,score_text;
	



};

