int __fastcall sub_809D1C4(int a1)
{
  int v1; // r6@1
  unsigned __int16 v2; // r0@1
  int v3; // r2@2
  unsigned int v4; // r3@2
  int v5; // r12@2
  unsigned __int16 v6; // r9@2
  unsigned int v7; // r0@3
  __int16 v9; // [sp+0h] [bp-24h]@3
  int v10; // [sp+20h] [bp-4h]@7

  v1 = a1;
  v2 = 0;
  if ( (unsigned int)*(_WORD *)(v1 + 10) > 0 )
  {
    do
    {
      v3 = *(_DWORD *)(v1 + 4);
      v4 = *(_WORD *)(v1 + 8);
      v5 = *(_DWORD *)(v1 + 4);
      v6 = v2 + 1;
      if ( v4 > 0x1000 )
      {
        do
        {
          v9 = 0;
          v40000D4 = &v9;
          v40000D8 = v3;
          v40000DC = -2130704384;
          v3 += 4096;
          v4 -= 4096;
        }
        while ( v4 > 0x1000 );
        v9 = 0;
        v40000D4 = &v9;
        v40000D8 = v3;
        v7 = (v4 >> 1) | 0x81000000;
      }
      else
      {
        v9 = 0;
        v40000D4 = &v9;
        v40000D8 = v5;
        v7 = (v4 >> 1) | 0x81000000;
      }
      v40000DC = v7;
      *(_DWORD *)(v1 + 4) = v5 + 64;
      v2 = v6;
    }
    while ( v6 < (unsigned int)*(_WORD *)(v1 + 10) );
  }
  return v10;
}
