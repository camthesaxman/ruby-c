int __fastcall sub_80BD514(int a1, int a2, int a3, int a4)
{
  int v4; // r9@1
  int v5; // r7@1
  int v6; // r8@1
  int v7; // r6@1
  unsigned int v8; // r5@1
  int v9; // r4@2
  char v10; // r1@3
  unsigned int v11; // r5@9
  int v12; // r4@10
  unsigned int v13; // r5@14
  int v14; // r4@15
  int v15; // r1@15
  int v17; // [sp+18h] [bp-4h]@0

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = 1;
  do
  {
    v9 = 160 * v8 + v4;
    if ( *(_BYTE *)v9 )
    {
      v10 = *(_BYTE *)(v9 + 1);
      if ( (v10 & 0xC0) == 64 )
        *(_BYTE *)(v9 + 1) = v10 & 0xF0 | 1;
      if ( !(sub_80BD494(160 * v8 + v4, v5, v8) << 24) && !(sub_80BD494(160 * v8 + v4, v6, v8) << 24) )
        sub_80BD494(160 * v8 + v4, v7, v8);
    }
    v8 = (v8 + 1) & 0xFF;
  }
  while ( v8 <= 0x13 );
  v11 = 0;
  do
  {
    v12 = 160 * v11 + v5;
    if ( *(_BYTE *)v12 )
    {
      *(_BYTE *)(v12 + 1) &= 0xDFu;
      if ( !(sub_80BD494(160 * v11 + v5, v6, v11) << 24) )
        sub_80BD494(160 * v11 + v5, v7, v11);
    }
    v11 = (v11 + 1) & 0xFF;
  }
  while ( v11 <= 0x13 );
  v13 = 0;
  do
  {
    v14 = 160 * v13;
    v15 = 160 * v13 + v6;
    if ( *(_BYTE *)v15 )
    {
      *(_BYTE *)(v15 + 1) &= 0xDFu;
      sub_80BD494(160 * v13 + v6, v7, v13);
    }
    if ( *(_BYTE *)(v14 + v7) )
      *(_BYTE *)(v14 + v7 + 1) &= 0xDFu;
    v13 = (v13 + 1) & 0xFF;
  }
  while ( v13 <= 0x13 );
  return v17;
}
