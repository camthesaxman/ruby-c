int __fastcall sub_80D50E8(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@4
  signed __int16 v3; // r2@5
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 52) )
  {
    move_anim_8074EE0(a1);
    return v5;
  }
  if ( (signed int)*(_WORD *)(a1 + 56) > 10000 )
    *(_BYTE *)(a1 + 67) = 1;
  *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 46), (*(_WORD *)(a1 + 56) << 16 >> 24) + *(_WORD *)(a1 + 48));
  *(_WORD *)(v1 + 38) = cosine(*(_WORD *)(v1 + 46), (*(_WORD *)(v1 + 56) << 16 >> 24) + *(_WORD *)(v1 + 48));
  v2 = *(_WORD *)(v1 + 50) + *(_WORD *)(v1 + 46);
  *(_WORD *)(v1 + 46) = v2;
  *(_WORD *)(v1 + 56) += *(_WORD *)(v1 + 54);
  if ( v2 > 255 )
  {
    v3 = -256;
_080D5164:
    *(_WORD *)(v1 + 46) = v2 + v3;
    goto _080D5168;
  }
  if ( v2 < 0 )
  {
    v3 = 256;
    goto _080D5164;
  }
_080D5168:
  --*(_WORD *)(v1 + 52);
  return v5;
}
