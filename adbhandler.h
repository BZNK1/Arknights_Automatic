#ifndef __ADBHANDLER_H__
#define __ADBHANDLER_H__
#pragma once

#include"stdafx.h"
#include<windows.h>
#include<cstdlib>

class AdbContainer {
	public:
		AdbContainer();
		AdbContainer(std::string);
		int AdbCommand(std::string);
		void AdbScreen();
		void Shutdown();
		void AdbDrag(int, int, int, int);
		void AdbTouch(int,int);

	private:
		const std::string app = "com.bilibili.azurlane/com.manjuu.azurlane.MainActivity";
		const std::string start = " connect 127.0.0.1:62001";
		const std::string kill = "kill-server";
		const std::string execout = "exec-out ";
		const std::string am = "shell am start ";
		const std::string scr = "shell screencap -p /sdcard/now.png";
		const std::string pullscr = "pull /sdcard/now.png ./Data/";
		const std::string drag = "shell input swip ";
		const std::string tap = "shell input tap ";
		std::string path;

};

#endif