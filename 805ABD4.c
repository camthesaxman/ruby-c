unsigned int __fastcall GetFieldObjectIdByXY(__int16 a1, int a2)
{
  unsigned int v2; // r3@1
  int *v3; // r2@2

  v2 = 0;
  a2 = (signed __int16)a2;
  do
  {
    v3 = &dword_30048A0[9 * v2];
    if ( *(_BYTE *)v3 << 31 && *((_WORD *)v3 + 8) == a1 && *((_WORD *)v3 + 9) == a2 )
      break;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 0xF );
  return v2;
}
