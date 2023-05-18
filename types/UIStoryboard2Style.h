/**
 * Definition: UIStoryboard2Style
 * Hash: be515d2a
 */

#pragma once

#include "../types.h"
#include "UIControlHandle.h"

#pragma push(pack, 1)

struct UIStoryboard2Style : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  UIControlHandle hParentStyle;
  DT_INT64 unk_441f783;
  DT_TAGMAP<DT_INT> unk_b835d15;
  DT_SNO<SnoGroup::StoryBoard> snoStoryboard;
  DT_ENUM<DT_INT> unk_5f75855;
  DT_ENUM<DT_INT> unk_8c27446;
  DT_ENUM<DT_INT> unk_d07ad36;
  DT_TAGMAP<DT_INT> unk_92765af;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
