signed int __fastcall GetFieldObjectIdByLocalId(unsigned __int8 a1)
{
  unsigned int v1; // r2@1
  int *v2; // r1@2

  v1 = 0;
  do
  {
    v2 = &dword_30048A0[9 * v1];
    if ( *(_BYTE *)v2 << 31 && *((_BYTE *)v2 + 8) == a1 )
      return v1;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 0xF );
  return 16;
}
