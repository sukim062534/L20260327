#pragma once

#include <vector>

class AActor;
class UWorld;


class UEngine
{
public:
	UEngine();
	~UEngine();

	static UEngine* Instance;

	static UEngine* GetInstance()
	{
		if (Instance == nullptr)
		{
			Instance = new UEngine();
		}

		return Instance;
	}

	void Init();
	void Term();

	void Run();

	inline UWorld* GetWorld()
	{
		return World;
	}

	static int KeyCode;

protected:
	void Input();
	void Tick();
	void Render();


	class UWorld* World;

	int bIsRunning : 1;

};

