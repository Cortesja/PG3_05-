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
	const float speed_ = 0.5f;
};

