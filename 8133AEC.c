int __fastcall sub_8133AEC(char a1)
{
  int v1; // r1@1
  int v2; // r5@2
  unsigned int v3; // r4@3
  char *v4; // r1@4
  unsigned int v5; // r4@5
  unsigned int v6; // r4@8
  unsigned int v7; // r0@10
  unsigned int v8; // r4@13
  char *v9; // r0@14
  int v11; // [sp+1Ch] [bp-4h]@0

  v1 = *(_BYTE *)(dword_30007B0 + 27);
  if ( v1 == *(_BYTE *)(dword_30007B0 + 26) - 1 )
  {
    if ( a1 )
    {
      MenuZeroFillWindowRect(3u, 6u, 3u, 7u);
      MenuZeroFillWindowRect(3u, 0xBu, 3u, 0xCu);
      v8 = 0;
      do
      {
        v9 = &gSprites[68 * *(_BYTE *)(dword_30007B0 + v8 + 7) + 62];
        *v9 |= 4u;
        v8 = (v8 + 1) & 0xFFFF;
      }
      while ( v8 <= 0xF );
    }
    else
    {
      MenuZeroFillWindowRect(3u, 6u, 6u, 7u);
      MenuZeroFillWindowRect(3u, 0xBu, 6u, 0xCu);
    }
    MenuZeroFillWindowRect(0xBu, 9u, 0x1Cu, 0xCu);
  }
  else
  {
    v2 = *(_WORD *)(dword_30007B0 + 32 + 2 * v1);
    if ( a1 )
    {
      v3 = 0;
      do
      {
        v4 = &gSprites[68 * *(_BYTE *)(dword_30007B0 + v3 + 7) + 62];
        *v4 &= 0xFBu;
        v3 = (v3 + 1) & 0xFFFF;
      }
      while ( v3 <= 0xF );
      v5 = 0;
      do
      {
        sub_8133940(v2, (int)&gUnknown_08402E24 + 3 * (unsigned __int8)gUnknown_08402E3D[v5]);
        v5 = (v5 + 1) & 0xFFFF;
      }
      while ( v5 <= 2 );
      sub_8072AB0((int)*(&gUnknown_083CADD4 + gContestMoves[8 * v2]), 88, 72, -112, 0x20u, 1);
    }
    else
    {
      v6 = 0;
      do
      {
        sub_8133940(v2, (int)&gUnknown_08402E24 + 3 * (unsigned __int8)gUnknown_08402E39[v6]);
        v6 = (v6 + 1) & 0xFFFF;
      }
      while ( v6 <= 3 );
      v7 = (unsigned __int8)sub_8072A18((int)(&gMoveDescriptions)[4 * (v2 - 1)], 88, 72, -112, 1);
      if ( v7 <= 1 )
        MenuFillWindowRectWithBlankTile(0xBu, ((v7 << 25) + 150994944) >> 24, 0x1Cu, 0xCu);
    }
  }
  return v11;
}
