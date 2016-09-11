int __fastcall sub_80C5530(unsigned __int8 a1, unsigned __int16 a2, unsigned __int8 a3)
{
  int v3; // r3@1
  int v5; // [sp+4h] [bp-4h]@0

  v3 = a1;
  if ( a1 > 6u )
    v3 = ((unsigned __int8)byte_3004350 - 1) & 0xFF;
  SetMonMoveSlot((int)&dword_3004360[25 * v3], a2, a3);
  return v5;
}
