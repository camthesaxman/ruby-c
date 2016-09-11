int sub_813B108()
{
  int v1; // [sp+Ch] [bp-4h]@0

  sub_80F944C();
  InitMenuInUpperLeftCornerPlaySoundWhenAPressed();
  MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
  MenuDrawTextWindow(0, 0);
  MenuPrint((int)&PCText_Mailbox, 1, 1u);
  MenuDrawTextWindow(0x14u, 0);
  sub_813B01C();
  InitMenu(0, 21, 2, v201FE01, v201FE00, 8);
  return v1;
}
