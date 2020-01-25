#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <chrono>
#include <thread>

using namespace cv;
int main(int argc, char** argv )
{
    printf("HEllo World!\n");
    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }
    printf("%s\n", argv[1]);
    Mat image = imread( argv[1], 1 );
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);
    waitKey(0);
    std::this_thread::sleep_for(std::chrono::milliseconds(10000));
    return 0;
}