int __fastcall sub_80E85F8(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  signed int v3; // r0@5
  __int16 v4; // r0@12
  __int16 v5; // r0@13
  signed __int16 v6; // r0@14
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 & 1 )
    *(_WORD *)(v1 + 56) = (gSineTable[*(_WORD *)(v1 + 48)] << 16 >> 21) + 8;
  else
    *(_WORD *)(v1 + 58) = 8 - (gSineTable[*(_WORD *)(v1 + 48)] << 16 >> 21);
  *(_WORD *)(v1 + 48) = (*(_WORD *)(v1 + 48) + 5) & 0xFF;
  v4000052 = (*(_WORD *)(v1 + 58) << 8) | *(_WORD *)(v1 + 56);
  if ( v2001096 )
  {
    sub_80E8534();
    *(_WORD *)(v200109C + 56) = 8;
    *(_WORD *)(v200109C + 58) = 8;
    *(_WORD *)(v200109C + 48) = 0;
    v3 = *(_WORD *)(v1 + 50);
    if ( v3 == 1 )
    {
      *(_WORD *)(v1 + 32) = 216;
      v5 = v20011A8;
    }
    else
    {
      if ( v3 > 1 )
      {
        if ( v3 == 2 )
        {
          *(_WORD *)(v1 + 32) = 151;
          v6 = 96;
_080E8718:
          *(_WORD *)(v1 + 34) = v6;
          return v8;
        }
        if ( v3 != 3 )
          return v8;
        *(_WORD *)(v1 + 32) = 8 * *(&gUnknown_083DBCC4[7 * v20011A8] + v20011A9) + 31;
        v4 = v20011A8;
      }
      else
      {
        if ( *(_WORD *)(v1 + 50) )
          return v8;
        *(_WORD *)(v1 + 32) = 88 * v20011A9 + 32;
        v4 = v20011A8;
      }
      v5 = v4 - v20011B5;
    }
    v6 = 16 * v5 + 96;
    goto _080E8718;
  }
  return v8;
}
