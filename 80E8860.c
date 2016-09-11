int __fastcall sub_80E8860(int a1)
{
  int v1; // r2@1
  __int16 v2; // r1@2
  __int16 v3; // r0@4
  int v4; // r0@5
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 48) )
  {
    v2 = v20011B9;
    if ( v20011B9 )
    {
      *(_WORD *)(a1 + 32) = 88 * v200A9A5 + 44;
      *(_WORD *)(a1 + 34) = 16 * (v200A9A4 - v200AA29) + 96;
      *(_WORD *)(a1 + 36) = -6;
      *(_WORD *)(a1 + 46) = 0;
    }
    else
    {
      v3 = *(_WORD *)(a1 + 46) + 1;
      *(_WORD *)(v1 + 46) = v3;
      if ( v3 > 2 )
      {
        *(_WORD *)(v1 + 46) = v2;
        v4 = *(_WORD *)(v1 + 36) + 1;
        *(_WORD *)(v1 + 36) = v4;
        if ( v4 << 16 > 0 )
          *(_WORD *)(v1 + 36) = -6;
      }
    }
  }
  return v6;
}
