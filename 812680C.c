int __fastcall SetUpReflection(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  char *v6; // r7@1
  unsigned int v7; // r1@1
  int v9; // [sp+14h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = &gSprites[68 * (unsigned __int8)obj_unfreeze(v4, *(_WORD *)(a2 + 32), *(_WORD *)(v4 + 34), -104)];
  *((_DWORD *)v6 + 7) = sub_81269E0;
  v7 = (unsigned __int8)v6[5] | 0xC;
  v6[5] = v7;
  v6[5] = v7 & 0xF | 16 * gUnknown_0830FD14[v7 >> 4];
  v6[63] |= 0x40u;
  *((_DWORD *)v6 + 2) = &gDummySpriteAnimTable;
  StartSpriteAnim((int)v6, 0);
  *((_DWORD *)v6 + 4) = &gDummySpriteAffineAnimTable;
  v6[63] |= 8u;
  v6[66] &= 0x3Fu;
  *((_WORD *)v6 + 23) = *(_WORD *)(v4 + 46);
  *((_WORD *)v6 + 24) = *(_BYTE *)(v3 + 8);
  *((_WORD *)v6 + 30) = v5;
  npc_pal_op(v3, v6);
  if ( !v5 )
    v6[1] = v6[1] & 0xFC | 1;
  return v9;
}
