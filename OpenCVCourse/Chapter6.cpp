#include <opencv2/imgcodecs.hpp>	// �̹����� �ʿ�
#include <opencv2/highgui.hpp>		// GUI
#include <opencv2/imgproc.hpp>		// �̹���ó��
#include <iostream>					// �Է� �� ��� ��Ʈ��

using namespace cv;
using namespace std;

/////////////////////////    Color Detection      ////////////////////////////

Mat imgHSV;

void main() {
	string path = "Resources/lambo.png";	// ��� ����, ������ �̹����� �ּҸ� �Է�.
	Mat img = imread(path);		// Mat Ŭ������ Matrix�� ���ڷ� ����� ǥ���ϱ� ���� ������ ����, ���⼭�� �̹����� ������ ������ ��Ʈ�� ����

	cvtColor(img, imgHSV, COLOR_BGR2HSV);		// cvtColor�� �̹��� �÷� ���� ��ȯ, img�� BGR �������� gray-scale�� ��ȯ


	imshow("Image", img);		// read�� �̹��� ��ü img�� ȭ�鿡 ��Ÿ���� ���� �Լ�
	imshow("Image HSV", imgHSV);
	waitKey(0);					// �ݱ� ��ư�� ���� �� ���� �������� ���� �Լ�


}