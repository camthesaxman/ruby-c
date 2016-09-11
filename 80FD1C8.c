int __fastcall sub_80FD1C8(unsigned __int16 a1)
{
  int v1; // r10@1
  int v2; // r4@1
  int v3; // r9@1
  unsigned int v4; // r8@1
  int v5; // r2@3
  char *v6; // r1@3
  char v7; // r0@3
  char *v8; // r2@5
  unsigned int i; // r8@9
  char *v10; // r6@10
  _WORD *v11; // r2@10
  int v12; // r1@10
  unsigned int v13; // r7@11
  unsigned int v14; // r5@11
  unsigned int v15; // r4@11
  int v16; // r0@14
  unsigned int v17; // r0@16
  signed int v18; // r0@16
  int v19; // r0@22
  int v20; // r0@25
  int v21; // r0@28
  char v23; // [sp+0h] [bp-40h]@1
  char v24; // [sp+1h] [bp-3Fh]@1
  unsigned __int16 v25; // [sp+2h] [bp-3Eh]@1
  _WORD *v26; // [sp+18h] [bp-28h]@16
  int v27; // [sp+1Ch] [bp-24h]@16
  int v28; // [sp+3Ch] [bp-4h]@37

  v1 = a1;
  v23 = gUnknown_083E7A50[3 * a1];
  v24 = gUnknown_083E7A50[3 * a1 + 1];
  v2 = gUnknown_083E7A50[3 * a1 + 2];
  v25 = ((unsigned int)(v2 << 24) >> 27) & 7;
  v3 = ((unsigned int)(v2 << 24) >> 25) & 3;
  v4 = 1;
  if ( (((unsigned int)(v2 << 24) >> 27) & 7) > 1 )
  {
    while ( 1 )
    {
      if ( v2 & 1 )
      {
        v5 = 4 * v4;
        v6 = &v23 + 4 * v4;
        *v6 = v23 + 1;
        v7 = v24 - 1;
      }
      else
      {
        v5 = 4 * v4;
        v6 = &v23 + 4 * v4;
        *(&v23 + 4 * v4) = v23 - v4;
        v7 = v24 + v4;
      }
      v6[1] = v7;
      v8 = &v23 + v5;
      if ( (unsigned __int8)*v8 > 0x3Fu || (unsigned __int8)v8[1] > 0x3Fu )
        break;
      *((_WORD *)v8 + 1) = v25 - v4;
      v4 = (v4 + 1) & 0xFF;
      if ( v4 >= v25 )
        goto _080FD27A;
    }
    v25 = v4 - 1;
  }
_080FD27A:
  for ( i = 0; i < v25; i = (i + 1) & 0xFF )
  {
    v10 = &v23 + 4 * i;
    v11 = (_WORD *)(dword_3005DEC + ((unsigned __int8)v10[1] << 7) + 2 * (unsigned __int8)*v10);
    v12 = *v11;
    if ( !(v12 & 0x8000) )
    {
      v13 = v12 & 0x1F;
      v14 = ((unsigned int)(v12 << 16) >> 21) & 0x1F;
      v15 = ((unsigned int)(v12 << 16) >> 26) & 0x1F;
      if ( v3 >= 0 )
      {
        if ( v3 <= 1 )
        {
          v17 = gUnknown_083E7A50[3 * v1 + 2];
          v26 = (_WORD *)(dword_3005DEC
                        + ((unsigned __int8)*(&v23 + 4 * i + 1) << 7)
                        + 2 * (unsigned __int8)*(&v23 + 4 * i));
          v27 = 31;
          v18 = ((v17 >> 3) & 7) % 3 & 0xFF;
          v11 = v26;
          if ( v18 == 1 )
          {
            v20 = *((_WORD *)v10 + 1);
            if ( v14 < v20 )
              LOWORD(v14) = 0;
            else
              v14 = (v14 - v20) & 0xFFFF;
          }
          else if ( v18 > 1 )
          {
            if ( v18 == 2 )
            {
              v21 = *((_WORD *)v10 + 1);
              if ( v15 < v21 )
                LOWORD(v15) = 0;
              else
                v15 = (v15 - v21) & 0xFFFF;
            }
          }
          else if ( !v18 )
          {
            v19 = *((_WORD *)v10 + 1);
            if ( v13 < v19 )
              LOWORD(v13) = 0;
            else
              v13 = (v13 - v19) & 0xFFFF;
          }
        }
        else if ( v3 <= 3 )
        {
          v16 = *((_WORD *)v10 + 1);
          v13 = (v13 + v16) & 0xFFFF;
          v14 = (v14 + v16) & 0xFFFF;
          v15 = (v15 + v16) & 0xFFFF;
          if ( v13 > 0x1F )
            LOWORD(v13) = 31;
          if ( v14 > 0x1F )
            LOWORD(v14) = 31;
          if ( v15 > 0x1F )
            LOWORD(v15) = 31;
        }
      }
      *v11 = v13 | ((_WORD)v15 << 10) | 32 * v14;
    }
  }
  return v28;
}
