int __fastcall sub_806C92C(unsigned __int8 a1)
{
  int v1; // r5@1
  char *v2; // r1@1
  unsigned int v3; // r6@1
  unsigned int v4; // r4@1
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &gSprites[68 * a1];
  v3 = *((_WORD *)v2 + 23) & 0xFF;
  v4 = *((_WORD *)v2 + 24) & 0xFF;
  if ( !(battle_type_is_double(*((_WORD *)v2 + 24) << 24) << 24) )
  {
    if ( !v3 )
    {
      if ( !v4 )
        LOWORD(v4) = 1;
      goto _0806C97C;
    }
    if ( !v4 )
      goto _0806C97C;
_0806C97A:
    LOWORD(v4) = 0;
    goto _0806C97C;
  }
  if ( v3 > 1 )
  {
    if ( v4 <= 1 )
      goto _0806C97C;
    goto _0806C97A;
  }
  if ( v4 <= 1 )
    LOWORD(v4) = 2;
_0806C97C:
  *(_WORD *)&gSprites[68 * v1 + 48] = v4;
  return v6;
}
