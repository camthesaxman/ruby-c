int __fastcall sub_8119B24(int a1)
{
  int v1; // r4@1
  int v2; // r1@2
  char *v3; // r0@10
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 48) < 0 )
  {
    if ( (signed int)*(_WORD *)(a1 + 52) < 0 )
    {
      m4aSongNumStart(43);
      StartSpriteAnim(v1, *(_WORD *)(v2019038 + 46) + 4);
      *(_DWORD *)(v1 + 28) = sub_8119AAC;
      v3 = &gSprites[68 * *(_WORD *)(v1 + 58) + 44];
      *v3 &= 0x7Fu;
      return v5;
    }
    --*(_WORD *)(a1 + 52);
    if ( !(*(_BYTE *)(a1 + 44) & 0x3F) )
    {
      if ( *(_BYTE *)(a1 + 43) != 1 )
      {
        --*(_WORD *)(a1 + 38);
        return v5;
      }
      goto _08119B74;
    }
  }
  else
  {
    v2 = *(_WORD *)(a1 + 48) - 1;
    *(_WORD *)(a1 + 48) = v2;
    --*(_WORD *)(a1 + 34);
    if ( !(v2 << 16) && *(_BYTE *)(a1 + 43) == 1 )
    {
_08119B74:
      ++*(_WORD *)(a1 + 38);
      return v5;
    }
  }
  return v5;
}
