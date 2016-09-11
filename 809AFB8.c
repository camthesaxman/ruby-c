int sub_809AFB8()
{
  _BYTE *v0; // r0@1
  int v2; // [sp+8h] [bp-4h]@0

  v20384E4 = v20011E0;
  v20384E5 = v20011E1;
  v0 = (_BYTE *)v20384E6;
  if ( !v20384E6 )
    v0 = StartSpriteAnim(v20011C0, 0);
  sub_809BF74(v0);
  if ( v20384E4 == 1 )
  {
    *(_BYTE *)(v20011C4 + 67) = 12;
  }
  else if ( v20384E4 > 1 )
  {
    if ( v20384E4 == 2 )
      sub_809A860(1);
  }
  else if ( !v20384E4 )
  {
    *(_BYTE *)(v20011C4 + 5) = *(_BYTE *)(v20011C4 + 5) & 0xF3 | 8;
    *(_BYTE *)(v20011C4 + 67) = 20;
    *(_BYTE *)(v20011C4 + 62) &= 0xFBu;
  }
  return v2;
}
