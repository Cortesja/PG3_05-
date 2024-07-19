#include "Player.h"
#include "Novice.h"

Player::Player(){
	pos_.x = 1280 / 2;
	pos_.y = 720 / 2;
}

void Player::Initialize(){
}

void Player::Update(){
	MoveRight();
	MoveLeft();
}

void Player::Draw(){
	Novice::DrawBox((int)pos_.x, (int)pos_.y, (int)width_, (int)height_, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight(){
	pos_.x += speed_;
}

void Player::MoveLeft(){
	pos_.x -= speed_;
}