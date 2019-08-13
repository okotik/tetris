// Copyright 2009-2014 Blam Games, Inc. All Rights Reserved.

#pragma once

#define STEP 1			// начальная скорость (время одного шага)
#define CSTEP 0.85		// коэффициент-множитель увеличения скорости
#define START_X 7
#define START_Y 1
#define BG_SIZE_X 16
#define BG_SIZE_Y 20

#include "BaseApp.h"
#include "figure.h"

class TestApp : public BaseApp
{
	typedef BaseApp Parent;

	private:
		int mObj1XOld;
		int mObj1YOld;
		int mObj1X;
		int mObj1Y;

		int mObj2X;
		int mObj2Y;

		bool mDirection;

	public:
		TestApp();
		virtual void KeyPressed(int btnCode);
		virtual void UpdateF(float deltaTime);

        void printWalls();//прорисовать стены
        bool createObj();//создание нового объекта
        void printObj(const Figure*);//прорисовать текущий (перенести на матрицу)
        void printNextObj();
        void showInfo();
        void toEmptyOld();//очистить прошлый (очистить на матрице соответсвующие элементы)
        void lockIn();//зафиксироваться текущий объект на матрице
        bool downIsEmpty();//true - низ под объектом пуст, можно двигаться
        bool rightIsEmpty();
        bool leftIsEmpty();
        bool canBeRotate();//true - можно повернуть
        bool burn();//пытаеться сжечь ряд. true - если удалось (было что сжигать)
        void gameOver();

private:
        int score;
        float currentTime;
        float step;
        Figure* obj;
        Figure* oldObj;
        int nextObj;
        bool nextFlip;
};
