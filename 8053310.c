int __fastcall get_mapheader_by_bank_and_number(int a1, int a2)
{
  return *(_DWORD *)(*(char **)((char *)&gMapGroups + (4 * a1 & 0x3FFFF)) + (4 * a2 & 0x3FFFF));
}
