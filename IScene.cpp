#include "IScene.h"
#include "Player.h"

int IScene::sceneNum = Title;

void TitleScene::Initialize(){
}

void TitleScene::Update(char* keys, char* preKeys){
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNum = Stage;
	}
}

void TitleScene::Draw() {
	Novice::ScreenPrintf(1280 / 2, 200, "Title");
}

void StageScene::Initialize() {
	delete inputHandler_;
	delete player_;
	delete iCommand_;
	//インスタンスを制作
	inputHandler_ = new InputManager();

	//AssignCommand
	inputHandler_->AssignMoveLeftCommand2PressKeyA();
	inputHandler_->AssignMoveRightCommand2PressKeyD();

	//new player
	player_ = new Player();
	player_->Initialize();
}

void StageScene::Update(char* keys, char* preKeys) {
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNum = Clear;
	}

	//get input
	iCommand_ = inputHandler_->HandleInput();
	//set command
	if (this->iCommand_) {
		iCommand_->Exec(*player_);
	}
}

void StageScene::Draw() {
	Novice::ScreenPrintf(1280 / 2, 200, "Stage");
	player_->Draw();
}

void ClearScene::Initialize() {
}

void ClearScene::Update(char* keys, char* preKeys) {
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNum = Title;
	}
}

void ClearScene::Draw() {
	Novice::ScreenPrintf(1280 / 2, 200, "Clear");
}