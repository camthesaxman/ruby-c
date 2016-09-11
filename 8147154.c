int sub_8147154()
{
  int v1; // [sp+0h] [bp-4h]@0

  v203933E = 0;
  if ( word_300179E & 1 )
  {
    MenuDrawTextWindow(1u, 0xCu);
    MenuPrint((int)&gUnknown_084116CB, 2, 0xDu);
    SetVBlankCallback((int)sub_8146E3C);
    SetMainCallback2((int)sub_81471A4);
  }
  return v1;
}
