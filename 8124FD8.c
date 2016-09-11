signed int __fastcall unref_sub_8124FD8(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r6@2
  int v6; // r1@6
  int v7; // r3@9

  v2 = a1;
  v3 = a2;
  while ( (unsigned int)*(_BYTE *)(v2 + 1) <= 0x1F )
  {
    v7 = *(_DWORD *)v3;
    if ( !*(_DWORD *)v3 )
      return 0;
    *(_DWORD *)(v2 + 136 + 12 * *(_BYTE *)(v2 + 1)) = v7;
    *(_BYTE *)(v2 + 12 * *(_BYTE *)(v2 + 1) + 142) = *(_BYTE *)(v3 + 6);
    *(_BYTE *)(v2 + 12 * *(_BYTE *)(v2 + 1) + 140) = *(_BYTE *)(v3 + 4);
    *(_BYTE *)(v2 + 12 * *(_BYTE *)(v2 + 1) + 141) = *(_BYTE *)(v3 + 5);
    v4 = *(_BYTE *)(v3 + 4) * *(_BYTE *)(v3 + 5);
    if ( *(_WORD *)(v2 + 2) + v4 > 1024 )
      return 2;
    if ( *(_WORD *)(v3 + 8) )
    {
      v6 = *(_DWORD *)(v2 + 4);
      sub_800D238();
    }
    else
    {
      v40000D4 = v7;
      v40000D8 = *(_DWORD *)(v2 + 4) + (*(_WORD *)(v2 + 2) << 6);
      v40000DC = 16 * v4 | 0x80000000;
    }
    *(_WORD *)(v2 + 12 * *(_BYTE *)(v2 + 1) + 144) = *(_WORD *)(v2 + 2);
    *(_WORD *)(v2 + 2) += v4;
    ++*(_BYTE *)(v2 + 1);
    v3 += 12;
  }
  return 1;
}
