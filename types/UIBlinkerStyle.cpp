/**
 * Definition: UIBlinkerStyle
 * Hash: 145f2056
 */

#include "UIBlinkerStyle.h"

void UIBlinkerStyle::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&hParentStyle, base, current);
  current = ptr + 0x18;
  readData(&unk_441f783, base, current);
  current = ptr + 0x20;
  readData(&unk_b835d15, base, current);
  current = ptr + 0x30;
  readData(&unk_582a697, base, current);
  current = ptr + 0x40;
  readData(&unk_b4f614c, base, current);
  current = ptr + 0x50;
  readData(&tFont, base, current);
  current = ptr + 0x60;
  readData(&unk_4741819, base, current);
  current = ptr + 0x70;
  readData(&unk_16582db, base, current);
  ptr += 0x80;
}
