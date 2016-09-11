int __fastcall sub_8119134(int a1)
{
  int v1; // r6@1
  int v2; // r5@2
  int v3; // r0@2
  int v4; // r2@2
  int v5; // r0@4
  int v6; // r4@4
  int v7; // r0@4
  int v8; // r2@4
  int v10; // [sp+10h] [bp-4h]@0

  v1 = a1;
  sub_8118724(a1);
  if ( _gtsf2(v2019094, 1114636288) <= 0 )
  {
    m4aSongNumStartOrChange(93);
    v2 = v2019084;
    v3 = _floatsisf(v2019084);
    v4 = v3;
    if ( v2 < 0 )
      v4 = _addsf3(v3, 1199570944);
    v5 = _divsf3(1101004800, v4);
    v2019098 = _negsf2(v5);
    v6 = _subsf3(1065353216, v201908C);
    v7 = _floatsisf(v2);
    v8 = v7;
    if ( v2 < 0 )
      v8 = _addsf3(v7, 1199570944);
    v2019090 = _divsf3(v6, v8);
    *(_BYTE *)(v1 + 42) = 1;
    *(_BYTE *)(v1 + 63) = (*(_BYTE *)(v1 + 63) | 4) & 0xEF;
    *(_WORD *)(v1 + 48) = 2;
    *(_DWORD *)(v1 + 28) = sub_8119088;
  }
  return v10;
}
