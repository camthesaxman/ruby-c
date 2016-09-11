int __fastcall sub_807BFE0(int a1)
{
  int v1; // r3@1
  signed int v2; // r1@2
  __int16 v3; // r4@2
  __int16 v4; // r1@6
  __int16 v5; // r0@7
  int v6; // r1@8
  int v8; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( HIWORD(dword_3004B20[10 * v202F7E4 + 2]) || (v2 = *(_WORD *)(a1 + 32), v3 = *(_WORD *)(a1 + 32), v2 > 271) )
  {
    v202EEC8 = 0;
    v202EEF2 = 0;
    DestroySprite(a1);
    return v8;
  }
  if ( *(_WORD *)(a1 + 46) )
  {
    if ( v2 > 119 )
    {
      v6 = *(_WORD *)(a1 + 48);
      if ( !*(_WORD *)(a1 + 48) )
        goto _0807C050;
      *(_WORD *)(a1 + 48) = v6 - 1;
      if ( !((v6 - 1) << 16) )
        goto _0807C050;
      v5 = v6 - 2;
    }
    else
    {
      if ( (signed int)*(_WORD *)(a1 + 48) > 30 )
        goto _0807C050;
      v4 = *(_WORD *)(a1 + 48) + 1;
      *(_WORD *)(a1 + 48) = v4;
      if ( v4 > 30 )
        goto _0807C050;
      v5 = v4 + 1;
    }
    *(_WORD *)(v1 + 48) = v5;
_0807C050:
    v202EEC8 = 1056 * (*(_WORD *)(v1 + 48) & 0x1F) | *(_WORD *)(v1 + 48) & 0x1F;
    v202EEF2 = v202EEC8;
  }
  *(_WORD *)(v1 + 32) = v3 + 4;
  return v8;
}
