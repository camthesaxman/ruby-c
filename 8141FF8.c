int __fastcall sub_8141FF8(unsigned __int8 a1)
{
  int v1; // r8@1
  int v2; // r2@1
  unsigned int v3; // r7@1
  int v4; // r2@2
  int v5; // r5@3
  int v6; // r2@3
  int v7; // r2@3
  unsigned int v8; // r2@3
  int v9; // r5@3
  int v10; // r1@8
  int *v11; // r2@8
  unsigned int v12; // r7@8
  int *v13; // r1@10
  int (*v14)(); // r0@11
  int v16; // [sp+0h] [bp-2Ch]@3
  int v17; // [sp+28h] [bp-4h]@13

  v1 = a1;
  v2 = a1;
  LOWORD(dword_3004B20[10 * a1 + 3]) = 0;
  v3 = 0;
  do
  {
    if ( GetMonData((int)&dword_3004360[25 * v3], 11, v2) )
    {
      v5 = 20 * v3 + 33669120;
      *(_WORD *)(20 * v3 + 0x201C008) = *(_WORD *)(20 * v3 + 0x201C008) & 0xFE00 | GetMonData(
                                                                                     (int)&dword_3004360[25 * v3],
                                                                                     65,
                                                                                     v4) & 0x1FF;
      *(_DWORD *)v5 = GetMonData((int)&dword_3004360[25 * v3], 1, -512);
      *(_DWORD *)(20 * v3 + 0x201C004) = GetMonData((int)&dword_3004360[25 * v3], 0, v6);
      *(_BYTE *)(v5 + 9) = *(_BYTE *)(v5 + 9) & 1 | 2 * GetMonData((int)&dword_3004360[25 * v3], 56, v7);
      GetMonData((int)&dword_3004360[25 * v3], 2, (int)&v16);
      v8 = 0;
      v9 = 4 * v1;
      do
      {
        *(_BYTE *)(v8 + 20 * v3 + 33669130) = *((_BYTE *)&v16 + v8);
        v8 = (v8 + 1) & 0xFFFF;
      }
      while ( v8 <= 9 );
      v2 = v1;
      ++LOWORD(dword_3004B20[10 * v1 + 3]);
    }
    else
    {
      v2 = 20 * v3 + 33669120;
      *(_WORD *)(v2 + 8) &= 0xFE00u;
      *(_DWORD *)v2 = 0;
      *(_DWORD *)(20 * v3 + 0x201C004) = 0;
      *(_BYTE *)(v2 + 9) = *(_BYTE *)(20 * v3 + 0x201C009) & 1;
      *(_BYTE *)(v2 + 10) = -1;
      v9 = 4 * v1;
    }
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 <= 5 );
  v203931C = 0;
  v10 = 2 * (v9 + v1);
  v11 = &dword_3004B20[v10];
  *((_WORD *)v11 + 5) = 0;
  *((_WORD *)v11 + 8) = 255;
  v12 = 0;
  do
  {
    *(_WORD *)(&byte_3004B28[2 * (v12 + 5)] + v10 * 4) = 255;
    v12 = (v12 + 1) & 0xFFFF;
  }
  while ( v12 <= 5 );
  v13 = &dword_3004B20[2 * (v9 + v1)];
  if ( *((_WORD *)v13 + 4) )
    v14 = sub_81422E8;
  else
    v14 = sub_814217C;
  *v13 = (int)v14;
  return v17;
}
