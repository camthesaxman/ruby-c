int sub_804B24C()
{
  _WORD *v0; // r1@2
  __int16 v1; // r0@2
  int v2; // r3@4
  int v4; // [sp+8h] [bp-4h]@0

  if ( *(_BYTE *)(dword_3004828 + 178) == *(_BYTE *)(dword_3004828 + 179) )
  {
    v0 = (_WORD *)(dword_3004828 + 180);
    v1 = *(_WORD *)(dword_3004828 + 180) + 1;
  }
  else
  {
    v0 = (_WORD *)(dword_3004828 + 180);
    v1 = 0;
  }
  *v0 = v1;
  v2 = dword_3004828;
  if ( (unsigned int)*(_WORD *)(dword_3004828 + 180) > 0xB4 )
  {
    *(_WORD *)(dword_3004828 + 180) = 0;
    *(_BYTE *)(v2 + 179) = 0;
    *(_BYTE *)(dword_3004828 + 178) = 0;
  }
  *(_BYTE *)(dword_3004828 + 179) = *(_BYTE *)(dword_3004828 + 178);
  return v4;
}
