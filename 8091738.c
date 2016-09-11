int __fastcall sub_8091738(unsigned __int16 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r12@1
  int v6; // r7@1
  int v7; // r1@1
  int v8; // r8@1
  int v9; // r5@1
  signed int v10; // r3@2
  unsigned int v11; // r6@2
  unsigned __int16 v12; // r4@2
  int v13; // r2@3
  int v15; // [sp+0h] [bp-98h]@5
  int v16; // [sp+94h] [bp-4h]@7

  v3 = a2;
  v4 = a3;
  v5 = *(int *)((char *)&gMonFootprintTable + (4 * NationalPokedexNumToSpecies(a1) & 0x3FFFF));
  v6 = 0;
  v7 = 0;
  v8 = v3 << 14;
  v9 = 32 * v4;
  do
  {
    v10 = *(_BYTE *)(v5 + v7);
    v11 = 0;
    v12 = v7 + 1;
    do
    {
      v13 = (v10 >> 2 * v11) & 1;
      if ( (2 << 2 * v11) & v10 )
        LOBYTE(v13) = v13 | 0x10;
      *((_BYTE *)&v15 + v6) = v13;
      v6 = (v6 + 1) & 0xFFFF;
      v11 = (v11 + 1) & 0xFFFF;
    }
    while ( v11 <= 3 );
    v7 = (unsigned __int16)(v7 + 1);
  }
  while ( v12 <= 0x1Fu );
  CpuSet(&v15, v9 + 100663296 + v8, 64);
  return v16;
}
