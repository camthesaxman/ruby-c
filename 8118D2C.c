int __fastcall prev_quest_read_x24_hm_usage(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_8118724(a1);
  v2 = *(_WORD *)(v1 + 50) - 1;
  *(_WORD *)(v1 + 50) = v2;
  if ( v2 == 15 )
    v2019098 = _mulsf3(v2019098, -1082130432);
  if ( !*(_WORD *)(v1 + 50) )
  {
    if ( *(_WORD *)(v1 + 46) )
    {
      *(_BYTE *)(v1 + 44) |= 0x40u;
      m4aSongNumStart(56);
      sub_811952C(v1);
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
  }
  return v4;
}
