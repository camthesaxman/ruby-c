int __fastcall sub_8118B30(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r0@1
  __int16 v6; // r1@1
  __int16 v7; // r0@1
  int v9; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = _floatsisf(*(_WORD *)(a1 + 50));
  v3 = v2;
  v4 = _mulsf3(v2, 1028443341);
  v5 = _mulsf3(v4, v3);
  v6 = _fixsfsi(v5) - 45;
  *(_WORD *)(v1 + 38) = v6;
  v7 = *(_WORD *)(v1 + 50) + 1;
  *(_WORD *)(v1 + 50) = v7;
  if ( v7 > 29 && !(v6 & 0x8000) )
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
    v2019003 |= 0x40u;
  }
  return v9;
}
