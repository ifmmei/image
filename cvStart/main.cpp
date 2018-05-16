#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main(int argc, char** argv) {
	//Mat ∂‘œÛ
	Mat src = imread("H:/3.1.0/blurred.png");
	if (src.empty()) {
		printf("Could not load image..,\n");
		return -1;
	}
	namedWindow("test opencv setup", CV_WINDOW_AUTOSIZE);
	imshow("test opencv setup", src);

	Mat newImg;
	cvtColor(src,newImg,CV_BGR2HSV);

	imwrite("H:/cvImg/1/cv_bgr2sv.png", newImg);

	waitKey(0);
	return 0;
}