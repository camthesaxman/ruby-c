int __fastcall sub_80AA754(int a1)
{
  int v1; // r4@1
  void *v2; // r2@24
  signed int v3; // r1@24
  void **v4; // r2@25
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( word_30017A0 == 32 )
  {
_080AA7A2:
    *(_WORD *)(a1 + 46) ^= 1u;
    goto _080AA870;
  }
  if ( (signed int)(unsigned __int16)word_30017A0 <= 32 )
  {
    if ( word_30017A0 != 2 )
    {
      if ( (signed int)(unsigned __int16)word_30017A0 <= 2 )
      {
        if ( word_30017A0 != 1 )
          goto _080AA870;
        v2 = *(&gUnknown_083C92E4 + 2 * *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 46));
        v3 = 1;
        goto _080AA84E;
      }
      if ( word_30017A0 == 8 )
      {
        sub_80AAD08(a1, 1);
        goto _080AA870;
      }
      if ( word_30017A0 != 16 )
        goto _080AA870;
      goto _080AA7A2;
    }
    v4 = &gUnknown_083C92E4 + 2 * *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 46);
    v3 = -1;
    goto _080AA84A;
  }
  if ( word_30017A0 == 128 )
  {
    if ( *(_WORD *)(a1 + 48) == 8 )
      *(_WORD *)(a1 + 48) = 0;
    else
      ++*(_WORD *)(a1 + 48);
  }
  else
  {
    if ( (signed int)(unsigned __int16)word_30017A0 > 128 )
    {
      if ( word_30017A0 == 256 )
      {
        v2 = *(&gUnknown_083C92E4 + 2 * *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 46));
        v3 = 10;
_080AA84E:
        call_via_r2(a1, v3, v2);
        sub_80AA614(*(_BYTE *)(v1 + 50), *(_BYTE *)(v1 + 52));
        goto _080AA870;
      }
      if ( word_30017A0 != 512 )
        goto _080AA870;
      v4 = &gUnknown_083C92E4 + 2 * *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 46);
      v3 = -10;
_080AA84A:
      v2 = *v4;
      goto _080AA84E;
    }
    if ( word_30017A0 == 64 )
    {
      if ( *(_WORD *)(a1 + 48) )
        --*(_WORD *)(a1 + 48);
      else
        *(_WORD *)(a1 + 48) = 8;
    }
  }
_080AA870:
  *(_WORD *)(v1 + 32) = *(&gUnknown_083C9296[2 * *(_WORD *)(v1 + 48)] + *(_WORD *)(v1 + 46));
  *(_WORD *)(v1 + 34) = *((_BYTE *)&gUnknown_083C92A8 + *(_WORD *)(v1 + 48));
  return v6;
}
