int __fastcall sub_806C490(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r2@1
  char *v6; // r1@5
  int v7; // r6@5
  char *v8; // r4@18
  int v9; // r1@18
  int v10; // r2@19
  int v11; // r2@26
  char *v12; // r1@31
  signed __int16 v13; // r0@31
  int v15; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = (a3 << 24) + 0x2000000;
  if ( (unsigned int)(v5 >> 24) > 4 )
    return v15;
  switch ( v5 >> 24 )
  {
    case 2:
      *(_WORD *)&gSprites[68 * a1 + 48] = 0;
      return v15;
    case 3:
      if ( a2 == 7 )
      {
        *(_WORD *)&gSprites[68 * a1 + 46] = 0;
        v6 = gSprites;
        v7 = 16 * a1;
        goto _0806C566;
      }
      v7 = 16 * a1;
      while ( v4 != 5 )
      {
        v4 = (v4 + 1) & 0xFF;
        if ( GetMonData((int)&dword_3004360[25 * v4], 11, v5) )
          goto _0806C528;
      }
      goto _0806C558;
    case 1:
      v7 = 16 * a1;
      while ( v4 )
      {
        v4 = (v4 - 1) & 0xFF;
        if ( v4 != 6 && GetMonData((int)&dword_3004360[25 * v4], 11, v5) )
        {
_0806C528:
          v6 = gSprites;
          *(_WORD *)&gSprites[4 * (v7 + v3) + 46] = v4;
          goto _0806C566;
        }
      }
_0806C558:
      *(_WORD *)&gSprites[4 * (v7 + v3) + 46] = 7;
      v6 = gSprites;
_0806C566:
      *(_WORD *)&v6[4 * (v7 + v3) + 48] = 0;
      return v15;
    case 4:
      if ( !a2 )
      {
        v8 = &gSprites[68 * a1];
        v9 = *((_WORD *)v8 + 24);
        if ( ((v9 - 2) & 0xFFFFu) > 1 )
        {
          if ( GetMonData((int)&unk_3004428, 11, v5) )
          {
            *((_WORD *)v8 + 23) = 2;
          }
          else if ( GetMonData((int)&unk_300448C, 11, v10) )
          {
            *((_WORD *)v8 + 23) = 3;
          }
          return v15;
        }
_0806C5E2:
        *((_WORD *)v8 + 23) = v9;
        return v15;
      }
      if ( a2 != 1 )
        return v15;
      v8 = &gSprites[68 * a1];
      v9 = *((_WORD *)v8 + 24);
      if ( ((v9 - 4) & 0xFFFFu) <= 1 )
        goto _0806C5E2;
      if ( GetMonData((int)&unk_30044F0, 11, v5) )
      {
        *((_WORD *)v8 + 23) = 4;
      }
      else if ( GetMonData((int)&unk_3004554, 11, v11) )
      {
        *((_WORD *)v8 + 23) = 5;
      }
      return v15;
    case 0:
      if ( ((a2 - 2) & 0xFFu) > 1 )
      {
        if ( ((a2 - 4) & 0xFFu) > 1 )
          return v15;
        v12 = &gSprites[68 * a1];
        v13 = 1;
      }
      else
      {
        v12 = &gSprites[68 * a1];
        v13 = 0;
      }
      *((_WORD *)v12 + 23) = v13;
      *((_WORD *)v12 + 24) = v4;
      return v15;
    default:
      return v15;
  }
}
