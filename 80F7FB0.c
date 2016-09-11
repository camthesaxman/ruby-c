int __fastcall sub_80F7FB0(int a1, int a2)
{
  int v2; // r6@1
  unsigned int v3; // r0@1
  signed int v4; // r1@3
  _WORD *v5; // r2@5
  _WORD *v6; // r1@5
  signed int v7; // r3@5
  int v8; // r1@7
  signed int v9; // r3@7
  unsigned int v10; // r4@10
  int v11; // r0@10
  int v12; // r1@11
  int v13; // r7@11
  signed int v14; // r0@11
  char v15; // r0@20
  unsigned int v16; // r0@21
  __int16 v17; // r1@24
  __int16 v18; // r0@27
  int v20; // [sp+10h] [bp-4h]@0

  v2 = a2;
  v3 = *(_WORD *)(a1 + 8);
  if ( v3 <= 5 )
  {
    switch ( v3 )
    {
      case 0u:
        v4 = 33719510;
        if ( !v202E8CC )
          v4 = 33719498;
        v5 = (_WORD *)v4;
        v6 = (_WORD *)(v2 + 12);
        v7 = 5;
        do
        {
          *v6 = *v5;
          ++v5;
          ++v6;
          --v7;
        }
        while ( v7 >= 0 );
        v8 = v2 + 24;
        v9 = 5;
        do
        {
          *(_WORD *)v8;
          *(_WORD *)v8 = -1;
          *(_WORD *)(v8 + 2) = 0;
          *(_WORD *)(v8 + 4) = 0;
          *(_WORD *)(v8 + 6) = 0;
          v8 += 8;
          --v9;
        }
        while ( v9 >= 0 );
        *(_BYTE *)v2 = 0;
        *(_BYTE *)(v2 + 1) = 0;
        *(_WORD *)(v2 + 4) = 0;
        return v20;
      case 2u:
        v10 = *(_WORD *)(a2 + 12 + 2 * *(_BYTE *)a2);
        v11 = sub_814A2D0(v10 >> 9, v10 & 0x1FF);
        *(_WORD *)(v2 + 4) = 0;
        sub_814A2EC(v2, v11, (v10 & 3) + ((v10 >> 3) & 1));
        return v20;
      case 3u:
      case 4u:
        v12 = *(_BYTE *)(a2 + 1);
        v13 = v2 + 8 * v12 + 24;
        v14 = *(_BYTE *)(v2 + 3);
        if ( v14 != 1 )
        {
          if ( v14 <= 1 )
          {
            if ( *(_BYTE *)(v2 + 3) )
              return v20;
            if ( *(_BYTE *)(v2 + 2) )
            {
              v17 = *(_WORD *)(v2 + 10);
              if ( (signed int)*(_WORD *)(v2 + 10) > 10 )
                *(_WORD *)(v2 + 6) -= 2;
              if ( v17 & 1 )
                v18 = *(_WORD *)(v2 + 8) + 64;
              else
                v18 = *(_WORD *)(v2 + 8) - 64;
              *(_WORD *)(v2 + 8) = v18;
              m4aMPlayVolumeControl(&unk_3007400, 0xFFFF, *(_WORD *)(v2 + 6));
              m4aMPlayPitchControl(&unk_3007400, 0xFFFF, *(_WORD *)(v2 + 8));
              ++*(_WORD *)(v2 + 10);
            }
            else
            {
              if ( v12 == 6 || *(_WORD *)v13 == 255 )
              {
                v15 = -2;
_080F8178:
                *(_BYTE *)(v2 + 3) = v15;
                return v20;
              }
              *(_BYTE *)(v2 + 2) = *(_WORD *)(v13 + 2);
              v16 = *(_WORD *)v13;
              if ( v16 <= 0x32 )
                m4aSongNumStart((3 * (v16 / 3 & 0xFFFF) + 249) & 0xFFFF);
              *(_BYTE *)(v2 + 3) = 1;
            }
            --*(_BYTE *)(v2 + 2);
            return v20;
          }
          if ( v14 != 254 )
            return v20;
          m4aMPlayStop(&unk_3007400);
          v15 = -1;
          goto _080F8178;
        }
        *(_BYTE *)(v2 + 1) = v12 + 1;
        *(_BYTE *)(v2 + 3) = 0;
        if ( (unsigned int)*(_WORD *)v13 <= 0x32 )
        {
          *(_WORD *)(v2 + 6) = 16 * *(_WORD *)(v13 + 6) + 256;
          m4aMPlayVolumeControl(&unk_3007400, 0xFFFF, *(_WORD *)(v2 + 6));
          *(_WORD *)(v2 + 8) = *(_WORD *)(v13 + 4) + 512;
          m4aMPlayPitchControl(&unk_3007400, 0xFFFF, *(_WORD *)(v2 + 8));
        }
        break;
      default:
        return v20;
    }
  }
  return v20;
}
