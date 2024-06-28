#include <iostream>
#include <opencv2/opencv.hpp>

extern "C" {
int gen() {
  // 创建一个随机图像，例如 640x480 像素，类型为
  // CV_8UC3（8位无符号整型，3个通道）
  cv::Mat image = cv::Mat::zeros(480, 640, CV_8UC3);

  // 填充随机颜色
  for (int y = 0; y < image.rows; ++y) {
    for (int x = 0; x < image.cols; ++x) {
      image.at<cv::Vec3b>(y, x)[0] = rand() % 256; // B
      image.at<cv::Vec3b>(y, x)[1] = rand() % 256; // G
      image.at<cv::Vec3b>(y, x)[2] = rand() % 256; // R
    }
  }

  // 保存图像到文件
  cv::imwrite("random_image.png", image);

  std::cout << "Random image has been saved as 'random_image.png'" << std::endl;

  return 0;
}
}
