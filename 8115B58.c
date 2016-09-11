int __fastcall sub_8115B58(unsigned __int8 a1)
{
  int v1; // r7@1
  signed int v2; // r5@1
  int *v3; // r4@10
  unsigned int v4; // r4@10
  int v5; // r0@11
  int *v6; // r1@12
  int v7; // r3@12
  int v8; // r0@14
  int v10; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( !(word_300179E & 0x40) || (v2 = 1, sub_8115A94(&byte_3004B28[40 * a1 + 8], 0) << 24) )
  {
    if ( !(word_300179E & 0x80) || (v2 = 1, sub_8115A94(&byte_3004B28[40 * v1 + 8], 1u) << 24) )
    {
      if ( !(word_300179E & 0x20) || (v2 = 1, sub_8115A94(&byte_3004B28[40 * v1 + 8], 2u) << 24) )
      {
        if ( !(word_300179E & 0x10) || (v2 = 1, sub_8115A94(&byte_3004B28[40 * v1 + 8], 3u) << 24) )
        {
          if ( v2 )
          {
            v3 = &dword_3004B20[10 * v1];
            sub_8117158(*((_BYTE *)v3 + 16));
            sub_8115928(v1, 0);
            *((_WORD *)v3 + 5) = 0;
            audio_play(5u);
            sub_8124D3C(33657016, 0xFFFF);
            v2019170 &= 0x7Fu;
            v2019164 &= 0x7Fu;
            v2019158 &= 0x7Fu;
            sub_8116EF8(*((_BYTE *)v3 + 16));
            v4 = 0;
            do
            {
              v5 = 68 * *(_BYTE *)(v4 + 33656933);
              *(_WORD *)&gSprites[v5 + 4] = *(_WORD *)&gSprites[v5 + 4] & 0xFC00 | (***(_WORD ***)((char *)&unk_202000C
                                                                                                 + v5)
                                                                                  + *(_WORD *)&gSprites[v5 + 64]) & 0x3FF;
              v4 = (v4 + 1) & 0xFF;
            }
            while ( v4 <= 3 );
            v6 = &dword_3004B20[10 * v1];
            v7 = *((_WORD *)v6 + 8);
            if ( ((v7 - 1) & 0xFFFFu) <= 3 && !(v2019008 & *((_DWORD *)&unk_83F8C08 + 5 * *((_WORD *)v6 + 8))) )
            {
              v8 = 68 * *(_BYTE *)(((v7 - 1) & 0xFF) + 0x2019065);
              *(_WORD *)&gSprites[v8 + 4] = *(_WORD *)&gSprites[v8 + 4] & 0xFC00 | (*(_WORD *)(**(_DWORD **)((char *)&unk_202000C + v8)
                                                                                             + 4)
                                                                                  + *(_WORD *)&gSprites[v8 + 64]) & 0x3FF;
            }
          }
        }
      }
    }
  }
  return v10;
}
