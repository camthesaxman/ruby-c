int __fastcall MapGridGetMetatileIdAt(int a1, int a2)
{
  int v2; // r4@5
  int result; // r0@8

  if ( a1 < 0 || a1 >= dword_3004870 || a2 < 0 || a2 >= dword_3004874 )
    v2 = *(_WORD *)(2 * (((a1 + 1) & 1) + 2 * ((a2 + 1) & 1)) + *(_DWORD *)(v202E828 + 8)) | 0xC00;
  else
    v2 = *(_WORD *)(2 * (a1 + dword_3004870 * a2) + dword_3004878);
  if ( v2 == 1023 )
    result = (*(_WORD *)(2 * (((a1 + 1) & 1) + 2 * ((a2 + 1) & 1)) + *(_DWORD *)(v202E828 + 8)) | 0xC00) & 0x3FF;
  else
    result = v2 & 0x3FF;
  return result;
}
