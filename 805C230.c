_BOOL4 __fastcall FieldObjectDoesZCoordMatch(int a1, int a2)
{
  a2 = (unsigned __int8)a2;
  return !(*(_BYTE *)(a1 + 11) & 0xF) || !a2 || (*(_BYTE *)(a1 + 11) & 0xF) == a2;
}
