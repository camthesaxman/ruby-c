signed int __fastcall GetAvailableFieldObjectSlot(__int16 a1, unsigned __int8 a2, unsigned __int8 a3, _BYTE *a4)
{
  int v4; // r5@1
  int v5; // r4@1
  unsigned int v6; // r2@1
  int *v7; // r1@2
  int *v9; // r3@10

  v4 = a2;
  v5 = a3;
  v6 = 0;
  if ( LOBYTE(dword_30048A0[0]) << 31 )
  {
    while ( 1 )
    {
      v7 = &dword_30048A0[9 * v6];
      if ( *((_BYTE *)v7 + 8) == a1 && *((_BYTE *)v7 + 9) == v4 && *((_BYTE *)v7 + 10) == v5 )
        break;
      v6 = (v6 + 1) & 0xFF;
      if ( v6 > 0xF )
        break;
      if ( !(LOBYTE(dword_30048A0[9 * v6]) << 31) )
        goto _0805AEA4;
    }
  }
  else
  {
_0805AEA4:
    if ( v6 <= 0xF )
    {
      *a4 = v6;
      while ( 1 )
      {
        v9 = &dword_30048A0[9 * v6];
        if ( *(_BYTE *)v9 << 31 )
        {
          if ( *((_BYTE *)v9 + 8) == a1 && *((_BYTE *)v9 + 9) == v4 && *((_BYTE *)v9 + 10) == v5 )
            break;
        }
        v6 = (v6 + 1) & 0xFF;
        if ( v6 > 0xF )
          return 0;
      }
    }
  }
  return 1;
}
