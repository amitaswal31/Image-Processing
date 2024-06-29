#include <iostream>
#include "Image.h"
using namespace std;
int main() {
  Image test("download.jpg");
  // double ker[] = {-2/9.0 , -1/9.0 ,0,
  //                 -1/9.0 ,  1/9.0 ,1/9.0,
  //                 0,1/9.0 ,2/9.0};

  // double ker[] ={1/16.0,2/16.0,1/16.0,
  //                2/16.0,4/16.0,2/16.0,
  //                1/16.0,2/16.0,1/16.0,};
  // double ker[] = {1.0/9,1.0/9,1.0/9,1.0/9,1.0/9,1.0/9,1.0/9,1.0/9,1.0/9};

  //   test.std_convolve_clamp_to_border(0, 3, 3, ker, 1, 1);
  //   test.std_convolve_clamp_to_border(1, 3, 3, ker, 1, 1);
  //   test.std_convolve_clamp_to_border(2, 3, 3, ker, 1, 1);

  test.grayscale_lum();
  // char buffer[100];
  // test.encodeMessage("hello this is image processing project");
  // test.write("enode.png");
  test.write("1blur.png");
  return 0;
}