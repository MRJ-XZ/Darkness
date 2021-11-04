#ifndef CHARACTERS_H
#define CHARACTERS_H
#include "SFML\Graphics.hpp"
class Player
{
private:
	int Health = 100;
	const int Damage = 100;
	int* Position;
	const int Animations;
	int CurrentAnimation;
	sf::VertexArray PlayerShape(sf::TrianglesStrip, );
public:
	Player();
	int GetHealth();
	void SetHealth(int);
	int GetDamage();
	sf::VertexArray GetShape();
	int GetCurrentAnimation();
	int GetAnimations();
	void SetCurrentAnimation(int Input);
	~Player();
};
class Enemy
{
protected:
	int Health;
	const int Damage;
	int* Position;
	const int Animations;
	int CurrentAnimation;
public:
	Enemy(int &Health, int &Damage, int Animations, int* Position);
	int GetHealth();
	void SetHealth(int);
	int GetDamage();
	sf::VertexArray GetShape();
	int GetCurrentAnimation();
	int GetAnimations();
	void SetCurrentAnimation(int Input);
	~Enemy();
};
class Guard : public Enemy
{
private:
	sf::VertexArray GuardShape(sf::TrianglesStrip, );
public:
	Guard(int Health, int Damage, int* Position);
	~Guard();
};
class Boss : public Enemy
{
private:
	sf::VertexArray BossShape(sf::TrianglesStrip, );
public:
	Boss(int Health, int Damage, int* Position);
	~Boss();
};
#endif 
