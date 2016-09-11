int __fastcall sub_811CFD0(int a1)
{
  int v1; // r3@1
  int v2; // r1@4
  unsigned int v3; // r4@4
  int v4; // r2@6
  int v5; // r2@13
  __int16 v6; // r0@18
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 56) )
  {
    --*(_WORD *)(a1 + 56);
    if ( *(_WORD *)(a1 + 58) )
      v200C000 = 1;
  }
  else
  {
    v2 = *(_WORD *)(a1 + 34);
    v3 = 0;
    do
    {
      *(&word_3004DE0[v2] + v3) = *(_WORD *)(a1 + 46) << 16 >> 24;
      *(&word_3004F20[v2] + v3) = *(_WORD *)(a1 + 32) & 0xFF;
      v3 = (v3 + 1) & 0xFFFF;
    }
    while ( v3 <= 0x13 );
    v4 = *(_WORD *)(a1 + 32);
    if ( !*(_WORD *)(a1 + 32) && *(_WORD *)(a1 + 46) == 4096 )
      *(_WORD *)(a1 + 48) = 1;
    *(_WORD *)(a1 + 32) = v4 - 16;
    *(_WORD *)(a1 + 46) += 128;
    if ( (v4 - 16) & 0x8000 )
      *(_WORD *)(a1 + 32) = 0;
    if ( (signed int)*(_WORD *)(a1 + 46) > 4096 )
      *(_WORD *)(a1 + 46) = 4096;
    v5 = *(_WORD *)(a1 + 58);
    if ( *(_WORD *)(a1 + 58) )
      v200C000 = 1;
    if ( *(_WORD *)(a1 + 48) )
    {
      if ( !v5 || v200C020 > 6 && (v6 = *(_WORD *)(a1 + 50), *(_WORD *)(v1 + 50) = v6 + 1, v6 > 7) )
      {
        ++v200C020;
        DestroySprite(v1);
      }
    }
  }
  return v8;
}
