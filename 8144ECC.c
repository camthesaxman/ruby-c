signed int __fastcall sub_8144ECC(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r5@1
  unsigned __int8 v4; // r0@9
  int *v5; // r4@9
  int v6; // r0@9
  int *v7; // r5@9
  char *v8; // r6@9
  unsigned __int8 v9; // r0@9
  unsigned __int8 v10; // r0@10
  int v11; // r0@10
  int v12; // r0@11

  v2 = a1;
  v3 = a2;
  if ( byte_3001BAC == 1 )
  {
    v2039358 = 34;
    v203935A = 0;
    sub_8148CB0(a1);
    ++byte_3001BAC;
  }
  else
  {
    if ( (signed int)(unsigned __int8)byte_3001BAC > 1 )
    {
      if ( byte_3001BAC == 2 )
      {
        if ( v2024EAC )
        {
          LoadCompressedObjectPic((_DWORD *)"pQA\b");
          LoadCompressedObjectPic((_DWORD *)"ÔCA\b");
          LoadCompressedObjectPic((_DWORD *)"\b^A\b");
          LoadSpritePalettes((int)&gIntro2SpritePalettes);
          v10 = sub_8149368(120, 46);
          v5 = &dword_3004B20[10 * v3];
          *((_WORD *)v5 + 9) = v10;
          v11 = 17 * v10;
          v7 = dword_2020020;
          dword_2020020[v11] = (int)sub_8145378;
          v8 = (char *)&unk_202000C;
          *(_DWORD *)((char *)&unk_202000C + v11 * 4) = &gUnknown_0840CA54;
          v9 = sub_8149310(272, 46);
        }
        else
        {
          LoadCompressedObjectPic((_DWORD *)"ÔCA\b");
          LoadCompressedObjectPic((_DWORD *)"pQA\b");
          LoadCompressedObjectPic((_DWORD *)"\b^A\b");
          LoadSpritePalettes((int)&gIntro2SpritePalettes);
          v4 = sub_8149310(120, 46);
          v5 = &dword_3004B20[10 * v3];
          *((_WORD *)v5 + 9) = v4;
          v6 = 17 * v4;
          v7 = dword_2020020;
          dword_2020020[v6] = (int)sub_8145378;
          v8 = (char *)&unk_202000C;
          *(_DWORD *)((char *)&unk_202000C + v6 * 4) = &gUnknown_0840CA54;
          v9 = sub_8149368(272, 46);
        }
        *((_WORD *)v5 + 10) = v9;
        v12 = 17 * v9;
        v7[v12] = (int)sub_8145420;
        *(_DWORD *)&v8[v12 * 4] = &gUnknown_0840CA94;
        ++byte_3001BAC;
        return 0;
      }
      if ( byte_3001BAC == 3 )
      {
        sub_8144A68(a1, a2);
        sub_8148E90(v2);
        byte_3001BAC = 0;
        return 1;
      }
    }
    v4000000 = 0;
    v400001C = 8;
    v400001E = 0;
    v4000018 = 0;
    v400001A = 0;
    v4000014 = 0;
    v4000016 = 0;
    v4000050 = 0;
    v4000052 = 0;
    ResetSpriteData();
    FreeAllSpritePalettes();
    byte_3001BAC = 1;
  }
  return 0;
}
