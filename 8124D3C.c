int __fastcall sub_8124D3C(int a1, unsigned __int16 a2)
{
  int v2; // r6@1
  signed int v3; // r7@1
  unsigned int v4; // r5@1
  signed int v5; // r3@1
  int v6; // r4@3
  int v7; // r0@10
  signed int v9; // [sp+0h] [bp-18h]@5
  int v10; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = 1;
  do
  {
    if ( ((signed int)*(_WORD *)(v2 + 2) >> v4) & v5 )
    {
      v6 = v2 + 12 * v4;
      if ( (unsigned int)*(_BYTE *)(v6 + 4) >> 7 )
      {
        if ( (v3 >> v4) & v5 )
        {
          v9 = v5;
          memcpy(
            2 * *(_WORD *)(v6 + 10) + 33746632,
            (const char *)(2 * *(_WORD *)(v6 + 10) + 33745608),
            2 * *(_BYTE *)(v6 + 12));
          *(_BYTE *)(v6 + 4) &= 0x80u;
          *(_BYTE *)(v6 + 6) = 0;
          *(_BYTE *)(v6 + 5) = 0;
          v5 = v9;
          if ( *(_BYTE *)(v6 + 15) & 0x80 )
            *(_BYTE *)(v6 + 7) = -1;
          else
            *(_BYTE *)(v6 + 7) = v9;
        }
      }
    }
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 0xF );
  if ( v3 == 0xFFFF )
  {
    LOWORD(v7) = 0;
    *(_BYTE *)v2 = 0;
  }
  else
  {
    v7 = *(_WORD *)(v2 + 2) & ~v3;
  }
  *(_WORD *)(v2 + 2) = v7;
  return v10;
}
