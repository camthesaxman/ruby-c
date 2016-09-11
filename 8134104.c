int __fastcall sub_8134104(int a1)
{
  int v1; // r6@1
  int v2; // r1@1
  int v3; // r7@2
  unsigned int v4; // r8@2
  unsigned int v5; // r3@3
  int v6; // r2@3
  unsigned __int8 v7; // r12@3
  _DWORD *v8; // r5@4
  int v9; // r1@4
  char v10; // r4@4
  unsigned int v11; // r2@4
  char *v12; // r0@5
  unsigned int v13; // r1@5
  char v14; // r1@7
  unsigned int v16; // [sp+0h] [bp-24h]@2
  int v17; // [sp+20h] [bp-4h]@0

  v1 = 0;
  v2 = 8 * a1 & 0x7FF;
  if ( (unsigned int)gUnknown_08402E40[v2 + 4] > 0 )
  {
    v3 = 8 * a1 & 0x7FF;
    v4 = gUnknown_08402E40[v2 + 4];
    v16 = gUnknown_08402E40[v2 + 4];
    do
    {
      v5 = (v1 + 1) & 0xFF;
      v6 = v3;
      v7 = v1 + 1;
      if ( v5 < v4 )
      {
        do
        {
          v8 = &gUnknown_08402E40[v6];
          v9 = *(_DWORD *)&gUnknown_08402E40[v6];
          v10 = *(_BYTE *)(v9 + v5);
          v11 = *(_BYTE *)(v9 + v5);
          if ( *(_BYTE *)(v9 + v5) )
          {
            v12 = (char *)(v9 + v1);
            v13 = *(_BYTE *)(v9 + v1);
            if ( !v13 || v13 > v11 )
            {
              v14 = *v12;
              *v12 = v10;
              *(_BYTE *)(*v8 + v5) = v14;
            }
          }
          v5 = (v5 + 1) & 0xFF;
          v6 = v3;
        }
        while ( v5 < gUnknown_08402E40[v3 + 4] );
      }
      v1 = (unsigned __int8)(v1 + 1);
    }
    while ( v7 < v16 );
  }
  return v17;
}
