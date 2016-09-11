signed int __fastcall sub_8055B9C(__int16 a1, __int16 a2)
{
  unsigned int v2; // r2@1
  int v3; // r3@1
  int *v4; // r1@5

  v2 = 0;
  v3 = a2;
  do
  {
    if ( *(_BYTE *)(4 * v2 + 0x2029818) && (!*(_BYTE *)(4 * v2 + 0x202981B) || *(_BYTE *)(4 * v2 + 0x202981B) == 2) )
    {
      v4 = &dword_30048A0[9 * *(_BYTE *)(4 * v2 + 0x202981A)];
      if ( *((_WORD *)v4 + 8) == a1 && *((_WORD *)v4 + 9) == v3 )
        return v2;
    }
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 3 );
  return 4;
}
