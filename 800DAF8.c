int __fastcall sub_800DAF8(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  int v3; // r7@1
  signed int v4; // r3@1
  unsigned int v5; // r4@1
  int *v6; // r1@2
  __int16 v7; // r0@10
  __int16 v8; // r1@11
  signed int v9; // r3@25
  int *v10; // r2@25
  int v11; // r4@29
  signed int v12; // r3@31
  int *v13; // r2@31
  int v15; // [sp+0h] [bp-20h]@25
  int v16; // [sp+1Ch] [bp-4h]@34

  v3 = a3;
  v4 = a2;
  v5 = 0;
  if ( v20239F8 & 0x40 )
  {
    v6 = &dword_3004B20[10 * a1];
    if ( *((_WORD *)v6 + 9) )
    {
      if ( v4 != 1 )
      {
        if ( v4 <= 1 )
        {
          if ( v4 )
            goto _0800DB84;
          v7 = *((_WORD *)v6 + 7);
_0800DB70:
          v5 = v7 & 0x3F;
          goto _0800DB84;
        }
        if ( v4 != 2 )
        {
          if ( v4 != 3 )
            goto _0800DB84;
_0800DB6E:
          v7 = *((_WORD *)v6 + 8);
          goto _0800DB70;
        }
        v8 = *((_WORD *)v6 + 7);
_0800DB7C:
        v5 = (v8 & 0xFC0u) >> 6;
        goto _0800DB84;
      }
      goto _0800DB7A;
    }
    if ( v4 == 1 )
      goto _0800DB6E;
    if ( v4 > 1 )
    {
      if ( v4 == 2 )
      {
        v8 = *((_WORD *)v6 + 7);
        goto _0800DB7C;
      }
      if ( v4 == 3 )
      {
_0800DB7A:
        v8 = *((_WORD *)v6 + 8);
        goto _0800DB7C;
      }
    }
    else if ( !v4 )
    {
      v7 = *((_WORD *)v6 + 7);
      goto _0800DB70;
    }
_0800DB84:
    v9 = 0;
    v10 = &v15;
    do
    {
      *(_WORD *)v10 = ((signed int)((3 << 2 * v9) & v5) >> 2 * v9) + 24577;
      v10 = (int *)((char *)v10 + 2);
      ++v9;
    }
    while ( v9 <= 2 );
    CpuSet(&v15, v3, 3);
    return v16;
  }
  if ( a2 == v20160CB )
    v11 = HIWORD(dword_3004B20[10 * a1 + 3]);
  else
    v11 = LOWORD(dword_3004B20[10 * a1 + 4]);
  v12 = 0;
  v13 = &v15;
  do
  {
    *(_WORD *)v13 = (((3 << 2 * v12) & v11) >> 2 * v12) + 24577;
    v13 = (int *)((char *)v13 + 2);
    ++v12;
  }
  while ( v12 <= 5 );
  CpuSet(&v15, v3, 6);
  return v16;
}
