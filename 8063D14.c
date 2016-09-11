int __fastcall InitObjectPriorityByZCoord(int a1, unsigned __int8 a2)
{
  int v3; // [sp+4h] [bp-4h]@0

  *(_BYTE *)(a1 + 66) = *(_BYTE *)(a1 + 66) & 0xC0 | gFieldObjectPriorities_08376070[a2] & 0x3F;
  *(_BYTE *)(a1 + 5) = *(_BYTE *)(a1 + 5) & 0xF3 | 4 * (gFieldObjectPriorities_08376060[a2] & 3);
  return v3;
}
