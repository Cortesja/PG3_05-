#pragma once
#include "InputManager.h"
//シーン名をEnumで定義
enum Scene {
	Title,
	Stage,
	Clear,
	SceneNum
};
//シーン内での処理を行う基底クラス
class IScene
{
public:
	virtual ~IScene() = default;
	
	virtual void Initialize() = 0;
	virtual void Update(char *keys, char *preKeys) = 0;
	virtual void Draw() = 0;

	int GetSceneNum();
protected:
	static int sceneNum;
};

////////////////////////////////////////////////
////////////////////////////////////////////////
//全ゲームシーン
////////////////////////////////////////////////
////////////////////////////////////////////////


class TitleScene : public IScene
{
public:
	/// <summary>
	/// 
	/// </summary>
	void Initialize() override {
		
	}
	/// <summary>
	/// 
	/// </summary>
	void Update(char* keys, char* preKeys) override {
		if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
			sceneNum = Stage;
		}
	}
	/// <summary>
	/// 
	/// </summary>
	void Draw() override {
		Novice::ScreenPrintf(1280 / 2, 720 / 2, "Title");
	}
};

class StageScene : public IScene
{
public:
	/// <summary>
	/// 
	/// </summary>
	void Initialize() override {

	}
	/// <summary>
	/// 
	/// </summary>
	void Update(char* keys, char* preKeys) override {
		if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
			sceneNum = Clear;
		}
	}	
	/// <summary>
	/// 
	/// </summary>
	void Draw() override {
		Novice::ScreenPrintf(1280 / 2, 720 / 2, "State");
	}
};

class ClearScene : public IScene
{
public:
	/// <summary>
	/// 
	/// </summary>
	void Initialize() override {

	}
	/// <summary>
	/// 
	/// </summary>
	void Update(char *keys, char *preKeys) override {
		if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
			sceneNum = Title;
		}
	}	
	/// <summary>
	/// 
	/// </summary>
	void Draw() override {
		Novice::ScreenPrintf(1280 / 2, 720 / 2, "Clear");
	}
};