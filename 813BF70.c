int __fastcall sub_813BF70(unsigned __int8 a1)
{
  int v1; // r7@1
  unsigned __int8 v2; // r0@5
  __int16 v3; // r6@7
  int v4; // r0@7
  int *v5; // r4@7
  unsigned __int8 v6; // r0@7
  int v8; // [sp+14h] [bp-4h]@0

  v1 = a1;
  if ( v2039318 )
    LoadCompressedObjectPic((_DWORD *)"pQA\b");
  else
    LoadCompressedObjectPic((_DWORD *)"ÔCA\b");
  LoadCompressedObjectPic((_DWORD *)"\b^A\b");
  LoadCompressedObjectPic((_DWORD *)"TbA\b");
  LoadSpritePalettes((int)&gIntro2SpritePalettes);
  if ( v2039318 )
    v2 = sub_8149368(272, 100);
  else
    v2 = sub_8149310(272, 100);
  v3 = v2;
  v4 = 17 * v2;
  dword_2020020[v4] = (int)sub_813D788;
  *(_DWORD *)((char *)&unk_202000C + v4 * 4) = &gUnknown_0840AE80;
  v5 = &dword_3004B20[10 * v1];
  *((_WORD *)v5 + 5) = v3;
  v6 = sub_8149424(-64, 60);
  dword_2020020[17 * v6] = (int)sub_813D880;
  *((_WORD *)v5 + 6) = v6;
  BeginNormalPaletteFade(-1, 0, 0x10u, 0, -1);
  SetVBlankCallback((int)sub_813B784);
  *((_WORD *)v5 + 4) = (unsigned __int8)sub_8148EC0(1, 0x4000, 1024, 16);
  sub_8148C78(1);
  *v5 = (int)sub_813C080;
  return v8;
}
