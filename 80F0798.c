int ShowMapNamePopUpWindow()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( v20087CA )
  {
    if ( v20087CA != 1 )
      return v1;
    sub_80F445C(33589128, (v200876E + 1) & 0xFFFF);
  }
  else
  {
    sub_80F443C(33589128, (unsigned int)*(_WORD *)(4 * v200876E + 0x200893E) << 18 >> 23);
  }
  BasicInitMenuWindow((int)&gWindowConfig_81E710C);
  MenuPrint(33589128, 1, 6u);
  return v1;
}
