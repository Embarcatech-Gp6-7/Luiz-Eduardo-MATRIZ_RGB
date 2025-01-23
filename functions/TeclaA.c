#include "functions.h"

void teclaA() {
  uint32_t imgA[5][5] = {
    { 0,        0,        0,        0,        0 },
    { 0,        0,        0,        0,        0 },
    { 0,        0,        0,        0,        0 },
    { 0,        0,        0,        0,        0 },
    { 0,        0,        0,        0,        0 }
  };

  renderRGBMatrix(imgA);
}