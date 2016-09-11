int __fastcall GetMonSpriteTemplate_803C56C(__int16 a1, unsigned __int8 a2)
{
  char *v2; // r2@1
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r5@1
  int v7; // r6@1
  int v9; // [sp+Ch] [bp-4h]@0

  v2 = (char *)&gSpriteTemplate_8208288 + 24 * a2;
  v3 = *(_DWORD *)v2;
  v4 = *((_DWORD *)v2 + 1);
  v5 = *((_DWORD *)v2 + 2);
  v2 += 12;
  v2024E8C = v3;
  v2024E90 = v4;
  v2024E94 = v5;
  v6 = *((_DWORD *)v2 + 1);
  v7 = *((_DWORD *)v2 + 2);
  v2024E98 = *(_DWORD *)v2;
  v2024E9C = v6;
  v2024EA0 = v7;
  v2024E8E = a1;
  v2024E94 = &gSpriteAnimTable_81E7C64;
  return v9;
}
