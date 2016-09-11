int __fastcall unref_sub_80781F0(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@2
  signed __int16 v3; // r2@3
  signed int v4; // r0@7
  signed __int16 v5; // r2@8
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 52) )
  {
    sub_8078104(a1);
    return v7;
  }
  *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 46), *(_WORD *)(a1 + 48));
  *(_WORD *)(v1 + 38) = cosine(*(_WORD *)(v1 + 54), *(_WORD *)(v1 + 48));
  v2 = *(_WORD *)(v1 + 50) + *(_WORD *)(v1 + 46);
  *(_WORD *)(v1 + 46) = v2;
  *(_WORD *)(v1 + 54) += *(_WORD *)(v1 + 56);
  if ( v2 <= 255 )
  {
    if ( v2 >= 0 )
      goto _08078244;
    v3 = 256;
  }
  else
  {
    v3 = -256;
  }
  *(_WORD *)(v1 + 46) = v2 + v3;
_08078244:
  v4 = *(_WORD *)(v1 + 54);
  if ( v4 > 255 )
  {
    v5 = -256;
_08078260:
    *(_WORD *)(v1 + 54) += v5;
    goto _08078264;
  }
  if ( v4 < 0 )
  {
    v5 = 256;
    goto _08078260;
  }
_08078264:
  --*(_WORD *)(v1 + 52);
  return v7;
}
