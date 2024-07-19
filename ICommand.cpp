#include "ICommand.h"

void MoveRightCommand::Exec(Player& player){
	player.MoveRight();
}
