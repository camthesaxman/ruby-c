int __fastcall sub_8133140(unsigned __int8 a1)
{
  char *v1; // r1@1
  char *v2; // r0@1
  signed int v3; // r6@1
  int *v4; // r7@1
  char *v5; // r1@2
  int v6; // r6@3
  int v7; // r10@3
  char *v8; // r8@3
  unsigned __int8 v9; // r5@4
  char v10; // r4@4
  int v12; // [sp+8h] [bp-24h]@1
  int v13; // [sp+28h] [bp-4h]@0

  v12 = a1;
  v1 = &gSprites[68 * *(_BYTE *)(dword_30007B0 + 3) + 62];
  *v1 &= 0xFBu;
  v2 = &gSprites[68 * *(_BYTE *)(dword_30007B0 + 4)];
  v2[62] &= 0xFBu;
  v3 = 0;
  v4 = &gUnknown_08402D08;
  do
  {
    v5 = &gSprites[68 * *(_BYTE *)(dword_30007B0 + v3 + 7) + 62];
    *v5 &= 0xFBu;
    ++v3;
  }
  while ( v3 <= 15 );
  v6 = 0;
  v7 = 0;
  v8 = &byte_8402D2C;
  do
  {
    sub_8072C74(33788768, dword_8402D28[v7], 0x40u, 2u);
    v9 = *v8;
    v10 = v8[1];
    MenuPrint(33788768, *v8, v8[1]);
    if ( v6 )
      MenuZeroFillWindowRect(v9, v10 + 2, v9 + 7, v10 + 3);
    v7 += 2;
    v8 += 8;
    v4 += 2;
    ++v6;
  }
  while ( *v4 );
  if ( !v12 )
    sub_8072AB0((int)"ÎÙÕ×Ü", 24, 120, -64, 0x20u, 1);
  return v13;
}
