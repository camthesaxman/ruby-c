int __fastcall SwitchTaskToFollowupFunc(unsigned __int8 a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  dword_3004B20[10 * a1] = *(_WORD *)&byte_3004B28[40 * a1 + 28] | (*(_WORD *)&byte_3004B28[40 * a1 + 30] << 16);
  return v2;
}
