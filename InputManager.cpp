#include "InputManager.h"

ICommand* InputManager::HandleInput()
{
	return nullptr;
}

void InputManager::AssignMoveLeftCommand2PressKeyA(){
	ICommand* command = new MoveLeftCommand();
	this->pressKeyA_ = command;
}
