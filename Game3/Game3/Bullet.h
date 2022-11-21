#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class Bullet
{
private:
	sf::Sprite shape;
	sf::Texture* texture;

	sf::Vector2f direction;
	float movementSpeed;

public:
	Bullet();
	Bullet(sf::Texture* texture, float pos_x, float pos_y, float dirX, float dirY, float movementSpeed);
	virtual ~Bullet();

	//Accessor
	const sf::FloatRect getBounds() const;

	void update();
	void render(sf::RenderTarget* target);
};

