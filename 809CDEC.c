int __fastcall sub_809CDEC(unsigned __int8 a1)
{
  int v1; // r3@1
  int v2; // r1@2
  _BYTE *v3; // r0@2
  unsigned int v4; // r1@2
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( v20011B8 <= 6u )
  {
    v2 = 8 * v20011B8 + 33558912;
    v3 = *(&gUnknown_083BBCA0 + a1);
    *(_DWORD *)v2 = v3;
    *(_DWORD *)(v2 + 4) = v1;
    v4 = ((unsigned int)(unsigned __int8)sub_8072CA4(v3) + 7) >> 3;
    if ( v4 > v20011B9 )
      v20011B9 = v4;
    ++v20011B8;
  }
  return v6;
}
