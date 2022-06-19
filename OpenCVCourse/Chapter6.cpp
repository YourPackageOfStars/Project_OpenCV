#include <opencv2/imgcodecs.hpp>	// 이미지가 필요
#include <opencv2/highgui.hpp>		// GUI
#include <opencv2/imgproc.hpp>		// 이미지처리
#include <iostream>					// 입력 및 출력 스트림

using namespace cv;
using namespace std;

/////////////////////////    Color Detection      ////////////////////////////

Mat imgHSV;

void main() {
	string path = "Resources/lambo.png";	// 경로 정의, 가져올 이미지의 주소를 입력.
	Mat img = imread(path);		// Mat 클래스는 Matrix의 약자로 행렬을 표현하기 위한 데이터 형식, 여기서는 이미지의 데이터 유형을 매트로 정의

	cvtColor(img, imgHSV, COLOR_BGR2HSV);		// cvtColor는 이미지 컬러 공간 변환, img의 BGR 색공간을 gray-scale로 변환


	imshow("Image", img);		// read한 이미지 객체 img를 화면에 나타내기 위한 함수
	imshow("Image HSV", imgHSV);
	waitKey(0);					// 닫기 버튼을 누를 떄 까지 종료하지 말란 함수


}