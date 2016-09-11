int __fastcall DrawGlyphTile_UnshadowedFont(int a1)
{
  int v1; // r7@1
  int v2; // r5@1
  _DWORD *v3; // r2@1
  int v4; // r1@1
  int v5; // r1@2
  int v6; // r0@3
  int v7; // r1@6
  int v8; // r4@6
  int v10; // [sp+0h] [bp-1Ch]@6
  int v11; // [sp+4h] [bp-18h]@6

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 8);
  v3 = &sGlyphMasks[24 * *(_BYTE *)(a1 + 2)] + 3 * *(_BYTE *)(a1 + 1);
  v4 = *v3 | v3[2];
  sGlyphBuffer = *(_DWORD *)v2 & v4;
  dword_3000364 = *(_DWORD *)(v2 + 4) & v4;
  dword_3000368 = *(_DWORD *)(v2 + 8) & v4;
  dword_300036C = *(_DWORD *)(v2 + 12) & v4;
  dword_3000370 = *(_DWORD *)(v2 + 16) & v4;
  dword_3000374 = *(_DWORD *)(v2 + 20) & v4;
  dword_3000378 = *(_DWORD *)(v2 + 24) & v4;
  dword_300037C = *(_DWORD *)(v2 + 28) & v4;
  if ( *(_BYTE *)(a1 + 1) + *(_BYTE *)(a1 + 2) > 8 )
  {
    v5 = v3[1];
    if ( *(_BYTE *)a1 == 2 )
    {
      dword_3000380 = *(_DWORD *)(v2 + 32) & v5;
      dword_3000384 = *(_DWORD *)(v2 + 36) & v5;
      dword_3000388 = *(_DWORD *)(v2 + 40) & v5;
      dword_300038C = *(_DWORD *)(v2 + 44) & v5;
      dword_3000390 = *(_DWORD *)(v2 + 48) & v5;
      dword_3000394 = *(_DWORD *)(v2 + 52) & v5;
      dword_3000398 = *(_DWORD *)(v2 + 56) & v5;
      v6 = *(_DWORD *)(v2 + 60);
    }
    else
    {
      dword_3000380 = *(_DWORD *)(v2 + 64) & v5;
      dword_3000384 = *(_DWORD *)(v2 + 68) & v5;
      dword_3000388 = *(_DWORD *)(v2 + 72) & v5;
      dword_300038C = *(_DWORD *)(v2 + 76) & v5;
      dword_3000390 = *(_DWORD *)(v2 + 80) & v5;
      dword_3000394 = *(_DWORD *)(v2 + 84) & v5;
      dword_3000398 = *(_DWORD *)(v2 + 88) & v5;
      v6 = *(_DWORD *)(v2 + 92);
    }
    dword_300039C = v6 & v5;
  }
  v7 = *(_DWORD *)(v1 + 12);
  v10 = *(_DWORD *)v7;
  v11 = *(_DWORD *)(v7 + 60);
  v8 = (int)*(&sShiftGlyphTileUnshadowedFuncs + *(_BYTE *)(v1 + 2));
  call_via_r4(&sGlyphBuffer, *(_DWORD *)(v1 + 4), &v10, *(_BYTE *)(v1 + 1));
  *(_DWORD *)v2 = sGlyphBuffer;
  *(_DWORD *)(v2 + 4) = dword_3000364;
  *(_DWORD *)(v2 + 8) = dword_3000368;
  *(_DWORD *)(v2 + 12) = dword_300036C;
  *(_DWORD *)(v2 + 16) = dword_3000370;
  *(_DWORD *)(v2 + 20) = dword_3000374;
  *(_DWORD *)(v2 + 24) = dword_3000378;
  *(_DWORD *)(v2 + 28) = dword_300037C;
  if ( *(_BYTE *)(v1 + 1) + *(_BYTE *)(v1 + 2) > 8 )
  {
    if ( *(_BYTE *)v1 != 2 )
      v2 += 32;
    *(_DWORD *)(v2 + 32) = dword_3000380;
    *(_DWORD *)(v2 + 36) = dword_3000384;
    *(_DWORD *)(v2 + 40) = dword_3000388;
    *(_DWORD *)(v2 + 44) = dword_300038C;
    *(_DWORD *)(v2 + 48) = dword_3000390;
    *(_DWORD *)(v2 + 52) = dword_3000394;
    *(_DWORD *)(v2 + 56) = dword_3000398;
    *(_DWORD *)(v2 + 60) = dword_300039C;
  }
  return (*(_BYTE *)(v1 + 1) + *(_BYTE *)(v1 + 2)) >> 3;
}
