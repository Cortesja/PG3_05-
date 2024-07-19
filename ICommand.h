#pragma once
#include "Player.h"

class ICommand
{
public:
	virtual ~ICommand() = default;
	virtual void Exec(Player& player) = 0;
};

class MoveRightCommand : public ICommand {
public:
	void Exec(Player& player) override;
};