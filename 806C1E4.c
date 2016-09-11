int __fastcall sub_806C1E4(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  int v3; // r4@1
  __int16 v4; // r3@1
  unsigned int v5; // r2@1
  unsigned int v6; // r5@1
  unsigned int v7; // r0@1
  char *v8; // r2@6
  int v9; // r3@6
  char *v10; // r1@6
  __int16 v11; // r0@6
  char *v12; // r1@16
  char *v13; // r1@20
  int v15; // [sp+8h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3 << 24;
  v6 = v5 >> 24;
  v7 = (signed int)(v5 + 0x2000000) >> 24;
  if ( v7 <= 4 )
  {
    switch ( v7 )
    {
      case 2u:
        *(_WORD *)&gSprites[68 * v3 + 48] = 0;
        break;
      case 1u:
        if ( !a2 )
          goto _0806C266;
        if ( a2 != 7 )
          goto _0806C298;
        v8 = gSprites;
        v9 = 16 * v3;
        v10 = &gSprites[68 * v3];
        v11 = (unsigned __int8)byte_3004350 - 1;
        goto _0806C2AA;
      case 3u:
        if ( a2 == (unsigned __int8)byte_3004350 - 1 )
        {
_0806C266:
          v8 = gSprites;
          v9 = 16 * v3;
          *(_WORD *)&gSprites[68 * v3 + 46] = 7;
        }
        else if ( a2 == 7 )
        {
          v8 = gSprites;
          v9 = 16 * v3;
          *(_WORD *)&gSprites[68 * v3 + 46] = 0;
        }
        else
        {
_0806C298:
          v8 = gSprites;
          v9 = 16 * v3;
          v10 = &gSprites[68 * v3];
          v11 = (char)v6 + *((_WORD *)v10 + 23);
_0806C2AA:
          *((_WORD *)v10 + 23) = v11;
        }
        *(_WORD *)&v8[4 * (v9 + v3) + 48] = 0;
        break;
      case 4u:
        if ( (unsigned __int8)byte_3004350 > 1u && !a2 )
        {
          v12 = &gSprites[68 * v3];
          if ( !*((_WORD *)v12 + 24) )
            *((_WORD *)v12 + 24) = 1;
          *((_WORD *)v12 + 23) = *((_WORD *)v12 + 24);
        }
        break;
      case 0u:
        if ( ((a2 - 1) & 0xFFu) <= 4 )
        {
          v13 = &gSprites[68 * v3];
          *((_WORD *)v13 + 23) = 0;
          *((_WORD *)v13 + 24) = v4;
        }
        break;
      default:
        return v15;
    }
  }
  return v15;
}
