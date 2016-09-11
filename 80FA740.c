int __fastcall sub_80FA740(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int16)Random() % 0x62u & 0xFFFF;
  if ( v2 > 0x32 )
  {
    v2 = (unsigned __int16)Random() % 0x62u & 0xFFFF;
    if ( v2 > 0x50 )
      v2 = (unsigned __int16)Random() % 0x62u & 0xFFFF;
  }
  *(_WORD *)v1 = *(_WORD *)v1 & 0xC07F | ((((_WORD)v2 + 30) & 0x7F) << 7);
  *(_BYTE *)v1 = *(_BYTE *)v1 & 0x80 | ((unsigned __int16)Random() % (signed int)(v2 + 1) + 30) & 0x7F;
  *(_WORD *)(v1 + 2) = Random();
  return v4;
}
