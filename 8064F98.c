int __fastcall DrawTextWindow(int a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v4; // [sp+10h] [bp-4h]@0

  DrawTextWindowInternal(*(_DWORD *)(*(_DWORD *)(a1 + 44) + 20), (unsigned __int16)sTextWindowBaseTileNum, a2, a3);
  return v4;
}
