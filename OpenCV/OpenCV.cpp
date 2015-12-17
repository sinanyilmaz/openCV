#include "stdafx.h"
#include "opencv2\core.hpp"
#include "opencv2\imgproc.hpp"
#include "opencv2\highgui.hpp"

#include <opencv2/opencv.hpp>

using namespace cv;

int main()

{

	Mat img = imread("kou.JPG");

	if (img.empty())

	{

		fprintf(stderr, "Error: load image failed.");

		return -1;

	}

	namedWindow("image", CV_WINDOW_AUTOSIZE);
	
	imshow("image", img);

	waitKey();

	return 0;

}