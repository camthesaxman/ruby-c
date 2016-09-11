int __fastcall MapGridSetMetatileEntryAt(int a1, int a2, __int16 a3)
{
  int v4; // [sp+8h] [bp-4h]@0

  if ( a1 >= 0 && a1 < dword_3004870 && a2 >= 0 && a2 < dword_3004874 )
    *(_WORD *)(2 * (a1 + dword_3004870 * a2) + dword_3004878) = a3;
  return v4;
}
