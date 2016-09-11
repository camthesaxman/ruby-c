int __fastcall sub_80D8D1C(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  __int16 v3; // r2@1
  int v4; // r3@5
  int v5; // r0@5
  _WORD *v6; // r1@8
  int v8; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 32) + 4;
  *(_WORD *)(v1 + 32) = v2;
  v3 = *(_WORD *)(v1 + 34) + 8;
  *(_WORD *)(v1 + 34) = v3;
  if ( v2 >= (signed int)*(_WORD *)(v1 + 52) || v3 >= (signed int)*(_WORD *)(v1 + 54) )
  {
    if ( *(_WORD *)(v1 + 46) != 1 || *(_WORD *)(v1 + 56) )
    {
      v6 = &byte_3004B28[40 * *(_WORD *)(v1 + 58)] + 2 * *(_WORD *)(v1 + 60);
      --*v6;
      FreeOamMatrix((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27);
      DestroySprite(v1);
    }
    else
    {
      v4 = *(_BYTE *)(v1 + 67);
      v5 = (unsigned __int8)CreateSprite((int)"Э'Э'да7\bЄЫ=\b", *(_WORD *)(v1 + 52), *(_WORD *)(v1 + 54));
      *(_WORD *)(v1 + 46) = v5;
      if ( v5 != 64 )
      {
        dword_2020020[17 * *(_WORD *)(v1 + 46)] = (int)sub_80D8E00;
        *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 46) + 58] = *(_WORD *)(v1 + 58);
        *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 46) + 60] = *(_WORD *)(v1 + 60);
      }
      FreeOamMatrix((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27);
      DestroySprite(v1);
    }
  }
  return v8;
}
