/**
 * Definition: ActorDefinition
 * Hash: b7e17422
 */

#include "ActorDefinition.h"

void ActorDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&eType, base, current);
  current = ptr + 0xc;
  readData(&dwFlags, base, current);
  current = ptr + 0x10;
  readData(&dwFlagsEx, base, current);
  current = ptr + 0x14;
  readData(&snoAppearance, base, current);
  current = ptr + 0x18;
  readData(&arCustomizationAppearances, base, current);
  current = ptr + 0x28;
  readData(&arAnimSets, base, current);
  current = ptr + 0x38;
  readData(&snoAnimTree, base, current);
  current = ptr + 0x40;
  readData(&unk_db10329, base, current);
  current = ptr + 0x50;
  readData(&eVariantType, base, current);
  current = ptr + 0x54;
  readData(&unk_441fd2e, base, current);
  current = ptr + 0x58;
  readData(&unk_3d234d5, base, current);
  current = ptr + 0x5c;
  readData(&unk_9ae2069, base, current);
  current = ptr + 0x64;
  readData(&wcylBounds, base, current);
  current = ptr + 0x78;
  readData(&aabbBounds, base, current);
  current = ptr + 0x90;
  readData(&wsBounds, base, current);
  current = ptr + 0xa0;
  readData(&unk_5daa275, base, current);
  current = ptr + 0xb8;
  readData(&wpLocationPowerSrc, base, current);
  current = ptr + 0xc4;
  readData(&ePickStyle, base, current);
  current = ptr + 0xc8;
  readData(&flAttachmentScaleFactor, base, current);
  current = ptr + 0xcc;
  readData(&eDefaultTeam, base, current);
  current = ptr + 0xd0;
  readData(&eCullingLevel, base, current);
  current = ptr + 0xd4;
  readData(&unk_c794c59, base, current);
  current = ptr + 0xd8;
  readData(&unk_99ee15d, base, current);
  current = ptr + 0xdc;
  readData(&unk_1cf72ac, base, current);
  current = ptr + 0xe0;
  readData(&unk_3598432, base, current);
  current = ptr + 0xe4;
  readData(&unk_e579f8c, base, current);
  current = ptr + 0xe8;
  readData(&unk_9d78021, base, current);
  current = ptr + 0xec;
  readData(&eTopology, base, current);
  current = ptr + 0xf0;
  readData(&ptMsgTriggeredEvents, base, current);
  current = ptr + 0x100;
  readData(&ptPhysData, base, current);
  current = ptr + 0x110;
  readData(&ptCollData, base, current);
  current = ptr + 0x120;
  readData(&unk_17acd26, base, current);
  current = ptr + 0x124;
  readData(&unk_8fbba9b, base, current);
  current = ptr + 0x128;
  readData(&ptGizmoData, base, current);
  current = ptr + 0x140;
  readData(&ptMonsterData, base, current);
  current = ptr + 0x150;
  readData(&ptCritterData, base, current);
  current = ptr + 0x160;
  readData(&ptPlayerData, base, current);
  current = ptr + 0x170;
  readData(&ptItemData, base, current);
  current = ptr + 0x180;
  readData(&ptCombatData, base, current);
  current = ptr + 0x190;
  readData(&ptDeathData, base, current);
  current = ptr + 0x1a0;
  readData(&ptEffectData, base, current);
  current = ptr + 0x1b0;
  readData(&ptProjData, base, current);
  current = ptr + 0x1c0;
  readData(&ptPropData, base, current);
  current = ptr + 0x1d0;
  readData(&ptMovingData, base, current);
  current = ptr + 0x1e0;
  readData(&ptBrainData, base, current);
  current = ptr + 0x1f0;
  readData(&ptServerData, base, current);
  current = ptr + 0x200;
  readData(&ptUIData, base, current);
  current = ptr + 0x210;
  readData(&ptAIData, base, current);
  current = ptr + 0x220;
  readData(&ptVOData, base, current);
  current = ptr + 0x230;
  readData(&ptNPCData, base, current);
  current = ptr + 0x240;
  readData(&ptSoundTableData, base, current);
  current = ptr + 0x250;
  readData(&ptMountData, base, current);
  current = ptr + 0x260;
  readData(&ptPostprocessed, base, current);
  current = ptr + 0x268;
  readData(&snoPrefabAttachment, base, current);
  current = ptr + 0x26c;
  readData(&unk_d2b5e35, base, current);
  current = ptr + 0x270;
  readData(&unk_2607092, base, current);
  current = ptr + 0x274;
  readData(&unk_79da2a0, base, current);
  current = ptr + 0x278;
  readData(&unk_261d1df, base, current);
  ptr += 0x288;
}
