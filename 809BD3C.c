signed int __fastcall party_compaction(int a1, int a2, int a3)
{
  signed int v3; // r7@1
  unsigned int v4; // r6@1
  unsigned int v5; // r5@1
  signed int i; // r7@9

  v3 = 0xFFFF;
  v4 = 0;
  v5 = 0;
  do
  {
    if ( GetMonData((int)&dword_3004360[25 * v4], 11, a3) << 16 )
    {
      if ( v4 != v5 )
        memcpy(&dword_3004360[25 * v5], &dword_3004360[25 * v4], 100);
      v5 = (v5 + 1) & 0xFFFF;
    }
    else if ( (signed __int16)v3 == -1 )
    {
      v3 = v4;
    }
    v4 = (v4 + 1) & 0xFFFF;
  }
  while ( v4 <= 5 );
  for ( i = v3 << 16; v5 <= 5; v5 = (v5 + 1) & 0xFFFF )
    ZeroMonData((int)&dword_3004360[25 * v5]);
  return i >> 16;
}
