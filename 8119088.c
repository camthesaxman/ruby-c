int __fastcall sub_8119088(int a1)
{
  int v1; // r6@1
  int v2; // r4@2
  int v3; // r0@2
  int v4; // r2@2
  int v5; // r0@4
  int v6; // r0@4
  int v7; // r2@4
  int v8; // r0@6
  int v10; // [sp+10h] [bp-4h]@0

  v1 = a1;
  sub_8118724(a1);
  if ( _gtsf2(v2019094, 1109393408) <= 0 )
  {
    v2 = v2019086;
    v3 = _floatsisf(v2019086);
    v4 = v3;
    if ( v2 < 0 )
      v4 = _addsf3(v3, 1199570944);
    v5 = _divsf3(1082130432, v4);
    v2019098 = _negsf2(v5);
    v6 = _floatsisf(v2);
    v7 = v6;
    if ( v2 < 0 )
      v7 = _addsf3(v6, 1199570944);
    v8 = _divsf3(v201908C, v7);
    v2019090 = _negsf2(v8);
    *(_BYTE *)(v1 + 42) = 2;
    *(_BYTE *)(v1 + 63) = (*(_BYTE *)(v1 + 63) | 4) & 0xEF;
    *(_WORD *)(v1 + 48) = 3;
    *(_DWORD *)(v1 + 28) = sub_8118F8C;
  }
  return v10;
}
