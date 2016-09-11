int __fastcall unref_sub_814A7AC(unsigned __int8 a1, unsigned __int16 a2, unsigned __int8 a3)
{
  int v3; // r4@1
  unsigned __int8 v4; // r7@1
  int v5; // r3@1
  char v6; // r2@1
  unsigned int v7; // r1@1

  v3 = a2;
  v4 = a3;
  LOBYTE(v5) = 0;
  v6 = 15;
  v7 = 0;
  do
  {
    if ( *(_WORD *)(2 * v7 + 0x202EAC8) == v3 )
    {
      v5 = (v7 >> 4) & 0xFF;
      v6 = v7 & 0xF;
    }
    v7 = (v7 + 1) & 0xFFFF;
  }
  while ( v7 <= 0xFF );
  return (unsigned __int8)sub_814A758(a1, v5, v6, v4);
}
