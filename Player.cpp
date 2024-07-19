#include "Player.h"

void Player::Initialize(){
}

void Player::MoveRight(){
	this->pos_.x += this->speed_;
}

void Player::MoveLeft(){
	this->pos_.x -= this->speed_;
}