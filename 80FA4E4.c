int __fastcall sub_80FA4E4(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  unsigned int v4; // r8@1
  unsigned int i; // r4@1
  signed int v6; // r5@3
  int v7; // r3@3
  int v8; // r7@3
  unsigned int j; // r4@3
  unsigned int v10; // r6@4
  int v11; // r0@5
  int v12; // r1@6
  int v13; // r1@8
  signed int v14; // r5@11
  signed int v15; // r3@11
  unsigned int v16; // r4@11
  int v17; // r0@12
  int v18; // r1@12
  int v20; // [sp+0h] [bp-1Ch]@5
  int v21; // [sp+18h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int8)GetLinkPlayerCount();
  for ( i = 0; i < v4; i = (i + 1) & 0xFFFF )
    memcpy(40 * i + 33585152, (const char *)(v2 + i * v3), 40);
  v6 = 33585152;
  v7 = 33585408;
  v8 = 0;
  for ( j = 0; j < v4; j = (j + 1) & 0xFFFF )
  {
    v10 = 0;
    do
    {
      v20 = v7;
      v11 = (signed __int16)sub_80FA828(v6, v8);
      v7 = v20;
      if ( (signed __int16)v11 >= 0 )
      {
        if ( (unsigned int)*(_BYTE *)(8 * v11 + 0x2007900) << 25 < (unsigned int)*(_BYTE *)v6 << 25 )
        {
          v13 = *(_DWORD *)(v6 + 4);
          *(_DWORD *)(8 * v11 + 0x2007900) = *(_DWORD *)v6;
          *(_DWORD *)(8 * v11 + 0x2007904) = v13;
        }
      }
      else
      {
        v12 = *(_DWORD *)(v6 + 4);
        *(_DWORD *)v20 = *(_DWORD *)v6;
        *(_DWORD *)(v20 + 4) = v12;
        v7 = v20 + 8;
        v8 = (v8 + 1) & 0xFFFF;
      }
      v6 += 8;
      v10 = (v10 + 1) & 0xFFFF;
    }
    while ( v10 <= 4 );
  }
  sub_80FA46C(33585408, v8, 2u);
  v14 = 33585408;
  v15 = 33719560;
  v16 = 0;
  do
  {
    v17 = *(_DWORD *)v14;
    v18 = *(_DWORD *)(v14 + 4);
    v14 += 8;
    *(_DWORD *)v15 = v17;
    *(_DWORD *)(v15 + 4) = v18;
    v15 += 8;
    v16 = (v16 + 1) & 0xFFFF;
  }
  while ( v16 <= 4 );
  return v21;
}
