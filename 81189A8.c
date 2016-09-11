int __fastcall sub_81189A8(int a1)
{
  int v1; // r7@1
  int v2; // r8@5
  unsigned int v3; // r4@5
  int v4; // r0@5
  int v5; // r6@5
  int v6; // r0@5
  int v7; // r5@5
  int v8; // r0@5
  int v9; // r0@5
  int v10; // r8@7
  unsigned int v11; // r4@7
  int v12; // r0@7
  int v13; // r6@7
  int v14; // r0@7
  int v15; // r0@7
  int v16; // r0@7
  int v17; // r0@8
  int v18; // r4@8
  int v19; // r0@8
  int v20; // r0@8
  int v21; // r0@8
  int v23; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  sub_8118724(a1);
  if ( *(_WORD *)(v1 + 52) )
  {
    if ( *(_WORD *)(v1 + 52) == 180 && *(_WORD *)(v1 + 46) )
    {
      v10 = _floatsisf(*(_WORD *)(v1 + 60));
      v11 = v2019004 << 30;
      v12 = _floatsisf(gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 1]);
      v13 = _mulsf3(v10, v12);
      v14 = _floatsisf(gUnknown_083F8DF4[(v11 >> 25) + 2] - 1);
      v7 = _addsf3(v13, v14);
      v15 = _floatsisf(*(_WORD *)&gUnknown_083F8DF4[(v11 >> 25) + 12]);
      v16 = _divsf3(v10, v15);
      v9 = _negsf2(v16);
      goto _08118A8A;
    }
  }
  else if ( *(_WORD *)(v1 + 46) != 1 )
  {
    v2 = _floatsisf(*(_WORD *)(v1 + 60));
    v3 = v2019004 << 30;
    v4 = _floatsisf(gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 1]);
    v5 = _mulsf3(v2, v4);
    v6 = _floatsisf(gUnknown_083F8DF4[(v3 >> 25) + 2] - 1);
    v7 = _addsf3(v5, v6);
    v8 = _floatsisf(*(_WORD *)&gUnknown_083F8DF4[(v3 >> 25) + 12]);
    v9 = _divsf3(v2, v8);
_08118A8A:
    v20190A0 = v2019094;
    v2019098 = v9;
    v17 = _addsf3(v9, v9);
    v18 = _divsf3(v17, v7);
    v19 = _mulsf3(v7, v7);
    v20 = _divsf3(0x40000000, v19);
    v21 = _addsf3(v18, v20);
    v201909C = _negsf2(v21);
    v201908C = 0;
    *(_BYTE *)(v1 + 44) &= 0xBFu;
    *(_BYTE *)(v1 + 42) = 0;
    *(_BYTE *)(v1 + 63) = (*(_BYTE *)(v1 + 63) | 4) & 0xEF;
    *(_DWORD *)(v1 + 28) = sub_811889C;
    *(_WORD *)(v1 + 50) = 0;
    return v23;
  }
  return v23;
}
