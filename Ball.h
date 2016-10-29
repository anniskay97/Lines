#pragma once


	class Ball
	{
	public:
		Ball();
		~Ball();
		int flag;
		int Action();
		int GetFlag();
		void SetFlag();
		int BallC();
		void Move(int x, int y);
		void Check_Path(int x1, int x2, int y1, int y2);

	};


