unsigned int __fastcall sub_80724F4(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, int a4, unsigned __int8 a5)
{
  int v5; // r8@1
  unsigned int v6; // r6@1
  unsigned int v7; // r4@1
  unsigned int v8; // r1@1
  unsigned int v9; // r7@3
  unsigned int v10; // r4@3
  unsigned int i; // r4@7
  unsigned int j; // r4@9
  int v13; // r2@11
  unsigned __int8 v15; // [sp+0h] [bp-2Ch]@1
  unsigned __int8 v16; // [sp+4h] [bp-28h]@1

  v5 = a4;
  v15 = a1;
  v16 = a2;
  v6 = a3;
  v7 = 0;
  v8 = (unsigned int)byte_30006B8;
  do
  {
    byte_30006B8[v7] = 0;
    v7 = (v7 + 1) & 0xFF;
  }
  while ( v7 <= 6 );
  v9 = 0;
  v10 = 0;
  if ( a3 > 0u )
  {
    do
    {
      v8 = (unsigned __int8)sub_8072CA4(*(_DWORD *)(8 * v10 + v5), v8) + 7;
      if ( v8 >> 3 > v9 )
        v9 = v8 >> 3;
      v10 = (v10 + 1) & 0xFF;
    }
    while ( v10 < v6 );
  }
  for ( i = 1; i <= a5; i = (i + 1) & 0xFF )
    byte_30006B8[i] = v9;
  for ( j = 1; j <= a5; j = (j + 1) & 0xFF )
    byte_30006B8[j] += 1 + byte_30006B8[j - 1];
  v13 = (unsigned __int8)--byte_30006B8[a5] + 1;
  MenuDrawTextWindow(v15, v16);
  return v9;
}
