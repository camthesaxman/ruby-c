int __fastcall sub_8105784(int a1)
{
  int v1; // r4@1
  int v2; // r0@2
  signed int v3; // r0@3
  unsigned __int8 v4; // r1@3
  int v6; // [sp+0h] [bp-Ch]@1
  int v7; // [sp+8h] [bp-4h]@4

  v1 = a1;
  memcpy(&v6, (const char *)&gUnknown_083ECC58, 2);
  if ( *(_WORD *)(v1 + 46) )
  {
    v2 = *(_WORD *)(v1 + 58) - 1;
    *(_WORD *)(v1 + 58) = v2;
    if ( v2 << 16 <= 0 )
    {
      v3 = IndexOfSpritePaletteTag(7u);
      v4 = *((_BYTE *)&v6 + *(_WORD *)(v1 + 56));
      sub_8085C7C((((v3 << 20) & 0xFFFFFFFu) + 16973824) >> 16, v4, *((_BYTE *)&v6 + *(_WORD *)(v1 + 56)), v4);
      *(_WORD *)(v1 + 56) = (*(_WORD *)(v1 + 56) + 1) & 1;
      *(_WORD *)(v1 + 58) = *(_WORD *)(v1 + 60);
    }
  }
  return v7;
}
