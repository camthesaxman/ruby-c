int sub_80527BC()
{
  unsigned int v0; // r1@2
  unsigned int v1; // r4@4
  unsigned int v2; // r4@7
  _DWORD *v3; // r3@7
  unsigned int v4; // r0@8
  int v5; // r2@10
  char v7; // [sp+0h] [bp-74h]@12
  char v8; // [sp+48h] [bp-2Ch]@12
  _DWORD *v9; // [sp+54h] [bp-20h]@8
  int v10; // [sp+70h] [bp-4h]@14

  if ( v20297DC == 1 )
  {
    v0 = 0;
    do
    {
      word_3004840[v0] = 0;
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 <= 9 );
    word_3004830 = Random();
    v20297E0 = 0;
    v20297DC = 2;
    v1 = 0;
    do
    {
      *(_BYTE *)(v1 + 0x2000000) = 0;
      v1 = (v1 + 1) & 0xFFFF;
    }
    while ( v1 <= 0xC7 );
    v20297E8 = 0;
  }
  v2 = 0;
  v3 = (_DWORD *)33724388;
  do
  {
    v9 = v3;
    v4 = Random();
    v3 = v9;
    if ( ((v4 << 16 >> 31) & 1) == v20297E8 )
    {
      ++v20297E0;
    }
    else
    {
      v5 = *v9;
      *(_WORD *)(2 * *v9 + 0x2000000) = v20297E0;
      *v3 = v5 + 1;
      v20297E0 = 0;
      v20297E8 ^= 1u;
    }
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 0x63 );
  v7 = -1;
  ConvertIntToHexStringN(&v8, (unsigned __int16)word_3004830, 2, 8u);
  StringAppend(&v7, &v8);
  StringAppend(&v7, &gUnknown_082165F8);
  ConvertIntToHexStringN(&v8, v20297E0, 2, 8u);
  StringAppend(&v7, &v8);
  StringAppend(&v7, &gUnknown_08216600);
  if ( v20297DC == 3 )
  {
    ConvertIntToHexStringN(&v8, v20297E4, 2, 0x10u);
    StringAppend(&v7, &v8);
    v20297DC = 0;
  }
  MenuPrint(&v7, 2, 15);
  return v10;
}
