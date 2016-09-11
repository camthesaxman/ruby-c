int __fastcall sub_809AF18(unsigned __int8 a1, unsigned __int8 a2)
{
  signed int v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v2 = a1;
  sub_809AD3C(a1, a2);
  sub_809AD94();
  if ( !v20384E6 )
    StartSpriteAnim(v20011C0, 1);
  if ( v2 == 1 && v20384E4 != 1 )
  {
    v20011E2 = 1;
    *(_BYTE *)(v20011C4 + 62) |= 4u;
  }
  if ( v2 && v2 >= 0 && v2 <= 3 )
  {
    *(_BYTE *)(v20011C4 + 62) |= 4u;
    *(_BYTE *)(v20011C4 + 5) = *(_BYTE *)(v20011C4 + 5) & 0xF3 | 4;
  }
  return v4;
}
