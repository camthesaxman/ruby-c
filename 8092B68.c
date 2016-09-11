int __fastcall sub_8092B68(unsigned __int8 a1)
{
  int *v1; // r6@1
  int v3; // [sp+14h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  StringCopy(
    &gStringVar1,
    *(_BYTE **)&gUnknown_083B5910[(8 * (*((_WORD *)v1 + 11) + *((_WORD *)v1 + 10)) & 0x7FFFF) + 4]);
  sub_80729D8((int)&gUnknown_083B5AB2, 45, 16, 1u);
  StringCopy(
    &gStringVar1,
    *(_BYTE **)&gUnknown_083B5968[(8 * (*((_WORD *)v1 + 13) + *((_WORD *)v1 + 12)) & 0x7FFFF) + 4]);
  sub_80729D8((int)&gUnknown_083B5AB2, 45, 32, 1u);
  StringCopy(
    &gStringVar1,
    *(void **)((char *)&off_83B59CC + (8 * (*((_WORD *)v1 + 15) + *((_WORD *)v1 + 14)) & 0x7FFFF)));
  sub_80729D8((int)&gUnknown_083B5AAC, 45, 48, 1u);
  StringCopy(
    &gStringVar1,
    *(void **)((char *)&off_83B59CC + (8 * (*((_WORD *)v1 + 17) + *((_WORD *)v1 + 16)) & 0x7FFFF)));
  sub_80729D8((int)&gUnknown_083B5AAC, 93, 48, 1u);
  StringCopy(&gStringVar1, *(char **)((char *)off_83B58DC + (8 * (*((_WORD *)v1 + 9) + *((_WORD *)v1 + 8)) & 0x7FFFF)));
  sub_80729D8((int)&gUnknown_083B5AB2, 45, 64, 1u);
  if ( sub_806912C() )
  {
    StringCopy(
      &gStringVar1,
      *(char **)((char *)off_83B58C4 + (8 * (*((_WORD *)v1 + 7) + *((_WORD *)v1 + 6)) & 0x7FFFF)));
    sub_80729D8((int)&gUnknown_083B5AB2, 45, 80, 1u);
  }
  return v3;
}
