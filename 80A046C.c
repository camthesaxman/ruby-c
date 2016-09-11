int __fastcall sub_80A046C(unsigned __int16 a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( a1 != 0xFFFF )
    MenuPrint((int)(&gMoveDescriptions)[4 * (a1 - 1)], 11, 0xFu);
  return v2;
}
