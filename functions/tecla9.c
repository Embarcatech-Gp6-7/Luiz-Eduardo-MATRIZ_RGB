#include "functions.h"

void tecla9() {
  uint32_t img[5][5] = {
    { 0xff0000,0x00ff00,0x0000ff,0,0 },
    { 0,0,0,0,0 },
    { 0,0,0,0,0 },
    { 0,0,0,0,0 },
    { 0,0,0,0,0 }
  };

  renderRGBMatrix(img);
}