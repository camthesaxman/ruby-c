signed int __fastcall GetFieldObjectIdByLocalIdAndMapInternal(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  int v3; // r4@1
  unsigned int v4; // r1@1
  int *v5; // r3@2

  v3 = a2;
  a3 = (unsigned __int8)a3;
  v4 = 0;
  do
  {
    v5 = &dword_30048A0[9 * v4];
    if ( *(_BYTE *)v5 << 31 && *((_BYTE *)v5 + 8) == a1 && *((_BYTE *)v5 + 9) == v3 && *((_BYTE *)v5 + 10) == a3 )
      return v4;
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 0xF );
  return 16;
}
