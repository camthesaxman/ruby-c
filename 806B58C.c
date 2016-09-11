signed int __fastcall sub_806B58C(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r5@1
  _BYTE *v3; // r0@2
  char v4; // r0@4
  char *v5; // r4@7
  int v6; // r0@10
  signed int v7; // r1@10
  int v8; // r0@14
  int v9; // r1@14
  signed int v10; // r2@16
  int v11; // r2@22
  int v12; // r2@33
  int v13; // r2@44
  int v14; // r0@47
  int v15; // r1@47
  int v16; // r2@54

  v1 = a1 << 24;
  v2 = v1 >> 24;
  if ( (unsigned __int8)battle_type_is_double(v1) )
  {
    if ( (unsigned __int8)sub_806B528() == 1 )
      v4 = 2;
    else
      v4 = 1;
    v202E8FA = v4;
    v3 = (_BYTE *)33745146;
  }
  else
  {
    v3 = (_BYTE *)33745146;
    v202E8FA = 0;
  }
  v5 = (char *)&gUnknown_083769A8 + 12 * *v3;
  if ( v2 > 8 )
    return 0;
  switch ( v2 )
  {
    case 0u:
      memset(gBG2TilemapBuffer, 0, 2048);
      return 0;
    case 1u:
      sub_806B9A4((unsigned __int8)*v5, (unsigned __int8)v5[1], 3);
      v6 = (int)v5;
      v7 = 0;
      goto _0806B8A8;
    case 2u:
      if ( !(battle_type_is_double(&gUnknown_083769A8) << 24) )
      {
        if ( (unsigned __int8)byte_3004350 > 1u )
        {
          sub_806BA94((unsigned __int8)v5[2], (unsigned __int8)v5[3], 0, 3);
          v6 = (int)(v5 + 2);
          v7 = 1;
          goto _0806B8A8;
        }
        v8 = (unsigned __int8)v5[2];
        v9 = (unsigned __int8)v5[3];
        goto _0806B8BC;
      }
      if ( (unsigned __int8)sub_806B528() == 1 )
      {
        sub_806B9A4((unsigned __int8)v5[2], (unsigned __int8)v5[3], 4);
        v6 = (int)(v5 + 2);
        v7 = 1;
        v10 = 4;
        goto _0806B8AA;
      }
      sub_806B9A4((unsigned __int8)v5[2], (unsigned __int8)v5[3], 3);
      v6 = (int)(v5 + 2);
      v7 = 1;
      goto _0806B8A8;
    case 3u:
      if ( battle_type_is_double(&gUnknown_083769A8) << 24 )
      {
        if ( (unsigned __int8)sub_806B528() == 1 )
        {
          if ( GetMonData((int)&unk_3004428, 11, v11) )
          {
            sub_806BA94((unsigned __int8)v5[4], (unsigned __int8)v5[5], 0, 3);
            v6 = (int)(v5 + 4);
            v7 = 2;
            goto _0806B8A8;
          }
          v8 = (unsigned __int8)v5[4];
          v9 = (unsigned __int8)v5[5];
        }
        else
        {
          if ( (unsigned __int8)byte_3004350 > 2u )
          {
            sub_806BA94((unsigned __int8)v5[4], (unsigned __int8)v5[5], 0, 3);
            v6 = (int)(v5 + 4);
            v7 = 2;
            goto _0806B8A8;
          }
          v8 = (unsigned __int8)v5[4];
          v9 = (unsigned __int8)v5[5];
        }
      }
      else
      {
        if ( (unsigned __int8)byte_3004350 > 2u )
        {
          sub_806BA94((unsigned __int8)v5[4], (unsigned __int8)v5[5], 0, 3);
          v6 = (int)(v5 + 4);
          v7 = 2;
          goto _0806B8A8;
        }
        v8 = (unsigned __int8)v5[4];
        v9 = (unsigned __int8)v5[5];
      }
      goto _0806B8BC;
    case 4u:
      if ( battle_type_is_double(&gUnknown_083769A8) << 24 )
      {
        if ( (unsigned __int8)sub_806B528() == 1 )
        {
          if ( GetMonData((int)&unk_300448C, 11, v12) )
          {
            sub_806BA94((unsigned __int8)v5[6], (unsigned __int8)v5[7], 0, 3);
            v6 = (int)(v5 + 6);
            v7 = 3;
            goto _0806B8A8;
          }
          v8 = (unsigned __int8)v5[6];
          v9 = (unsigned __int8)v5[7];
        }
        else
        {
          if ( (unsigned __int8)byte_3004350 > 3u )
          {
            sub_806BA94((unsigned __int8)v5[6], (unsigned __int8)v5[7], 0, 3);
            v6 = (int)(v5 + 6);
            v7 = 3;
            goto _0806B8A8;
          }
          v8 = (unsigned __int8)v5[6];
          v9 = (unsigned __int8)v5[7];
        }
      }
      else
      {
        if ( (unsigned __int8)byte_3004350 > 3u )
        {
          sub_806BA94((unsigned __int8)v5[6], (unsigned __int8)v5[7], 0, 3);
          v6 = (int)(v5 + 6);
          v7 = 3;
          goto _0806B8A8;
        }
        v8 = (unsigned __int8)v5[6];
        v9 = (unsigned __int8)v5[7];
      }
      goto _0806B8BC;
    case 5u:
      if ( !(battle_type_is_double(&gUnknown_083769A8) << 24) )
      {
        if ( (unsigned __int8)byte_3004350 > 4u )
        {
          sub_806BA94((unsigned __int8)v5[8], (unsigned __int8)v5[9], 0, 3);
          v6 = (int)(v5 + 8);
          v7 = 4;
          goto _0806B8A8;
        }
        v8 = (unsigned __int8)v5[8];
        v9 = (unsigned __int8)v5[9];
        goto _0806B8BC;
      }
      if ( (unsigned __int8)sub_806B528() == 1 )
      {
        if ( GetMonData((int)&unk_30044F0, 11, v13) )
        {
          sub_806BA94((unsigned __int8)v5[8], (unsigned __int8)v5[9], 0, 4);
          v6 = (int)(v5 + 8);
          v7 = 4;
          v10 = 4;
          goto _0806B8AA;
        }
        v14 = (unsigned __int8)v5[8];
        v15 = (unsigned __int8)v5[9];
        goto _0806B884;
      }
      if ( (unsigned __int8)byte_3004350 > 4u )
      {
        sub_806BA94((unsigned __int8)v5[8], (unsigned __int8)v5[9], 0, 3);
        v6 = (int)(v5 + 8);
        v7 = 4;
        goto _0806B8A8;
      }
      v8 = (unsigned __int8)v5[8];
      v9 = (unsigned __int8)v5[9];
      goto _0806B8BC;
    case 6u:
      if ( battle_type_is_double(&gUnknown_083769A8) << 24 )
      {
        if ( (unsigned __int8)sub_806B528() == 1 )
        {
          if ( !GetMonData((int)&unk_3004554, 11, v16) )
          {
            v14 = (unsigned __int8)v5[10];
            v15 = (unsigned __int8)v5[11];
_0806B884:
            sub_806BA94(v14, v15, 1, 4);
            return 0;
          }
          sub_806BA94((unsigned __int8)v5[10], (unsigned __int8)v5[11], 0, 4);
          v6 = (int)(v5 + 10);
          v7 = 5;
          v10 = 4;
_0806B8AA:
          sub_806BF24(v6, v7, v10, 0);
          return 0;
        }
        if ( (unsigned __int8)byte_3004350 <= 5u )
          goto _0806B8B8;
_0806B896:
        sub_806BA94((unsigned __int8)v5[10], (unsigned __int8)v5[11], 0, 3);
        v6 = (int)(v5 + 10);
        v7 = 5;
_0806B8A8:
        v10 = 3;
        goto _0806B8AA;
      }
      if ( (unsigned __int8)byte_3004350 > 5u )
        goto _0806B896;
_0806B8B8:
      v8 = (unsigned __int8)v5[10];
      v9 = (unsigned __int8)v5[11];
_0806B8BC:
      sub_806BA94(v8, v9, 1, 3);
      return 0;
    case 7u:
      if ( v201B258 == 4 )
        sub_806BB9C(1);
      sub_806BBEC(1);
      return 0;
    case 8u:
      v201B261 = 2;
      return 1;
    default:
      return 0;
  }
}
