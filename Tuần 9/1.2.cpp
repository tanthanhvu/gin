#include "opencv2/opencv.hpp"
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
using namespace cv;



int main() {
	VideoCapture cap(0);
	Mat frame; cap >> frame;
	system("cls");
	if (!frame.empty())
	{
		int x;
		cout << "Press SPACE to capture\n";
		while (true)
		{
			cap >> frame;
			imshow("Tuan9", frame);
			waitKey(30);
			if (_kbhit()) {
				int key = _getch();
				if (key == 32) {
					imwrite("Tuan9.jpg", frame);
					waitKey(1000);
					imshow("Tuan9.jpg", frame);
				}
			}
		}
	}
	else {
		cout << "Something is wrong with the webcam, could not get frame." << endl;
	}

}