/**
 * Definition: UIBlinkerStyle
 * Hash: 145f2056
 */

#pragma once

#include "../types.h"
#include "UIControlFont.h"
#include "UIControlHandle.h"
#include "tb8237382.h"

#pragma push(pack, 1)

struct UIBlinkerStyle : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  UIControlHandle hParentStyle;
  DT_INT64 unk_441f783;
  DT_TAGMAP<DT_INT> unk_b835d15;
  tb8237382 unk_582a697;
  DT_TAGMAP<DT_INT> unk_b4f614c;
  UIControlFont tFont;
  DT_TAGMAP<DT_INT> unk_4741819;
  DT_TAGMAP<DT_INT> unk_16582db;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
