int __fastcall sub_806C310(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  int v3; // r4@1
  __int16 v4; // r3@1
  unsigned int v5; // r2@1
  unsigned int v6; // r5@1
  unsigned int v7; // r0@1
  char *v8; // r2@5
  int v9; // r3@5
  char *v10; // r1@11
  __int16 v11; // r0@11
  char *v12; // r1@17
  int v13; // r2@17
  char *v14; // r1@25
  signed __int16 v15; // r0@25
  int v17; // [sp+8h] [bp-4h]@0

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
        return v17;
      case 3u:
        if ( a2 == 7 )
        {
          v8 = gSprites;
          v9 = 16 * v3;
          *(_WORD *)&gSprites[68 * v3 + 46] = 0;
          goto _0806C3D8;
        }
        if ( a2 == (unsigned __int8)byte_3004350 - 1 )
          goto _0806C390;
        goto _0806C3C4;
      case 1u:
        if ( a2 )
        {
          if ( a2 == 7 )
          {
            v8 = gSprites;
            v9 = 16 * v3;
            v10 = &gSprites[68 * v3];
            v11 = (unsigned __int8)byte_3004350 - 1;
          }
          else
          {
_0806C3C4:
            v8 = gSprites;
            v9 = 16 * v3;
            v10 = &gSprites[68 * v3];
            v11 = (char)v6 + *((_WORD *)v10 + 23);
          }
          *((_WORD *)v10 + 23) = v11;
        }
        else
        {
_0806C390:
          v8 = gSprites;
          v9 = 16 * v3;
          *(_WORD *)&gSprites[68 * v3 + 46] = 7;
        }
_0806C3D8:
        *(_WORD *)&v8[4 * (v9 + v3) + 48] = 0;
        return v17;
      case 4u:
        if ( !a2 )
        {
          if ( (unsigned __int8)byte_3004350 <= 2u )
            return v17;
          v12 = &gSprites[68 * v3];
          v13 = *((_WORD *)v12 + 24);
          if ( ((v13 - 2) & 0xFFFFu) > 1 )
          {
            *((_WORD *)v12 + 23) = 2;
            return v17;
          }
          goto _0806C43A;
        }
        if ( a2 == 1 && (unsigned __int8)byte_3004350 > 4u )
        {
          v12 = &gSprites[68 * v3];
          v13 = *((_WORD *)v12 + 24);
          if ( ((v13 - 4) & 0xFFFFu) <= 1 )
          {
_0806C43A:
            *((_WORD *)v12 + 23) = v13;
            return v17;
          }
          *((_WORD *)v12 + 23) = 4;
        }
        break;
      case 0u:
        if ( ((a2 - 2) & 0xFFu) > 1 )
        {
          if ( ((a2 - 4) & 0xFFu) > 1 )
            return v17;
          v14 = &gSprites[68 * v3];
          v15 = 1;
        }
        else
        {
          v14 = &gSprites[68 * v3];
          v15 = 0;
        }
        *((_WORD *)v14 + 23) = v15;
        *((_WORD *)v14 + 24) = v4;
        return v17;
      default:
        return v17;
    }
  }
  return v17;
}
