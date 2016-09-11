int __fastcall AddBirchSpeechObjects(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@1
  char *v3; // r2@1
  int *v4; // r5@1
  int v5; // r0@1
  char *v6; // r2@1
  int v7; // r0@1
  int v8; // r0@1
  int v10; // [sp+20h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)AddNewGameBirchObject(136, 60, 1);
  dword_2020020[17 * v2] = (int)nullsub_34;
  v3 = &gSprites[68 * v2];
  v3[5] &= 0xF3u;
  v3[62] |= 4u;
  v4 = &dword_3004B20[10 * v1];
  *((_WORD *)v4 + 12) = v2;
  v5 = (unsigned __int8)CreateAzurillSprite(0x68u, 0x48u);
  dword_2020020[17 * v5] = (int)nullsub_34;
  v6 = &gSprites[68 * v5];
  v6[5] &= 0xF3u;
  v6[62] |= 4u;
  *((_WORD *)v4 + 13) = v5;
  v7 = (unsigned __int8)sub_80859BC(0, 120, 60, 0);
  dword_2020020[17 * v7] = (int)nullsub_34;
  gSprites[68 * v7 + 62] |= 4u;
  gSprites[68 * v7 + 5] &= 0xF3u;
  *((_WORD *)v4 + 14) = v7;
  v8 = (unsigned __int8)sub_80859BC(1, 120, 60, 0);
  dword_2020020[17 * v8] = (int)nullsub_34;
  gSprites[68 * v8 + 62] |= 4u;
  gSprites[68 * v8 + 5] &= 0xF3u;
  *((_WORD *)v4 + 15) = v8;
  return v10;
}
