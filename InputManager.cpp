#include "InputManager.h"

ICommand* InputManager::HandleInput(){
	if (Novice::CheckHitKey(DIK_D)) {
		return pressKeyD_;
	}
	if (Novice::CheckHitKey(DIK_A)) {
		return pressKeyA_;
	}
	return nullptr;
}

void InputManager::AssignMoveLeftCommand2PressKeyA(){
	ICommand* command = new MoveLeftCommand();
	this->pressKeyA_ = command;
}

void InputManager::AssignMoveRightCommand2PressKeyD() {
	ICommand* command = new MoveRightCommand();
	this->pressKeyD_ = command;
}