int sub_8100B6C()
{
  unsigned int i; // r7@1
  int v1; // r1@2
  int v2; // r6@2
  unsigned int v3; // r0@2
  unsigned int v4; // r9@2
  int v5; // r10@2
  int v6; // r5@2
  unsigned int v7; // r6@6
  int v8; // r2@6
  int v9; // r0@6
  unsigned int v10; // r4@7
  unsigned __int8 v12; // [sp+0h] [bp-2Ch]@2
  int v13; // [sp+28h] [bp-4h]@0

  for ( i = 0; i < v2039234; i = v12 )
  {
    v1 = *(_BYTE *)(8 * i + 0x20391B4);
    v2 = *(_BYTE *)(v201F000 + v1);
    v3 = *(_BYTE *)(v201F004 + v1);
    v4 = v3 >> 4;
    v5 = v3 & 0xF;
    v6 = 8 * i;
    v12 = i + 1;
    if ( *((_BYTE *)&gDecorations + 32 * v2 + 17) != 4 )
    {
      if ( v2 == 41 && MapGridGetMetatileIdAt(v4 + 7, (v3 & 0xF) + 7) == 652 )
        ++*(_BYTE *)(8 * i + 0x20391B6);
      v7 = 0;
      v8 = 8 * i;
      v9 = v6 + 33788340;
      v12 = i + 1;
      while ( v7 < *(_BYTE *)(v9 + 2) )
      {
        v10 = 0;
        if ( (unsigned int)*(_BYTE *)(v8 + 33788341) > 0 )
        {
          do
          {
            MapGridSetMetatileEntryAt(
              v10 + 7 + v4,
              v5 - (v7 - 7),
              *(_WORD *)(2 * (v4 + v10 + (v5 - v7) * *v202E828) + *(_DWORD *)(v202E828 + 12)) | 0x3000);
            v10 = (v10 + 1) & 0xFF;
          }
          while ( v10 < *(_BYTE *)(8 * i + 0x20391B5) );
        }
        v7 = (unsigned __int8)(v7 + 1);
        v8 = 8 * i;
        v9 = v6 + 33788340;
      }
      sub_8100A60(*(_BYTE *)(8 * i + 0x20391B4));
    }
  }
  return v13;
}
