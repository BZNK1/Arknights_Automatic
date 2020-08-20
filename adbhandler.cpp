#include"adbhandler.h"

using namespace std;

AdbContainer::AdbContainer() {}

AdbContainer::AdbContainer(std::string path) {
	this->path = path;//adb路径
	system((path + start).c_str());
}

int AdbContainer::AdbCommand(std::string cmd) {
	return 0;
}

void AdbContainer::AdbScreen() {
	system((path + scr).c_str());
	system((path + pullscr).c_str());

	return;
}

void AdbContainer::AdbDrag(int x1, int y1, int x2, int y2){
	system((path + drag + to_string(x1) + ' ' + to_string(y1) + ' ' + to_string(x2) + ' ' + to_string(y2)).c_str());

	return;
}

void AdbContainer::Shutdown() {
	system((path + kill).c_str());
}

void AdbContainer::AdbTouch(int x, int y) {
	system((path + drag + to_string(x) + ' ' + to_string(y)).c_str());
}
