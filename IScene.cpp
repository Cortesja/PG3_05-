#include "IScene.h"
#include "Player.h"

int IScene::sceneNum = Title;

void TitleScene::Initialize(){
	//インスタンスを制作
	inputHandler_ = new InputManager();

	//AssignCommand
	inputHandler_->AssignMoveLeftCommand2PressKeyA();
	inputHandler_->AssignMoveRightCommand2PressKeyD();

	//new player
	player_ = new Player();
	player_->Initialize();
}

void TitleScene::Update(){
	/*if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNum = Stage;
	}*/

	//get input
	iCommand_ = inputHandler_->HandleInput();
	//set command
	if (this->iCommand_) {
		iCommand_->Exec(*player_);
	}

	player_->Update();
}

void TitleScene::Draw() {
	Novice::ScreenPrintf(1280 / 2, 720 / 2, "Title");
	player_->Draw();
}

void StageScene::Initialize() {
	//インスタンスを制作
	inputHandler_ = new InputManager();

	//AssignCommand
	inputHandler_->AssignMoveLeftCommand2PressKeyA();
	inputHandler_->AssignMoveRightCommand2PressKeyD();

	//new player
	player_ = new Player();
	player_->Initialize();
}

void StageScene::Update() {
	/*if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNum = Clear;
	}*/

	//get input
	iCommand_ = inputHandler_->HandleInput();
	//set command
	if (this->iCommand_) {
		iCommand_->Exec(*player_);
	}

	player_->Update();
}

void StageScene::Draw() {
	Novice::ScreenPrintf(1280 / 2, 720 / 2, "State");
	player_->Draw();
}

void ClearScene::Initialize() {
	//インスタンスを制作
	inputHandler_ = new InputManager();

	//AssignCommand
	inputHandler_->AssignMoveLeftCommand2PressKeyA();
	inputHandler_->AssignMoveRightCommand2PressKeyD();

	//new player
	player_ = new Player();
	player_->Initialize();
}

void ClearScene::Update() {
	/*if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNum = Title;
	}*/

	//get input
	iCommand_ = inputHandler_->HandleInput();
	//set command
	if (this->iCommand_) {
		iCommand_->Exec(*player_);
	}

	player_->Update();
}

void ClearScene::Draw() {
	Novice::ScreenPrintf(1280 / 2, 720 / 2, "Clear");
	player_->Draw();
}