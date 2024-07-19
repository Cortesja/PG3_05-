#pragma once
#include "InputManager.h"

class Player;

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
	virtual void Update() = 0;
	virtual void Draw() = 0;

	int GetSceneNum() { return sceneNum; }
protected:
	static int sceneNum;
};

////////////////////////////////////////////////
////////////////////////////////////////////////
//全ゲームシーン
////////////////////////////////////////////////
////////////////////////////////////////////////

#pragma region TitleScene
class TitleScene : public IScene
{
public:
	/// <summary>
	/// 
	/// </summary>
	void Initialize() override;
	/// <summary>
	/// 
	/// </summary>
	void Update() override;
	/// <summary>
	/// 
	/// </summary>
	void Draw() override;
private:
	InputManager* inputHandler_ = nullptr;
	ICommand* iCommand_ = nullptr;
	Player* player_;
};
#pragma endregion
#pragma region StageScene
class StageScene : public IScene
{
public:
	/// <summary>
	/// 
	/// </summary>
	void Initialize() override;
	/// <summary>
	/// 
	/// </summary>
	void Update() override;
	/// <summary>
	/// 
	/// </summary>
	void Draw() override;
private:
	InputManager* inputHandler_ = nullptr;
	ICommand* iCommand_ = nullptr;
	Player* player_;
};
#pragma endregion
#pragma region ClearScene
class ClearScene : public IScene
{
public:
	/// <summary>
	/// 
	/// </summary>
	void Initialize() override;
	/// <summary>
	/// 
	/// </summary>
	void Update() override;
	/// <summary>
	/// 
	/// </summary>
	void Draw() override;
private:
	InputManager* inputHandler_ = nullptr;
	ICommand* iCommand_ = nullptr;
	Player* player_;
};
#pragma endregion