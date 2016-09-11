int __fastcall sub_80B9C6C(int a1, int a2, unsigned __int8 a3, int a4)
{
  unsigned int v4; // r8@1
  unsigned int v5; // r3@1
  unsigned int v6; // r3@3
  int v7; // r6@5
  unsigned int v8; // r0@5
  unsigned int v9; // r7@6
  int v10; // r7@11
  int v11; // r3@11
  int v12; // r6@13
  int v13; // r1@13
  int v14; // r2@17
  int v15; // r5@23
  int v16; // r4@23
  int v17; // r1@23
  unsigned int v18; // r0@30
  unsigned int v19; // r3@31
  int v20; // r6@31
  char *v21; // r1@31
  unsigned int v22; // r1@33
  int v23; // r5@41
  int v24; // r6@42
  int v26; // [sp+4h] [bp-74h]@2
  char v27[20]; // [sp+8h] [bp-70h]@2
  char v28[20]; // [sp+Ch] [bp-6Ch]@1
  char v29[8]; // [sp+1Ch] [bp-5Ch]@2
  char v30[8]; // [sp+1Dh] [bp-5Bh]@2
  char v31; // [sp+24h] [bp-54h]@12
  _BYTE v32[3]; // [sp+25h] [bp-53h]@18
  int v33; // [sp+2Ch] [bp-4Ch]@1
  int v34; // [sp+30h] [bp-48h]@1
  int v35; // [sp+34h] [bp-44h]@1
  int v36; // [sp+38h] [bp-40h]@1
  int v37; // [sp+3Ch] [bp-3Ch]@3
  int v38; // [sp+40h] [bp-38h]@1
  char *v39; // [sp+44h] [bp-34h]@12
  int v40; // [sp+48h] [bp-30h]@3
  char *v41; // [sp+4Ch] [bp-2Ch]@1
  unsigned int v42; // [sp+50h] [bp-28h]@3
  int v43; // [sp+54h] [bp-24h]@23
  int v44; // [sp+74h] [bp-4h]@42

  v33 = a1;
  v34 = a2;
  v36 = a4;
  v35 = a3;
  v38 = (unsigned __int16)Random();
  SeedRng(LOWORD(dword_3002974[0]));
  v4 = (unsigned __int8)GetLinkPlayerCount();
  v5 = 0;
  v41 = v28;
  do
  {
    *((_BYTE *)&v26 + v5);
    *((_BYTE *)&v26 + v5) = -1;
    v27[v5] = 0;
    v29[2 * v5] = 0;
    v30[2 * v5] = 0;
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 3 );
  v37 = 0;
  v6 = 0;
  v42 = v4 << 16;
  v40 = v34 * v35;
  if ( (unsigned __int16)v4 > 0u )
  {
    v4 = (unsigned __int16)v4;
    do
    {
      v7 = v33 + v34 * v6;
      v8 = *(_DWORD *)(v7 + 112);
      if ( v8 )
      {
        v9 = 0;
        if ( v8 > 0 )
        {
          do
          {
            if ( !*(_WORD *)(v7 + 116 + 2 * v9) )
              *(&v29[2 * v6] + v9) = 1;
            v9 = (v9 + 1) & 0xFFFF;
          }
          while ( v9 < *(_DWORD *)(v7 + 112) );
        }
      }
      v6 = (v6 + 1) & 0xFFFF;
    }
    while ( v6 < v4 );
  }
  v10 = 0;
  v11 = 0;
  if ( v42 )
  {
    v39 = &v31;
    do
    {
      v12 = v33 + v34 * v11;
      v13 = 2 * v11;
      if ( v29[2 * v11] == 1 || v30[v13] == 1 )
        v37 = (v37 + 1) & 0xFF;
      if ( (v29[v13] != 1 || (LOBYTE(v14) = v30[v13]) != 0) && (v29[v13] || (v14 = (unsigned __int8)v30[v13], v14 != 1)) )
      {
        if ( v29[v13] != 1 || v30[v13] != 1 )
          goto _080B9E32;
        v15 = 2 * v10;
        v39[2 * v10] = v11;
        v43 = v11;
        v16 = (unsigned __int8)sub_80B9BBC(v12);
        v17 = (unsigned __int8)sub_80B9BBC(v12 + 56);
        v11 = v43;
        if ( v16 )
        {
          if ( !v17 )
          {
            v32[v15] = 0;
            goto _080B9E2C;
          }
_080B9E0E:
          Random();
          v32[v15] = 0;
          v11 = v43;
          goto _080B9E2C;
        }
        if ( !v17 )
          goto _080B9E0E;
        v32[v15] = 1;
      }
      else
      {
        v39[2 * v10] = v11;
        v32[2 * v10] = v14;
      }
_080B9E2C:
      v10 = (v10 + 1) & 0xFFFF;
_080B9E32:
      v18 = (v11 + 1) << 16;
      v11 = (v11 + 1) & 0xFFFF;
    }
    while ( v18 < v42 );
  }
  v19 = 0;
  v20 = v33 + 120 * v40;
  v21 = v41;
  do
  {
    *(_DWORD *)&v21[4 * v19] = v20;
    v19 = (v19 + 1) & 0xFFFF;
  }
  while ( v19 <= 3 );
  v22 = (unsigned __int8)sub_80B9C4C(v36) % 3u & 0xFF;
  if ( v37 == 3 )
  {
    sub_80B9BC4(v33, v34, (int)&v31, gUnknown_083D02B4[2 * v22], gUnknown_083D02B4[2 * v22 + 1]);
  }
  else if ( v37 > 3 )
  {
    if ( v37 == 4 )
    {
      v23 = 4 * v22;
      sub_80B9BC4(v33, v34, (int)&v31, gUnknown_083D02BA[4 * v22], gUnknown_083D02BA[4 * v22 + 1]);
      sub_80B9BC4(v33, v34, (int)&v31, gUnknown_083D02BA[v23 + 2], gUnknown_083D02BA[v23 + 3]);
    }
  }
  else if ( v37 == 2 )
  {
    sub_80B9BC4(v33, v34, (int)&v31, 0, 1u);
  }
  v24 = v33 + v40;
  memcpy(33720176, v33 + v40, 56);
  memcpy(33720232, v24 + 56, 56);
  SeedRng(v38);
  return v44;
}
