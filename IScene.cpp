#include "IScene.h"

int IScene::sceneNum = Title;

void TitleScene::Update(char* keys, char* preKeys){
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNum = Stage;
	}
}

void TitleScene::Draw() {
	Novice::ScreenPrintf(1280 / 2, 720 / 2, "Title");
}

void StageScene::Update(char *keys, char* preKeys) {
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNum = Clear;
	}
}

void StageScene::Draw() {
	Novice::ScreenPrintf(1280 / 2, 720 / 2, "State");
}

void ClearScene::Update(char* keys, char* preKeys) {
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNum = Title;
	}
}

void ClearScene::Draw() {
	Novice::ScreenPrintf(1280 / 2, 720 / 2, "Clear");
}