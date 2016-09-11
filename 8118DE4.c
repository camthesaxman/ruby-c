int __fastcall sub_8118DE4(int a1)
{
  int v1; // r7@1
  unsigned int v2; // r9@3
  int v3; // r2@4
  _BYTE *v4; // r5@4
  signed int v5; // r0@11
  int v7; // [sp+18h] [bp-4h]@0

  v1 = a1;
  sub_8118724(a1);
  *(_WORD *)(v1 + 50) = 0;
  sub_81186B8(v1);
  if ( gUnknown_083F8D94[2 * v201907E] & v2019008 )
  {
    m4aSongNumStart(56);
    v2 = Random() & 1;
    if ( v2 )
    {
      v201908C = 0;
      v3 = (v201907E + 1) % 12 & 0xFF;
      v201907F = (v201907E + 1) % 12;
      v4 = gUnknown_083F8DF4;
    }
    else
    {
      v4 = gUnknown_083F8DF4;
      v201908C = _addsf3(
                   *(_DWORD *)&gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 28],
                   *(_DWORD *)&gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 28]);
      v3 = (v201907E + 11) % 12 & 0xFF;
      v201907F = v201907E;
    }
    if ( gUnknown_083F8D94[2 * v3] & v2019008 )
    {
      *(_WORD *)(v1 + 46) = 1;
      *(_WORD *)(v1 + 50) = v4[(32 * v2019004 & 0x7F) + 2];
    }
    else
    {
      *(_WORD *)(v1 + 46) = 0;
      if ( v2019004 & 3 )
      {
        *(_WORD *)(v1 + 50) = v4[(32 * v2019004 & 0x7F) + 1];
      }
      else
      {
        *(_WORD *)(v1 + 50) = v4[(32 * v2019004 & 0x7F) + 2];
        if ( v2 )
          v5 = 1056964608;
        else
          v5 = -1077936128;
        v201908C = v5;
      }
    }
    v2019098 = 1034818683;
    *(_DWORD *)(v1 + 28) = prev_quest_read_x24_hm_usage;
    *(_WORD *)(v1 + 48) = 5;
  }
  else
  {
    v201907D = -1;
    v2019003 &= 0x7Fu;
    StartSpriteAnim(v1, *(_BYTE *)(v1 + 43) + 3);
    sub_81186B8(v1);
    *(_WORD *)(v1 + 54) = 30;
    sub_811866C(v1);
    *(_WORD *)(v1 + 58) = 30 * (*(_WORD *)(v1 + 58) / 30) + 15;
    *(_DWORD *)(v1 + 28) = sub_8118834;
    m4aSongNumStartOrChange(71);
  }
  return v7;
}
