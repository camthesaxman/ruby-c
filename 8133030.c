int __fastcall sub_8133030(unsigned __int8 a1)
{
  int v1; // r7@1
  char *v2; // r1@1
  char *v3; // r0@1
  signed int v4; // r2@1
  char *v5; // r0@2
  int *v6; // r4@3
  int v8; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = &gSprites[68 * *(_BYTE *)(dword_30007B0 + 3) + 62];
  *v2 &= 0xFBu;
  v3 = &gSprites[68 * *(_BYTE *)(dword_30007B0 + 4)];
  v3[62] &= 0xFBu;
  v4 = 0;
  do
  {
    v5 = &gSprites[68 * *(_BYTE *)(dword_30007B0 + v4 + 7) + 62];
    *v5 |= 4u;
    ++v4;
  }
  while ( v4 <= 15 );
  v6 = &gUnknown_08402D08;
  do
  {
    sub_8072C74(33788768, *v6, 0x40u, 2u);
    MenuPrint(33788768, *((_BYTE *)v6 + 4), *((_BYTE *)v6 + 5));
    v6 += 2;
  }
  while ( *v6 );
  if ( !v1 )
    sub_8072AB0((int)"ÎÙÕ×Ü", 24, 120, -64, 0x20u, 1);
  return v8;
}
