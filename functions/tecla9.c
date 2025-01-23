#include "functions.h"

void tecla9() {
  uint32_t img[5][5] = {
    { 0xff0000, 0x00ff00, 0x0000ff, 0x505050, 0x505050 },
    { 0x200000, 0x002000, 0x000020, 0x101010, 0x101010 },
    { 0,        0,        0,        0,        0 },
    { 0,        0,        0,        0,        0 },
    { 0,        0,        0,        0,        0 }
  };

  renderRGBMatrix(img);
}