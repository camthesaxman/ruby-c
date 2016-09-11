int __fastcall sub_8078174(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@2
  signed __int16 v3; // r2@3
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 52) )
  {
    sub_8078104(a1);
    return v5;
  }
  *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 46), (*(_WORD *)(a1 + 56) << 16 >> 24) + *(_WORD *)(a1 + 48));
  *(_WORD *)(v1 + 38) = cosine(*(_WORD *)(v1 + 46), (*(_WORD *)(v1 + 56) << 16 >> 24) + *(_WORD *)(v1 + 48));
  v2 = *(_WORD *)(v1 + 50) + *(_WORD *)(v1 + 46);
  *(_WORD *)(v1 + 46) = v2;
  *(_WORD *)(v1 + 56) += *(_WORD *)(v1 + 54);
  if ( v2 > 255 )
  {
    v3 = -256;
_080781D8:
    *(_WORD *)(v1 + 46) = v2 + v3;
    goto _080781DC;
  }
  if ( v2 < 0 )
  {
    v3 = 256;
    goto _080781D8;
  }
_080781DC:
  --*(_WORD *)(v1 + 52);
  return v5;
}
