int __fastcall sub_811889C(int a1)
{
  int v1; // r5@1
  _BYTE *v2; // r2@2
  char v3; // r0@2
  int v4; // r0@6
  int v5; // r0@8
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  sub_8118724(a1);
  ++*(_WORD *)(v1 + 50);
  if ( ((*(_WORD *)(v1 + 54) + 132) & 0xFFFFu) <= 0xD4 )
  {
    v2 = (_BYTE *)(v1 + 62);
    v3 = *(_BYTE *)(v1 + 62) & 0xFB;
  }
  else
  {
    v2 = (_BYTE *)(v1 + 62);
    v3 = *(_BYTE *)(v1 + 62) | 4;
  }
  *v2 = v3;
  if ( (signed int)*(_WORD *)(v1 + 50) > 29 )
  {
    if ( *(_WORD *)(v1 + 46) )
    {
      v5 = _subsf3(v20190A0, 0x40000000);
      if ( _gesf2(v2019094, v5) >= 0 )
      {
_08118926:
        v201907D = -1;
        v2019003 &= 0x7Fu;
        StartSpriteAnim(v1, *(_BYTE *)(v1 + 43) + 3);
        sub_81186B8(v1);
        *(_WORD *)(v1 + 54) = 30;
        sub_811866C(v1);
        *(_WORD *)(v1 + 58) = 30 * (*(_WORD *)(v1 + 58) / 30) + 15;
        *(_DWORD *)(v1 + 28) = sub_8118834;
        m4aSongNumStartOrChange(71);
        v2019098 = 0;
        v201909C = 0;
        v201908C = -1082130432;
        return v7;
      }
    }
    else
    {
      v4 = _subsf3(v20190A0, 0x40000000);
      if ( _lesf2(v2019094, v4) <= 0 )
        goto _08118926;
    }
  }
  return v7;
}
