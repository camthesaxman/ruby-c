int __fastcall sub_8118F8C(int a1)
{
  int v1; // r6@1
  unsigned int v2; // r7@3
  int v3; // r4@3
  int v4; // r0@3
  int v5; // r5@3
  int v6; // r0@5
  int v7; // r0@5
  int v8; // r0@8
  int v9; // r0@8
  int v11; // [sp+18h] [bp-4h]@0

  v1 = a1;
  sub_8118724(a1);
  if ( _gtsf2(v201908C, 1056964608) <= 0 )
  {
    sub_81186B8(v1);
    if ( sub_81186E8(v1) << 16 )
    {
      if ( _nesf2(v2019090, 0) && _ltsf2(v201908C, 0) < 0 )
      {
        v2019090 = 0;
        v201908C = 0;
        v8 = _extendsfdf2(v2019098);
        v9 = _divdf3(v8);
        v2019098 = _truncdfsf2(v9);
      }
    }
    else
    {
      v2019090 = 0;
      v2 = v2019004 << 30;
      v3 = gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 3];
      v4 = _floatsisf(v3);
      v5 = v4;
      if ( v3 < 0 )
        v5 = _addsf3(v4, 1132462080);
      v6 = _floatsisf(gUnknown_083F8DF4[(v2 >> 25) + 4] + 1);
      v7 = _divsf3(v5, v6);
      v201908C = _subsf3(v201908C, v7);
      *(_WORD *)(v1 + 48) = 4;
      *(_DWORD *)(v1 + 28) = sub_8118DE4;
    }
  }
  return v11;
}
