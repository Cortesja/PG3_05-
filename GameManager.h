#pragma once
#include "InputManager.h"
#include <memory>
#include "IScene.h"

class GameManager : public InputManager
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="kWindowTitle"></param>
	GameManager(const char* kWindowTitle) { kWindowTitle_ = kWindowTitle; }
	/// <summary>
	/// デストラクタ
	/// </summary>
	~GameManager() = default;
	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	void Run();
	/// <summary>
	/// 
	/// </summary>
	void Initialize();
	/// <summary>
	/// 
	/// </summary>
	void Update();
private:
	const inline static int kWindowHeight_ = 720;
	const inline static int kWindowWidth_ = 1280;

	const char* kWindowTitle_;

	std::unique_ptr<IScene> sceneArr_[3];

	int currentSceneNum_ = Title;
	int prevSceneNum_;
};

