int sub_80E8534()
{
  char v0; // r0@2
  char *v1; // r7@4
  int v3; // [sp+14h] [bp-4h]@0

  if ( v20011B7 )
  {
    v0 = 1;
_080E8598:
    v20388AC = v0;
    v1 = (char *)33786028;
    goto _080E859C;
  }
  if ( v2001026 )
  {
    if ( v20011A8 == 1536 )
      v0 = 2;
    else
      v0 = 3;
    goto _080E8598;
  }
  v20388AC = v2001026;
  v1 = (char *)33786028;
_080E859C:
  *(_WORD *)(v200109C + 50) = (unsigned __int8)*v1;
  *(_WORD *)(v20010A0 + 50) = (unsigned __int8)*v1;
  *(_WORD *)(v20010A4 + 50) = (unsigned __int8)*v1;
  StartSpriteAnim(v200109C, *v1);
  StartSpriteAnim(v20010A0, *v1);
  StartSpriteAnim(v20010A4, *v1);
  *(_WORD *)(v200109C + 56) = 8;
  *(_WORD *)(v200109C + 58) = 8;
  *(_WORD *)(v200109C + 48) = 0;
  return v3;
}
