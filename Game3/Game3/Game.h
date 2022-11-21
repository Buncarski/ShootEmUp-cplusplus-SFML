#pragma once
#include<map>
#include <SFML/Audio.hpp>
#include "player.h"
#include "Bullet.h"
#include "Enemy.h"
#include<string>
#include<sstream>


class Game
{
private:
	sf::RenderWindow* window;

	//Resources
	std::map<std::string, sf::Texture*> textures;
	std::vector<Bullet*> bullets;

	//Player
	Player* player;

	//Enemies
	float spawnTimer;
	float spawnTimerMax;
	std::vector<Enemy*> enemies;

	//GUI
	sf::Font font;
	sf::Text pointText;

	sf::Text gameOverText;

	//Player GUI
	sf::RectangleShape playerHpBar;
	sf::RectangleShape playerHpBarBack;
	
	//World
	sf::Texture worldBgTexture;
	sf::Sprite worldBackground;
	
	//Systems
	unsigned points;

	//SFX
	sf::Music bgMusic;

	//Private functions
	void initWindow();
	void initTextures();
	void initGUI();
	void initWorld();
	void initSystems();
	void initSFX();

	void initPlayer();
	void initEnemies();

public:
	Game();
	virtual ~Game();

	//Functions
	void run();
	
	void updatePollEvents();
	void updateInput();
	void updateGUI();
	void updateWorld();
	void updateCollision();
	void updateBullets();
	void updateEnemies();
	void updateCombat();
	void update();

	void renderGUI();
	void renderWorld();
	void render();
};

