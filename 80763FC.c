int __fastcall sub_80763FC(unsigned __int16 a1, int a2, __int16 a3, int a4)
{
  unsigned int v4; // r9@1
  int v5; // r6@3
  int v6; // r0@3
  unsigned int v7; // r3@4
  unsigned __int8 v8; // r5@4
  int v10; // [sp+18h] [bp-4h]@0

  v4 = 64;
  if ( !(a4 << 24) )
    v4 = 32;
  v5 = (a1 << 12) & 0xFFFF;
  v6 = 0;
  if ( v4 > 0 )
  {
    do
    {
      v7 = 0;
      v8 = v6 + 1;
      do
      {
        *(_WORD *)(2 * (32 * v6 + v7) + a2) = (*(_WORD *)(2 * (32 * v6 + v7) + a2) & 0xFFF | v5) + a3;
        v7 = (v7 + 1) & 0xFF;
      }
      while ( v7 <= 0x1F );
      v6 = (unsigned __int8)(v6 + 1);
    }
    while ( v8 < v4 );
  }
  return v10;
}
