_BOOL4 __fastcall help_system_is_not_first_time(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1

  v3 = (16 * a2 & 0xFFF) + a1;
  v4 = (16 * a3 & 0xFFF) + a1;
  return *(_WORD *)v3 != *(_WORD *)v4
      || !StringCompare((_BYTE *)(v3 + 2), (_BYTE *)(v4 + 2))
      && (*(_DWORD *)(v3 + 8) & 0xFFFFFF00) == (*(_DWORD *)(v4 + 8) & 0xFFFFFF00)
      && (*(_DWORD *)(v3 + 12) & 0xFFFFFF) == (*(_DWORD *)(v4 + 12) & 0xFFFFFF);
}
