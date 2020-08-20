// Azuruline_map.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "adbhandler.h"

using namespace std;
using namespace cv;

struct posi {//存放坐标
	int x, y;
};

int n,plan[110];
Mat pics[110];//存放材料图片
std::string dict[110] = {"0","skexp_xl","skexp_l","skexp_m","exp_xl","exp_l","exp_m","close","back","home","confirm","caster_s","caster_m","saber_s","saber_m","docter_s","docter_m","van_s","van_m","sniper_s","sniper_m","special_s","special_m","auxiliary_s","auxiliary_m","shield_s","shield_m","carbon_s","carbon_m","carbon_l","brick_s","brick_m","brick_l","gold","skill_s","skill_m","skill_l","-oh_s","-oh_m","nano","device_s","device_m","device_l","device_xl","d32_s","stone_s","stone_m","stone_l","stone_xl","ti_s","ti_m","iron_s","iron_m","iron_l","iron_xl","=o_s","=o_m","=o_l","=o_xl","mn_s","mn_m","pinkstone_s","pinkstone_m","gel_s","gel_m","nbca","starstone_s","starstone_m","-coo_s","-coo_m","-coo_l","-coo_xl","sugar_s","sugar_m","sugar_l","sugar_xl","zuozhan" };//对比图片与材料名称
posi maps[110];//用坐标存图省得开二维数组

void init() {//初始化
	pics[1] = imread("./Data/attack.jpg");
	pics[2] = imread("./Data/autofight.jpg");
	pics[3] = imread("./Data/boss.jpg");
	pics[4] = imread("./Data/click2continue.jpg");
	pics[5] = imread("./Data/confirm.jpg");
	pics[6] = imread("./Data/go_rightnow.jpg");
	pics[7] = imread("./Data/mapA1.jpg");
	pics[8] = imread("./Data/mark.jpg");
	pics[9] = imread("./Data/queding.jpg");
	pics[10] = imread("./Data/ship1.jpg");
	pics[11] = imread("./Data/ship2.jpg");
	pics[12] = imread("./Data/ship3.jpg");
	pics[13] = imread("./Data/ship4.jpg");
	pics[14] = imread("./Data/standard.jpg");
	pics[15] = imread("./Data/switch.jpg");
}

int main() {
	AdbContainer adb("F:\\Nox\\bin\\nox_adb ");
	for (int i = 1; i <= 88; i++) {
		cout << i << ":" << dict[i] << endl;
	}
	cout << "材料种类数:";
	cin >> n;
	cout << "材料序号:个数:选择地图(如3-5)(在体力允许的范围顺序刷图)";
	for (int i = 1; i <= n; i++) {
		int t1, t2, t3, t4;
		scanf_s("%d:%d:%d-%d", &t1,&t2,&t3,&t4);
		plan[t1] = t2;
		maps[t1].x = t3;
		maps[t1].y = t4;
	}
}