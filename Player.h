#pragma once
#include "Math/Vector3f.h"

class Player
{
public:
	Player();
	~Player() = default;

	void Initialize();
	void Update();
	void Draw();

	void MoveRight();
	void MoveLeft();
private:
	Vector3 pos_ = {};
	float width_ = 50.0f;
	float height_ = 50.0f;
	const float speed_ = 5.0f;
};

