int __fastcall sub_80DFFD0(int a1)
{
  int v1; // r4@1
  unsigned __int8 *v2; // r0@2
  unsigned __int8 v3; // r5@4
  char v4; // r6@4
  __int16 v5; // r0@13
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
    v2 = (unsigned __int8 *)33748937;
  else
    v2 = (unsigned __int8 *)33748936;
  v3 = *v2;
  v4 = 20;
  *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | ((*(_WORD *)(v1 + 4) & 0x3FF) + 4) & 0x3FF;
  if ( word_3004B02 == 1 )
  {
    *(_WORD *)(v1 + 32) = sub_807A100(v3, 5u) - 14;
    *(_WORD *)(v1 + 34) = sub_807A100(v3, 2u) + 16;
  }
  else if ( word_3004B02 > 1 )
  {
    if ( word_3004B02 == 2 )
    {
      *(_WORD *)(v1 + 32) = sub_807A100(v3, 4u) + 8;
      v5 = sub_807A100(v3, 2u) + 8;
    }
    else
    {
      if ( word_3004B02 != 3 )
        goto _080E00A0;
      *(_WORD *)(v1 + 32) = sub_807A100(v3, 4u) + 14;
      v5 = sub_807A100(v3, 2u) + 16;
    }
    *(_WORD *)(v1 + 34) = v5;
    StartSpriteAffineAnim(v1, 1);
    v4 = -20;
  }
  else if ( !word_3004B02 )
  {
    *(_WORD *)(v1 + 32) = sub_807A100(v3, 5u) - 8;
    *(_WORD *)(v1 + 34) = sub_807A100(v3, 2u) + 8;
  }
_080E00A0:
  *(_WORD *)(v1 + 46) = 32;
  *(_WORD *)(v1 + 50) = v4 + *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 54) = *(_WORD *)(v1 + 34) + 12;
  *(_WORD *)(v1 + 56) = -12;
  sub_80786EC(v1);
  *(_DWORD *)(v1 + 28) = sub_80E00D0;
  return v7;
}
