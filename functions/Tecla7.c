#include "functions.h"

/*  { 0x000000,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0x000000,   0x000000,   0x000000,   0x000000 }*/

void Tecla7() {
  uint32_t img1[5][5] = {
    { 0x0000ff,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0xff0000,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0xff0000,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0xff0000,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0x00ff00,   0x000000,   0x000000,   0x000000,   0x000000 }
  };

  renderRGBMatrix(img1);

  uint32_t img2[5][5] = {
    { 0xff0000,   0x0000ff,   0x000000,   0x000000,   0x000000 },
    { 0xff0000,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0xff0000,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0x00ff00,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0x000000,   0x000000,   0x000000,   0x000000 }
  };

  renderRGBMatrix(img2);

   uint32_t img3[5][5] = {
    { 0xff0000,   0xff0000,   0x000000,   0x000000,   0x000000 },
    { 0xff0000,   0x0000ff,   0x000000,   0x000000,   0x000000 },
    { 0x00ff00,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0x000000,   0x000000,   0x000000,   0x000000 }
  };

  renderRGBMatrix(img3);

   uint32_t img4[5][5] = {
    { 0xff0000,   0xff0000,   0x000000,   0x000000,   0x000000 },
    { 0x00ff00,   0xff0000,   0x000000,   0x000000,   0xff0000 },
    { 0x000000,   0x0000ff,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0x000000,   0x000000,   0x000000,   0x000000 }
  };

  renderRGBMatrix(img4);

  
   uint32_t img5[5][5] = {
    { 0x00ff00,   0xff0000,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0xff0000,   0x000000,   0x000000,   0xff0000 },
    { 0x000000,   0xff0000,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0x0000ff,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0x000000,   0x000000,   0x000000,   0x000000 }
  };

  renderRGBMatrix(img5);

   uint32_t img6[5][5] = {
    { 0x000000,   0x00ff00,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0xff0000,   0x000000,   0x000000,   0xff0000 },
    { 0x000000,   0xff0000,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0xff0000,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0x0000ff,   0x000000,   0x000000,   0x000000 }
  };

  renderRGBMatrix(img6);

  uint32_t img7[5][5] = {
    { 0x000000,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0x00ff00,   0x000000,   0x000000,   0xff0000 },
    { 0x000000,   0xff0000,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0xff0000,   0x0000ff,   0x000000,   0x000000 },
    { 0x000000,   0xff0000,   0x000000,   0x000000,   0x000000 }
  };

  renderRGBMatrix(img7);

  uint32_t img8[5][5] = {
    { 0x000000,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0x000000,   0x000000,   0x000000,   0xff0000 },
    { 0x000000,   0x00ff00,   0x000000,   0x0000ff,   0x000000 },
    { 0x000000,   0xff0000,   0xff0000,   0x000000,   0x000000 },
    { 0x000000,   0xff0000,   0x000000,   0x000000,   0x000000 }
  };

  renderRGBMatrix(img8);

   uint32_t img9[5][5] = {
    { 0x000000,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0x000000,   0x000000,   0x000000,   0x0000ff },
    { 0x000000,   0x000000,   0x000000,   0xff0000,   0x000000 },
    { 0x000000,   0x00ff00,   0xff0000,   0x000000,   0x000000 },
    { 0x000000,   0xff0000,   0x000000,   0x000000,   0x000000 }
  };

  renderRGBMatrix(img9);

   uint32_t img10[5][5] = {
    { 0x000000,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0x000000,   0x000000,   0x000000,   0xffffff },
    { 0x000000,   0xffffff,   0x000000,   0xffffff,   0x000000 },
    { 0x000000,   0xffffff,   0xffffff,   0x000000,   0x000000 },
    { 0x000000,   0xffffff,   0x000000,   0x000000,   0x000000 }
  };

  renderRGBMatrix(img10);

  uint32_t img11[5][5] = {
    { 0x000000,   0x000000,   0x000000,   0x000000,   0x000000 },
    { 0x000000,   0x000000,   0x000000,   0x000000,   0x0000ff },
    { 0x000000,   0x00ff00,   0x000000,   0xff0000,   0x000000 },
    { 0x000000,   0x00ff00,   0xff0000,   0x000000,   0x000000 },
    { 0x000000,   0xff0000,   0x000000,   0x000000,   0x000000 }
  };

  renderRGBMatrix(img11);
 }