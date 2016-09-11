int __fastcall sub_80E255C(int a1)
{
  _DWORD *v1; // r1@4
  unsigned int i; // r4@6
  char *v3; // r1@7
  int v5; // [sp+10h] [bp-4h]@0

  if ( (signed int)*(_WORD *)(a1 + 52) <= 0 )
  {
    *(_DWORD *)(*(_WORD *)(a1 + 58) | (*(_WORD *)(a1 + 60) << 16)) = *(_WORD *)(a1 + 54);
    if ( ((*(_WORD *)(a1 + 56) - 2) & 0xFFFFu) <= 1 )
    {
      for ( i = 0; i < v2024A68; i = (i + 1) & 0xFF )
      {
        v3 = &gSprites[68 * *(_BYTE *)(i + 33704928) + 62];
        *v3 &= 0xFDu;
      }
    }
    move_anim_8072740(a1);
  }
  else
  {
    --*(_WORD *)(a1 + 52);
    if ( (signed int)*(_WORD *)(a1 + 48) <= 0 )
    {
      *(_WORD *)(a1 + 48) = *(_WORD *)(a1 + 50);
      v1 = (_DWORD *)(*(_WORD *)(a1 + 58) | (*(_WORD *)(a1 + 60) << 16));
      *v1 += *(_WORD *)(a1 + 46);
      *(_WORD *)(a1 + 46) = -*(_WORD *)(a1 + 46);
    }
    else
    {
      --*(_WORD *)(a1 + 48);
    }
  }
  return v5;
}
