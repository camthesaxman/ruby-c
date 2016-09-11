int __fastcall sub_80BEE84(unsigned __int16 a1)
{
  unsigned int v1; // r7@1
  unsigned int v2; // r5@1
  int v4; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  do
  {
    if ( *(_BYTE *)(4 * v2 + 0x20281F0) )
    {
      if ( *(_WORD *)(4 * v2 + 0x20281F2) >= v1 )
      {
        if ( !*(_BYTE *)(4 * v2 + 0x20281F1) && (unsigned __int8)FlagGet(0x804u) == 1 )
          *(_BYTE *)(4 * v2 + 0x20281F1) = 1;
        *(_WORD *)(4 * v2 + 0x20281F2) -= v1;
      }
      else
      {
        sub_80BEC10(v2);
      }
    }
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 0xF );
  sub_80BEC40();
  return v4;
}
