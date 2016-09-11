int __fastcall sub_803FE70(int a1, unsigned __int16 a2)
{
  int v2; // r8@1
  int v3; // r5@1
  int v4; // r4@1
  unsigned int v5; // r7@1
  signed int v6; // r6@1
  signed int v7; // r6@3
  int v8; // r0@4
  signed int v9; // r2@4
  unsigned int v10; // r0@8
  int v11; // r0@9
  unsigned int v12; // r0@11
  int v13; // r0@17
  int v14; // r0@19
  char *v15; // r2@26
  int v16; // r3@26
  int v18; // [sp+0h] [bp-20h]@2
  int v19; // [sp+1Ch] [bp-4h]@30

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    *((_BYTE *)&v18 + v6) = GetMonData(v2, v6 + 26, 0);
    v5 = (v5 + *((_BYTE *)&v18 + v6++)) & 0xFFFF;
  }
  while ( v6 <= 5 );
  v7 = 0;
  do
  {
    if ( v5 > 0x1FD )
      break;
    v8 = sub_8040178(v2, 0);
    v9 = 1;
    if ( v8 << 24 )
      v9 = 2;
    if ( (unsigned int)v7 <= 5 )
    {
      switch ( v7 )
      {
        case 0:
          v10 = *((_BYTE *)&gBaseStats + 28 * v3 + 10) << 30;
          goto _0803FF56;
        case 1:
          v11 = *((_BYTE *)&gBaseStats + 28 * v3 + 10);
          goto _0803FF54;
        case 2:
          v10 = *((_BYTE *)&gBaseStats + 28 * v3 + 10) << 26;
          goto _0803FF56;
        case 3:
          v12 = (unsigned int)*((_BYTE *)&gBaseStats + 28 * v3 + 10) >> 6;
          goto _0803FF58;
        case 4:
          v10 = *((_BYTE *)&gBaseStats + 28 * v3 + 11) << 30;
          goto _0803FF56;
        case 5:
          v11 = *((_BYTE *)&gBaseStats + 28 * v3 + 11);
_0803FF54:
          v10 = v11 << 28;
_0803FF56:
          v12 = v10 >> 30;
_0803FF58:
          v4 = v12 * v9;
          break;
        default:
          break;
      }
    }
    v13 = (unsigned __int16)GetMonData(v2, 12, 0);
    if ( v13 == 175 )
    {
      if ( byte_3001BAD & 2 )
        v14 = v2024DF7;
      else
        v14 = v2028DBC;
    }
    else
    {
      v14 = (unsigned __int8)itemid_get_x12(v13);
    }
    if ( v14 == 24 )
      v4 = 2 * v4 & 0xFFFF;
    if ( (signed int)(v5 + (signed __int16)v4) > 510 )
      v4 = ((signed __int16)v4 + 510 - (v5 + v4)) & 0xFFFF;
    v15 = (char *)&v18 + v7;
    v16 = *((_BYTE *)&v18 + v7);
    if ( v16 + (signed __int16)v4 > 255 )
      v4 = ((signed __int16)v4 + 255 - (v16 + v4)) & 0xFFFF;
    *v15 = v16 + v4;
    v5 = (v5 + v4) & 0xFFFF;
    SetMonData(v2, v7++ + 26, (int)v15);
  }
  while ( v7 <= 5 );
  return v19;
}
