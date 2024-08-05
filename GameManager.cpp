#include "GameManager.h"

void GameManager::Run(){
	Initialize();

	while (Novice::ProcessMessage() == 0) {

		//フレームの開始
		Novice::BeginFrame();
#pragma region -----------------内容-----------------
		Update(); //入力チェック更新

		//シーンのチェック
		prevSceneNum_ = currentSceneNum_;
		currentSceneNum_ = sceneArr_[currentSceneNum_]->GetSceneNum();

		//シーン変更チェック
		if (prevSceneNum_ != currentSceneNum_) {
			sceneArr_[currentSceneNum_]->Initialize();
		}
		////更新処理
		sceneArr_[currentSceneNum_]->Update(keys, preKeys); //シーンごとの更新処理

		////描画処理
		sceneArr_[currentSceneNum_]->Draw();
#pragma endregion
		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}
}

void GameManager::Initialize(){
	// ライブラリの初期化
	Novice::Initialize(kWindowTitle_, kWindowWidth_, kWindowHeight_);
	sceneArr_[Title] = std::make_unique<TitleScene>();
	sceneArr_[Stage] = std::make_unique<StageScene>();
	sceneArr_[Clear] = std::make_unique<ClearScene>();

	sceneArr_[currentSceneNum_]->Initialize();
}

void GameManager::Update(){
	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);
}
