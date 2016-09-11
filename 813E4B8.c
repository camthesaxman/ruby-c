int __fastcall sub_813E4B8(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  _BYTE *v3; // r2@2
  char v4; // r0@2
  int v5; // r1@4
  __int16 v6; // r4@6
  int v7; // r2@7
  int v8; // r1@10
  __int16 v9; // ST00_2@10
  int v11; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 60) + 1;
  *(_WORD *)(v1 + 60) = v2;
  if ( v2 & 1 )
  {
    v3 = (_BYTE *)(v1 + 62);
    v4 = *(_BYTE *)(v1 + 62) & 0xFB;
  }
  else
  {
    v3 = (_BYTE *)(v1 + 62);
    v4 = *(_BYTE *)(v1 + 62) | 4;
  }
  *v3 = v4;
  v5 = *(_WORD *)(v1 + 50);
  if ( (signed int)*(_WORD *)(v1 + 50) <= 63 )
  {
    *(_WORD *)(v1 + 50) = v5 + 2;
    v6 = sine((v5 + 2) & 0xFF, 40);
    *(_WORD *)(v1 + 36) = cosine(32 * *(_WORD *)(v1 + 46) & 0xFF, v6);
    *(_WORD *)(v1 + 38) = sine(32 * *(_WORD *)(v1 + 46) & 0xFF, v6);
    if ( !*(_WORD *)(v1 + 46) )
    {
      v7 = *(_WORD *)(v1 + 48);
      *(_WORD *)(v1 + 52) -= v7;
      if ( *(_WORD *)(v1 + 60) & 1 && v7 << 16 )
        *(_WORD *)(v1 + 48) = v7 - 1;
      v8 = *(_WORD *)(v1 + 52);
      v9 = *(_WORD *)((char *)gSineTable + (2 * (v8 + 64) & 0x1FF));
      SetOamMatrix(
        16,
        v9,
        *(_WORD *)((char *)gSineTable + (2 * v8 & 0x1FF)),
        -*(_WORD *)((char *)gSineTable + (2 * v8 & 0x1FF)),
        v9);
    }
  }
  else
  {
    DestroySprite(v1);
  }
  return v11;
}
