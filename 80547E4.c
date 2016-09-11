int SetFieldVBlankCallback()
{
  int v1; // [sp+0h] [bp-4h]@0

  SetVBlankCallback((int)VBlankCB_Field);
  return v1;
}
