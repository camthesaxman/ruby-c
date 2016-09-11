int __fastcall sub_800FE40(unsigned __int8 a1)
{
  signed int v1; // r0@2
  int v2; // r7@10
  signed int v3; // r8@10
  char v4; // r9@10
  int v5; // r4@11
  int v6; // r5@11
  int v7; // r6@11
  int v8; // r0@11
  int v9; // r7@26
  signed int v10; // r8@26
  char v11; // r9@26
  int v12; // r4@27
  int v13; // r5@27
  int v14; // r6@27
  int v15; // r0@27
  int v17; // [sp+0h] [bp-30h]@1
  char *v18; // [sp+4h] [bp-2Ch]@1
  char *v19; // [sp+8h] [bp-28h]@1
  int v20; // [sp+2Ch] [bp-4h]@0

  v17 = a1;
  v18 = 0;
  v19 = 0;
  if ( !(v20239F8 & 0x40) )
    goto _0800FEB4;
  v1 = *((_WORD *)&gLinkPlayers + 14 * v20160CB + 12);
  if ( v1 == 1 )
  {
_0800FEA0:
    v18 = (char *)&unk_30045C0;
    v19 = (char *)&unk_3004360;
    goto _0800FEBC;
  }
  if ( v1 <= 1 )
  {
    if ( *((_WORD *)&gLinkPlayers + 14 * v20160CB + 12) )
      goto _0800FEBC;
    goto _0800FEB4;
  }
  if ( v1 == 2 )
  {
_0800FEB4:
    v18 = (char *)&unk_3004360;
    v19 = (char *)&unk_30045C0;
    goto _0800FEBC;
  }
  if ( v1 == 3 )
    goto _0800FEA0;
_0800FEBC:
  v2 = 0;
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = (int)&v18[100 * v3];
    v6 = (unsigned __int16)GetMonData(&v18[100 * v3], 65);
    v7 = (unsigned __int16)GetMonData(v5, 57);
    v8 = GetMonData(v5, 55);
    if ( v6 )
    {
      if ( v6 != 412 && v7 && !v8 )
        v2 |= 1 << v4;
      if ( v6 )
      {
        if ( v7 && (v6 == 412 || v8) )
          v2 |= 2 << v4;
        if ( v6 && v6 != 412 && !v7 )
          v2 |= 3 << v4;
      }
    }
    v4 += 2;
    ++v3;
  }
  while ( v3 <= 5 );
  HIWORD(dword_3004B20[10 * v17 + 3]) = v2;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  do
  {
    v12 = (int)&v19[100 * v10];
    v13 = (unsigned __int16)GetMonData(&v19[100 * v10], 65);
    v14 = (unsigned __int16)GetMonData(v12, 57);
    v15 = GetMonData(v12, 55);
    if ( v13 )
    {
      if ( v13 != 412 && v14 && !v15 )
        v9 |= 1 << v11;
      if ( v13 )
      {
        if ( v14 && (v13 == 412 || v15) )
          v9 |= 2 << v11;
        if ( v13 && v13 != 412 && !v14 )
          v9 |= 3 << v11;
      }
    }
    v11 += 2;
    ++v10;
  }
  while ( v10 <= 5 );
  LOWORD(dword_3004B20[10 * v17 + 4]) = v9;
  return v20;
}
