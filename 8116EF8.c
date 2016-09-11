int __fastcall sub_8116EF8(unsigned __int8 a1)
{
  unsigned int v1; // r6@1
  int i; // r4@6
  int v3; // r10@11
  unsigned int v4; // r7@13
  signed int v5; // r0@13
  signed int v6; // r4@16
  char *v7; // r3@20
  _BYTE *v8; // r0@20
  int v9; // r1@26
  unsigned int v10; // r0@27
  unsigned int v11; // r4@28
  unsigned int v12; // r2@29
  int v13; // r5@29
  unsigned int v14; // r0@30
  signed int v16; // [sp+0h] [bp-40h]@11
  signed int v17; // [sp+4h] [bp-3Ch]@11
  signed int v18; // [sp+8h] [bp-38h]@11
  signed int v19; // [sp+Ch] [bp-34h]@11
  signed int v20; // [sp+10h] [bp-30h]@11
  signed int v21; // [sp+14h] [bp-2Ch]@11
  int v22; // [sp+18h] [bp-28h]@1
  unsigned int v23; // [sp+1Ch] [bp-24h]@26
  int v24; // [sp+3Ch] [bp-4h]@37

  v1 = a1;
  v22 = 0;
  if ( a1 == 10 )
    goto _08116F1E;
  if ( (signed int)a1 > 10 )
  {
    if ( a1 != 15 )
      goto _08116F7C;
_08116F1E:
    for ( i = (a1 + 1) & 0xFF; i < a1 + 5; i = (i + 1) & 0xFF )
    {
      if ( !(*((_DWORD *)&unk_83F8C08 + 5 * i) & v2019008) )
        v22 |= *((_WORD *)&gUnknown_083F8C00 + 10 * i + 8);
    }
    sub_8124CE8(33657016, v22 & 0xDFFF);
    return v24;
  }
  if ( a1 == 5 )
    goto _08116F1E;
_08116F7C:
  v16 = 16864255;
  v17 = 1325342213;
  v18 = 17203195;
  v19 = 1325342213;
  v20 = 17530751;
  v21 = 1325342213;
  v3 = 1;
  if ( ((a1 - 1) & 0xFFu) <= 3 )
    v3 = 3;
  v4 = (((a1 / 5u << 16) & 0xFFFFFF) - 0x10000) >> 16;
  v5 = a1 % 5u & 0xFF;
  if ( v5 == 2 )
  {
    v7 = gSprites;
    v8 = (_BYTE *)33656900;
    goto _08117028;
  }
  if ( v5 > 2 )
  {
    if ( v5 == 3 )
    {
      v7 = gSprites;
      v8 = (_BYTE *)33656901;
    }
    else
    {
      if ( v5 != 4 )
      {
        v6 = 33656832;
        goto _0811703A;
      }
      v7 = gSprites;
      v8 = (_BYTE *)33656902;
    }
_08117028:
    v4 = 16 * ((unsigned int)(unsigned __int8)v7[68 * *v8 + 5] >> 4);
    v6 = 33656832;
    goto _0811703A;
  }
  if ( v5 == 1 )
  {
    v7 = gSprites;
    v8 = (_BYTE *)33656899;
    goto _08117028;
  }
  v6 = 33656832;
_0811703A:
  if ( v3 != 1 )
  {
    v11 = 0;
    v23 = 4 * v1;
    do
    {
      v12 = (v1 + 5 * v11 + 5) & 0xFF;
      v13 = 20 * v12;
      if ( !(v2019008 & *((_DWORD *)&unk_83F8C08 + 5 * v12)) )
      {
        v14 = v12 / 5 & 0xFF;
        *((_WORD *)&v16 + 4 * (v14 - 1) + 1) += v4;
        sub_812492C(33657016, (v11 + 13) & 0xFF, &v16 + 2 * v14 - 2);
        if ( v3 == 3 )
          v22 = *(_WORD *)((char *)&gUnknown_083F8C00 + v13 + 16);
        v3 = (v3 - 1) & 0xFF;
      }
      v11 = (v11 + 1) & 0xFF;
    }
    while ( v11 <= 2 );
    if ( v3 != 2 )
      v22 = 0;
    goto _08117122;
  }
  v9 = *(_DWORD *)(v6 + 8) & *((_DWORD *)&unk_83F8C08 + 5 * v1);
  v23 = 4 * v1;
  if ( !v9 )
  {
    v10 = v1 / 5 & 0xFF;
    *((_WORD *)&v16 + 4 * (v10 - 1) + 1) += v4;
    sub_812492C(v6 + 184, 13, &v16 + 2 * v10 - 2);
_08117122:
    v22 |= *((_WORD *)&gUnknown_083F8C00 + 2 * (v23 + v1) + 8);
    sub_8124CE8(33657016, v22);
  }
  return v24;
}
