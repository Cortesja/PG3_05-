#pragma once
#include "Novice.h"
#include "ICommand.h"
class InputManager
{
public:
	ICommand* HandleInput();

	void AssignMoveLeftCommand2PressKeyA();
	void AssignMoveRightCommand2PressKeyD();
private:
	ICommand* pressKeyD_;
	ICommand* pressKeyA_;
protected:
	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };
};

