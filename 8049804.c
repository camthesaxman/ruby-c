int sub_8049804()
{
  int v0; // r0@1
  char *v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = sub_8072DEC();
  sub_804A80C(v0);
  *(_BYTE *)(dword_3004824 + 123) = 0;
  v1 = &gSprites[68 * *(_BYTE *)(dword_3004824 + 64) + 62];
  *v1 &= 0xFBu;
  sub_804ACD8(138593885, 32 * *(_WORD *)(dword_3004824 + 126) + 100728832, 20);
  return v3;
}
