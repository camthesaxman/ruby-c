int __fastcall GetMonSpriteTemplate_803C5A0(unsigned __int16 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  char *v3; // r0@1
  int v4; // r2@1
  int v5; // r6@1
  int v6; // r7@1
  int v7; // r6@1
  int v8; // r7@1
  int *v9; // r0@3
  int v11; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = (char *)&gSpriteTemplate_8208288 + 24 * a2;
  v4 = *(_DWORD *)v3;
  v5 = *((_DWORD *)v3 + 1);
  v6 = *((_DWORD *)v3 + 2);
  v3 += 12;
  v2024E8C = v4;
  v2024E90 = v5;
  v2024E94 = v6;
  v7 = *((_DWORD *)v3 + 1);
  v8 = *((_DWORD *)v3 + 2);
  v2024E98 = *(_DWORD *)v3;
  v2024E9C = v7;
  v2024EA0 = v8;
  v2024E8E = v2;
  if ( a2 && a2 != 2 )
    v9 = &gUnknown_081EC2A4;
  else
    v9 = (int *)gUnknown_081ECACC;
  v2024E94 = v9[v2];
  return v11;
}
