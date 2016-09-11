int __fastcall sub_806C658(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r8@1
  int v3; // r4@1
  int v4; // r5@1
  unsigned int v5; // r6@1
  signed int v6; // r1@6
  unsigned int v7; // r0@6
  int v8; // r4@6
  signed int v9; // r7@6
  char *v10; // r2@10
  int v11; // r3@10
  char *v12; // r1@12
  int v13; // r0@12
  char *v14; // r1@22
  char *v15; // r1@26
  char *v16; // r2@27
  signed int v17; // r0@27
  char *v18; // r4@32
  int v20; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int8)sub_806CA00(a1);
  v5 = *(_WORD *)&gSprites[68 * v4 + 46] & 0xFF;
  sub_806DA44(v2, v5, 0);
  if ( v5 > 5 )
  {
    if ( v5 == 6 )
      sub_806BB9C(1u);
    else
      sub_806BBEC(1u);
  }
  else
  {
    sub_806BF24(&gUnknown_083769A8[2 * v5], v5, 3, 0);
  }
  v6 = v3 << 24;
  v7 = ((v3 << 24) + 0x2000000) >> 24;
  v8 = 16 * v4;
  v9 = v6;
  if ( v7 <= 4 )
  {
    switch ( v7 )
    {
      case 2u:
        *(_WORD *)&gSprites[68 * v4 + 48] = 0;
        v8 = 16 * v4;
        break;
      case 1u:
        if ( !v5 )
        {
          v10 = gSprites;
          v11 = 16 * v4;
          *(_WORD *)&gSprites[68 * v4 + 46] = 7;
          goto _0806C78E;
        }
        if ( v5 != 6 )
          goto _0806C77C;
        v10 = gSprites;
        v11 = 16 * v4;
        v12 = &gSprites[68 * v4];
        LOWORD(v13) = (unsigned __int8)byte_3004350 - 1;
        goto _0806C78C;
      case 3u:
        if ( v5 == (unsigned __int8)byte_3004350 - 1 )
        {
          v10 = gSprites;
          v11 = 16 * v4;
          *(_WORD *)&gSprites[68 * v4 + 46] = 6;
        }
        else if ( v5 == 7 )
        {
          v10 = gSprites;
          v11 = 16 * v4;
          *(_WORD *)&gSprites[68 * v4 + 46] = 0;
        }
        else
        {
_0806C77C:
          v10 = gSprites;
          v11 = 16 * v4;
          v12 = &gSprites[68 * v4];
          v13 = (v9 >> 24) + *((_WORD *)v12 + 23);
_0806C78C:
          *((_WORD *)v12 + 23) = v13;
        }
_0806C78E:
        v8 = v11;
        *(_WORD *)&v10[4 * (v11 + v4) + 48] = 0;
        break;
      case 4u:
        v8 = 16 * v4;
        if ( (unsigned __int8)byte_3004350 > 1u && !v5 )
        {
          v14 = &gSprites[68 * v4];
          if ( !*((_WORD *)v14 + 24) )
            *((_WORD *)v14 + 24) = 1;
          *((_WORD *)v14 + 23) = *((_WORD *)v14 + 24);
        }
        break;
      case 0u:
        v8 = 16 * v4;
        if ( ((v5 - 1) & 0xFF) <= 4 )
        {
          v15 = &gSprites[68 * v4];
          *((_WORD *)v15 + 23) = 0;
          *((_WORD *)v15 + 24) = v5;
        }
        break;
      default:
        break;
    }
  }
  v16 = &gSprites[4 * (v8 + v4)];
  *((_WORD *)v16 + 16) = gUnknown_083768B8[4 * *((_WORD *)v16 + 23)];
  *((_WORD *)v16 + 17) = gUnknown_083768B8[4 * *((_WORD *)v16 + 23) + 1];
  v17 = *((_WORD *)v16 + 23);
  if ( v17 > 5 )
  {
    if ( v17 == 6 )
      sub_806BB9C(2u);
    else
      sub_806BBEC(2u);
  }
  else
  {
    sub_806BF24(&gUnknown_083769A8[2 * v17], *((_WORD *)v16 + 23), 3, 1u);
  }
  v201B261 = 2;
  v18 = &gSprites[4 * (v8 + v4)];
  sub_806DA44(v2, *((_WORD *)v18 + 23) & 0xFF, 1);
  if ( v5 != *((_WORD *)v18 + 23) )
    audio_play(5);
  return v20;
}
