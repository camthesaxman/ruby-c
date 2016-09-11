int __fastcall sub_8119D80(int a1)
{
  int v1; // r4@1
  char *v2; // r2@3
  char *v3; // r0@3
  signed __int16 v4; // r3@3
  int v5; // r2@6
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(v2019038 + 46) )
  {
    if ( *(_WORD *)(v2019038 + 52) == *(_WORD *)&gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 20] + 270 )
    {
      v2 = gSprites;
      v3 = &gSprites[68 * *(_WORD *)(a1 + 58)];
      v4 = 46;
      goto _08119DEE;
    }
  }
  else if ( *(_WORD *)(v2019038 + 52) == *(_WORD *)&gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 18] + 90 )
  {
    v2 = gSprites;
    v3 = &gSprites[68 * *(_WORD *)(a1 + 58)];
    v4 = 52;
_08119DEE:
    *((_WORD *)v3 + 24) = v4;
    *(_WORD *)&v2[68 * *(_WORD *)(v1 + 54) + 48] = v4;
    v5 = (int)(v2 + 28);
    *(_DWORD *)(68 * *(_WORD *)(v1 + 58) + v5) = sub_8119D08;
    *(_DWORD *)(68 * *(_WORD *)(v1 + 54) + v5) = sub_8119BCC;
    m4aSongNumStart(43);
    return v7;
  }
  return v7;
}
