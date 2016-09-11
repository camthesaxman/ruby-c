int __fastcall sub_8123D98(int a1)
{
  int v1; // r5@1
  int v2; // r6@1
  int v3; // r4@3
  int v4; // r0@3
  int v5; // r0@5
  int v6; // r4@5
  int v7; // r0@5
  int v8; // r0@7
  int v9; // r4@8
  int v10; // r0@8
  int v11; // r0@10
  int v12; // r4@10
  int v13; // r0@10
  int v14; // r0@12
  __int16 v15; // r0@14
  __int16 v16; // r0@16
  int v18; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = v2039274;
  if ( *(_BYTE *)(v2039274 + 1) != 255 )
  {
    if ( v202E8CC )
    {
      v9 = *(_WORD *)(v2039274 + 6);
      v10 = _floatsisf(v9);
      if ( v9 < 0 )
        v10 = _addsf3(v10, 1199570944);
      v11 = _mulsf3(v10, 1041194025);
      *(_WORD *)(v1 + 32) = (unsigned __int8)_fixunssfsi(v11) + *(_WORD *)(v1 + 46);
      v12 = *(_WORD *)(v2 + 6);
      v13 = _floatsisf(v12);
      if ( v12 < 0 )
        v13 = _addsf3(v13, 1199570944);
      v14 = _mulsf3(v13, 1032402764);
      *(_WORD *)(v1 + 34) = (unsigned __int8)_fixunssfsi(v14) + *(_WORD *)(v1 + 48);
    }
    else
    {
      v3 = *(_WORD *)(v2039274 + 6);
      v4 = _floatsisf(v3);
      if ( v3 < 0 )
        v4 = _addsf3(v4, 1199570944);
      v5 = _mulsf3(v4, 1041194025);
      *(_WORD *)(v1 + 32) = *(_WORD *)(v1 + 46) - (unsigned __int8)_fixunssfsi(v5);
      v6 = *(_WORD *)(v2 + 6);
      v7 = _floatsisf(v6);
      if ( v6 < 0 )
        v7 = _addsf3(v7, 1199570944);
      v8 = _mulsf3(v7, 1032402764);
      *(_WORD *)(v1 + 34) = *(_WORD *)(v1 + 48) - (unsigned __int8)_fixunssfsi(v8);
    }
    if ( *(_WORD *)(v1 + 50) )
    {
      *(_WORD *)(v1 + 38) = 16;
      v16 = *(_WORD *)(v1 + 52);
      *(_WORD *)(v1 + 52) = v16 + 1;
      if ( v16 > 9 )
      {
        *(_WORD *)(v1 + 52) = 0;
        *(_WORD *)(v1 + 50) = 0;
      }
    }
    else
    {
      *(_WORD *)(v1 + 38) = 17;
      v15 = *(_WORD *)(v1 + 52);
      *(_WORD *)(v1 + 52) = v15 + 1;
      if ( v15 > 9 )
      {
        *(_WORD *)(v1 + 52) = 0;
        ++*(_WORD *)(v1 + 50);
      }
    }
  }
  return v18;
}
