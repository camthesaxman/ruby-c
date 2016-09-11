int __fastcall sub_8095904(_BYTE *a1, int a2, unsigned __int8 a3, unsigned __int16 a4, unsigned __int8 a5, int a6)
{
  int v6; // r7@1
  int v7; // r4@1
  unsigned int v8; // r8@1
  unsigned int i; // r5@2
  char *v10; // r4@3
  int v11; // r9@5
  int v12; // r1@5
  int v13; // r5@6
  char *v14; // r4@7
  unsigned int v15; // r6@7
  int v16; // r3@8
  unsigned __int8 v17; // r2@8
  int v18; // r0@12
  _BYTE *v20; // [sp+0h] [bp-3Ch]@1
  int v21; // [sp+4h] [bp-38h]@1
  unsigned __int16 v22; // [sp+18h] [bp-24h]@6
  int v23; // [sp+38h] [bp-4h]@0

  v20 = a1;
  v6 = a2;
  v7 = a3;
  v21 = a4;
  v8 = StringLength(a1) & 0xFFFF;
  if ( v7 )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      v13 = 0;
      v22 = v12 + 1;
      if ( v8 > 0 )
      {
        do
        {
          v14 = (char *)&gFont3LatinGlyphs + 512 * v12 + 64 * (unsigned __int8)(v20[v13] & 0xF0) + 32 * (v20[v13] & 0xF);
          v15 = 0;
          LOWORD(v13) = v13 + 1;
          do
          {
            LOBYTE(v16) = *v14 & 0xF0;
            v17 = *v14 & 0xF;
            if ( !(_BYTE)v16 )
              v16 = 16 * a5 & 0xFF;
            if ( !(*v14 & 0xF) )
              v17 = a5;
            v18 = v11;
            v11 = (v11 + 1) & 0xFFFF;
            *(_BYTE *)(a6 + v18) = v16 | v17;
            ++v14;
            v15 = (v15 + 1) & 0xFFFF;
          }
          while ( v15 <= 0x1F );
          v13 = (unsigned __int16)v13;
        }
        while ( (unsigned __int16)v13 < v8 );
      }
      CpuSet(a6, v6, 16 * v8 & 0x7FFF);
      v6 += v21;
      v11 = 0;
      v12 = v22;
    }
    while ( v22 <= 1u );
  }
  else
  {
    for ( i = 0; i < v8; i = (i + 1) & 0xFFFF )
    {
      v10 = (char *)&gFont3LatinGlyphs + 64 * (unsigned __int8)(v20[i] & 0xF0) + 32 * (v20[i] & 0xF);
      CpuSet(v10, v6, 16);
      CpuSet(v10 + 512, v6 + v21, 16);
      v6 += 32;
    }
  }
  return v23;
}
