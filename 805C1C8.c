signed int __fastcall GetFieldObjectIdByXYZ(unsigned __int16 a1, unsigned __int16 a2, unsigned __int8 a3)
{
  int v3; // r7@1
  int v4; // r6@1
  int v5; // r5@1
  unsigned int v6; // r4@1
  int *v7; // r1@2

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  do
  {
    v7 = &dword_30048A0[9 * v6];
    if ( *(_BYTE *)v7 << 31
      && *((_WORD *)v7 + 8) == v3
      && *((_WORD *)v7 + 9) == v4
      && FieldObjectDoesZCoordMatch(&dword_30048A0[9 * v6], v5) << 24 )
    {
      return v6;
    }
    v6 = (v6 + 1) & 0xFF;
  }
  while ( v6 <= 0xF );
  return 16;
}
