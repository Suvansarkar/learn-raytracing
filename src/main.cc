#include <iostream>

int main() {

  // Image descriptor
  int image_width = 256;
  int image_height = 256;

  // Render
  /* PPM image format
   * P3
   * 256 256    width height
   * 255        max color value
   *
   * 0 0 0      pixel 0,0
   * 0 0 0      pixel 1,0
   * 0 0 0      pixel 2,0
   * ...
  */
  std::cout << "P3\n" << image_width << " " << image_height << "\n255\n";

  for(int j = 0; j < image_height; j++){
    std::clog << "\rScanlines remaining: " << image_height - j << std::flush;
    for (int i = 0; i < image_width; i++) {
      auto r = double(i) / (image_width - 1);
      auto g = double(j) / (image_width - 1);
      auto b = 0.0f;

      int ir = int(255.999 * r);
      int ig = int(255.999 * g);
      int ib = int(255.999 * b);

      std::cout << ir << ' ' << ig << ' ' << ib << ' ' << '\n';

    }
  }

  std::clog << "\rDone.                                             \n";
}
