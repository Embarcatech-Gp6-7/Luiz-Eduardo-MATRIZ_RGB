#include "functions.h"

void teclaB() {
  uint32_t imgB[5][5] = {
    { 0x0000ff,   0x0000ff,   0x0000ff,   0x0000ff,   0x0000ff },
    { 0x0000ff,   0x0000ff,   0x0000ff,   0x0000ff,   0x0000ff },
    { 0x0000ff,   0x0000ff,   0x0000ff,   0x0000ff,   0x0000ff },
    { 0x0000ff,   0x0000ff,   0x0000ff,   0x0000ff,   0x0000ff },
    { 0x0000ff,   0x0000ff,   0x0000ff,   0x0000ff,   0x0000ff }
  };

  renderRGBMatrix(imgB);
}