int __fastcall sub_8141B74(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@3
  int *v3; // r0@4
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 48) > 3 )
  {
    *(_BYTE *)(a1 + 62) &= 0xFBu;
    v2 = *(_WORD *)(a1 + 36) + 5;
    *(_WORD *)(a1 + 36) = v2;
    *(_WORD *)(a1 + 38) -= 5;
    if ( v2 > 32 )
    {
      v3 = &dword_3004B20[10 * *(_WORD *)(a1 + 46)];
      --*((_WORD *)v3 + 16);
      FreeSpriteOamMatrix(v1);
      DestroySprite(v1);
    }
  }
  else
  {
    ++*(_WORD *)(a1 + 48);
  }
  return v5;
}
