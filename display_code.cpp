#include <iostream>
#include <string>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

const String keys =
    "{help h usage ?  |      | print this message   }"
    "{@image1          |<none>|first image to show        }"
;


int main( int argc, const char** argv )
{

  CommandLineParser parser(argc, argv, keys);
  parser.about("ISEP C++ 2017");

  if (parser.has("help")) {
    parser.printMessage();
    return 0;
  }

  String img_filename1 = parser.get<String>(0);

  if (!parser.check()) {
    parser.printErrors();
    return 0;
  }

  Mat img1 = imread(img_filename1);
  namedWindow("WINDOW_NORMAL", WINDOW_NORMAL);

  // show images
  imshow("WINDOW_NORMAL", img1);
  waitKey(0);

  // Destroy all windows
  destroyAllWindows();
  return 0;
}
