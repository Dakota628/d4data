/**
 * Definition: UIDrawHookStyle
 * Hash: fa73270e
 */

#include "UIDrawHookStyle.h"

void UIDrawHookStyle::read(const char* base, char* &ptr) {
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
  readData(&unk_db47553, base, current);
  ptr += 0x40;
}
