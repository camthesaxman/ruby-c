int __fastcall sub_80D679C(int a1)
{
  int v1; // r4@1
  char v2; // r1@2
  char v3; // r0@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_8078764(a1, 0);
  *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | ((*(_WORD *)(v1 + 4) & 0x3FF) + 4 * word_3004B06) & 0x3FF;
  if ( word_3004B06 == 1 )
  {
    v2 = *(_BYTE *)(v1 + 3) & 0xC1;
    v3 = 16;
_080D67F2:
    *(_BYTE *)(v1 + 3) = v2 | v3;
    goto _080D67F6;
  }
  if ( word_3004B06 == 2 )
  {
    v2 = *(_BYTE *)(v1 + 3) & 0xC1;
    v3 = 32;
    goto _080D67F2;
  }
_080D67F6:
  *(_WORD *)(v1 + 46) = word_3004B04;
  *(_DWORD *)(v1 + 28) = sub_80782D8;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v5;
}
