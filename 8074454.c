int __fastcall UnfadePlttBuffer(unsigned int a1)
{
  unsigned int v1; // r1@1
  int v2; // r3@1
  unsigned int v3; // r4@2
  unsigned int v4; // r2@3
  int v6; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( a1 )
  {
    do
    {
      v3 = v1 >> 1;
      if ( v1 & 1 )
      {
        v4 = 0;
        do
        {
          *(_WORD *)(2 * (v2 + v4) + 0x202EEC8) = *(_WORD *)(2 * (v2 + v4) + 0x202EAC8);
          v4 = (v4 + 1) & 0xFF;
        }
        while ( v4 <= 0xF );
      }
      v1 >>= 1;
      v2 = (unsigned __int16)(v2 + 16);
    }
    while ( v3 );
  }
  return v6;
}
